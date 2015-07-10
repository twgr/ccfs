function [bLeaf, bLessThanTrain, partitionPoint, projMat, countsNode, iIn] = expandNode(XTrain,YTrain,options,iFeatureNum,depth)

bLessThanTrain = false(0,1);
partitionPoint = 0;
projMat = zeros(0,1);
iIn = zeros(1,0);
if size(YTrain,2)==1
    countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
else
    countsNode = sum(YTrain,1);
end

N = size(XTrain,1);
% Return if one training point, pure node or if options for returning
% fulfilled.  A little case to deal with a binary YTrain is required.
bLeaf = (N<(max(2,options.minPointsForSplit))) || depth>options.maxDepthSplit;

if ~bLeaf
    if size(YTrain,2)>1
        bLeaf = (sum(abs(sum(YTrain,1))>1e-12)<2);
    else
        bLeaf = any(bsxfun(@eq,sum(YTrain(:)),[0,size(YTrain,1)]));
    end
end

if bLeaf
    return
end

%% Subsample features as required for hyperplane sampling

iIn = zeros(1,0);
XTrainBag = zeros(0,0);
YTrainBag = zeros(0,0);
iCanBeSelected = fastUnique(iFeatureNum);
iCanBeSelected(isnan(iCanBeSelected))=[];
lambda = min(numel(iCanBeSelected),options.lambda);
indFeatIn = randperm(numel(iCanBeSelected),lambda);
iFeatIn = iCanBeSelected(indFeatIn);

bInMat = bsxfun(@eq,iFeatureNum(:)',sort(iFeatIn(:)));

iIn = find(any(bInMat,1));


% Check for variation along selected dimensions and resample features that
% have no variation

bXVaries = queryIfColumnsVary(XTrain(:,iIn),options.XVariationTol);

if ~all(bXVaries)
    iInNew = iIn;
    nSelected = 0;
    iIn = iIn(bXVaries);
    while ~all(bXVaries) && lambda>0
        iFeatureNum(iInNew(~bXVaries)) = NaN;
        bInMat(:,iInNew(~bXVaries)) = false;
        bRemainsSelected = any(bInMat,2);
        nSelected = nSelected+sum(bRemainsSelected);
        iCanBeSelected(indFeatIn) = [];
        lambda = min(numel(iCanBeSelected),lambda-nSelected);
        if lambda<1
            break
        end
        indFeatIn = randperm(numel(iCanBeSelected),lambda);
        iFeatIn = iCanBeSelected(indFeatIn);
        bInMat = bsxfun(@eq,iFeatureNum(:)',iFeatIn(:));
        iInNew = find(any(bInMat,1));
        bXVaries = queryIfColumnsVary(XTrain(:,iInNew),options.XVariationTol);
        iIn = sort([iIn,iInNew(bXVaries)]);
    end
end


iIn = randomSubspace(iFeatureNum,options.lambda,options.XVariationTol,XTrain);

if isempty(iIn)
    % This means that there was no variation along any feature, therefore
    % exit.
    bLeaf = true;
    return
end

%% Projection bootstrap if required


if options.bProjBoot
    iTrainThis = randi(size(XTrain,1),size(XTrain,1),1);
    XTrainBag = XTrain(iTrainThis,iIn);
    YTrainBag = YTrain(iTrainThis,:);
else
    XTrainBag = XTrain(:,iIn);
    YTrainBag = YTrain;
end
bXBagVaries = queryIfColumnsVary(XTrainBag,options.XVariationTol);
if ~any(bXBagVaries) || (size(YTrainBag,2)>1 && (sum(abs(sum(YTrainBag,1))>1e-12)<2)) || (size(YTrainBag,2)==1 && any(bsxfun(@eq,sum(YTrainBag(:)),[0,size(YTrainBag,1)])))
    if ~options.bContinueProjBootDegenerate
        bLeaf = true;
        return
    else
        XTrainBag = XTrain(:,iIn);
        YTrainBag = YTrain;
    end
end


if ~isempty(options.projections) && ((size(XTrainBag,1)==2) || queryIfOnlyTwoUniqueRows(XTrainBag)) % Check for only having two points
    % If there are only two points setup a maximum marginal split between the points
    
    [bSplit,projMat,partitionPoint] = twoPointMaxMarginSplit(XTrainBag,YTrainBag,options.XVariationTol);
    if ~bSplit
        bLeaf = true;
    else
        bLessThanTrain = (XTrain(:,iIn)*projMat)<=partitionPoint;
        iDir = 1;
    end
else
    %[projMat, partitionPoint, bLessThanTrain, bLeaf] = getProjAndPartPoint(XTrainBag,XTrain,YTrain,iIn,options.includeOriginalAxes,options.XVariationTol,options.splitCriterion,options.dirIfEqual,options.epsilonCCA);
    
    % Generate the new features as required
    %projMat = componentAnalysisForCompiling(XTrainBag,XTrainBag,options.epsilonCCA);
    bYpresent = any(YTrainBag,1);
    YTrainBag = YTrainBag(:,bYpresent);
    
    muX = sum(XTrainBag,1)/size(XTrainBag,1);
    muY = sum(YTrainBag,1)/size(YTrainBag,1);
    
    % Subtraction of the mean is common to the process of calculating the
    % projection matrices for both CCA and PCA but for computational
    % effificently we don't make this translation when actually applying the
    % projections
    
    XTrainBag = bsxfun(@minus,XTrainBag,muX);
    YTrainBag = bsxfun(@minus,YTrainBag,muY);
    
    [x1,x2] = size(XTrainBag);
    if size(YTrainBag,1) ~= x1
        error('Input sizes do not match');
    elseif x1 == 1
        error('Cannot carry out component analysis with only one point');
    end
    K = size(YTrainBag,2);
    
    % This code is a reduction of the function canoncorr.  This
    % method is explained in the supplementary material
    [q1,r1,p1] = qr(XTrainBag,0);
    % Reduce to full rank within some tolerance
    rankX = sum(abs(diag(r1)) >= (options.epsilonCCA*abs(r1(1))));
    if rankX == 0
        %warning('X doesnt vary so component analysis fails');
        projMat = [1;zeros(size(XTrainBag,2)-1,1)];
        return
    elseif rankX < x2
        q1 = q1(:,1:rankX); r1 = r1(1:rankX,1:rankX);
    end
    
    % This code is a reduction of the function canoncorr.  This
    % method is explained in the supplementary material
    
    [q2,r2,~] = qr(YTrainBag,0);
    % Reduce to full rank within some tolerance
    rankY = sum(abs(diag(r2)) >= (options.epsilonCCA*abs(r2(1))));
    if rankY == 0
        %warning('Y doesnt vary so component analysis fails');
        projMat = [1;zeros(size(XTrainBag,2)-1,1)];
        return
    elseif rankY < K
        q2 = q2(:,1:rankY);
    end
    
    % Solve CCA using the decompositions
    d = min(rankX,rankY);
    [L,~,~] = svd(q1' * q2,0);
    projMat = r1 \ L(:,1:d) * sqrt(x1-1);
    
    % Put coefficients back to their full size and their correct order
    projMat(p1,:) = [projMat; zeros(x2-rankX,d)];
    
    % Normalize the projection matrices.  This ensures that the later tests for
    % close points are triggered appropriately and is useful for
    % interpretability.
    projMat = bsxfun(@rdivide,projMat,sqrt(sum(projMat.^2,1)));
    
    
    
    %% Choose the features to use
    
    if options.includeOriginalAxes
        projMat = [projMat,eye(size(projMat,1))];
    end
    
    UTrain = XTrain(:,iIn)*projMat;
    % This step catches splits based on no significant variation
    bUTrainVaries = queryIfColumnsVary(UTrain,options.XVariationTol);
    
    if ~any(bUTrainVaries)
        bLeaf = true;
        nProjDirs = 0;
        splitGains = -inf*ones(nProjDirs,1);
        iSplits = zeros(nProjDirs,1);
    else
        UTrain = UTrain(:,bUTrainVaries);
        projMat = projMat(:,bUTrainVaries);
        nProjDirs = size(UTrain,2);
        splitGains = NaN(nProjDirs,1);
        iSplits = NaN(nProjDirs,1);
    end
    
    
    
    %% Search over splits using provided method
    
    for nVarAtt = 1:nProjDirs
        
        % Calculate the probabilities of being at each class in each of child
        % nodes based on proportion of training data for each of possible
        % splits using current projection
        [UTrainSort,iUTrainSort] = sort(UTrain(:,nVarAtt));
        YTrainSort = YTrain(iUTrainSort,:);
        if size(YTrain,2)==1
            LeftCumCounts = [(1:numel(YTrainSort))'-cumsum(YTrainSort),cumsum(YTrainSort)];
        else
            LeftCumCounts = cumsum(YTrainSort,1);
        end
        RightCumCounts = bsxfun(@minus,LeftCumCounts(end,:),LeftCumCounts);
        bUniquePoints = [diff(UTrainSort,[],1)>options.XVariationTol;false];
        pL = bsxfun(@rdivide,LeftCumCounts,sum(LeftCumCounts,2));
        pR = bsxfun(@rdivide,RightCumCounts,sum(RightCumCounts,2));
        
        % Calculate the metric values of the current node and two child nodes
        if strcmpi(options.splitCriterion,'gini')
            metricLeft = 1-sum(pL.^2,2);
            metricRight = 1-sum(pR.^2,2);
        elseif strcmpi(options.splitCriterion,'info')
            pLProd = pL.*log2(pL);
            pLProd(pL==0) = 0;
            metricLeft = -sum(pLProd,2);
            pRProd = pR.*log2(pR);
            pRProd(pR==0) = 0;
            metricRight = -sum(pRProd,2);
        else
            metricLeft = zeros(size(pL,1),1);
            metricRight = zeros(size(pL,1),1);
            error('Invalid split criterion');
        end
        metricCurrent = metricLeft(end);
        metricLeft(~bUniquePoints) = inf;
        metricRight(~bUniquePoints) = inf;
        
        % Calculate gain in metric for each of possible splits based on current
        % metric value minus metric value of child weighted by number of terms
        % in each child
        metricGain = metricCurrent-((1:N)'.*metricLeft+(N-1:-1:0)'.*metricRight)/N;
        
        % Randomly sample from equally best splits
        [splitGains(nVarAtt),iSplits(nVarAtt)] = max(metricGain(1:end-1));
        iEqualMax = find(abs(metricGain(1:end-1)-splitGains(nVarAtt))<(10*eps));
        if isempty(iEqualMax)
            iEqualMax = 1;
        end
        iSplits(nVarAtt) = iEqualMax(randi(numel(iEqualMax)));
        
    end
    
    % If no split gives a positive gain then stop
    if max(splitGains)<0
        bLeaf = true;
        bLessThanTrain = false(0,1);
        partitionPoint = 0;
        projMat = zeros(size(XTrain,2),1);
    else
        
        % Establish between projection direction
        maxGain = max(splitGains);
        iEqualMax = find(abs(splitGains-maxGain)<(10*eps));
        % Use given method to break ties
        if strcmpi(options.dirIfEqual,'rand')
            iDir = iEqualMax(randi(numel(iEqualMax)));
        elseif strcmpi(options.dirIfEqual,'first')
            iDir = iEqualMax(1);
        else
            error('invalid dirIfEqual');
        end
        iSplit = iSplits(iDir);
        
        
        %% Establish partition point and assign to child
        
        projMat=projMat(:,iDir(1));
        
        UTrain = UTrain(:,iDir);
        UTrainSort = sort(UTrain);
        
        % The convoluted nature of the below is to avoid numerical errors
        uTrainSortLeftPart = UTrainSort(iSplit);
        UTrainSort = UTrainSort-uTrainSortLeftPart;
        partitionPoint = UTrainSort(iSplit)*0.5+UTrainSort(iSplit+1)*0.5;
        partitionPoint = partitionPoint+uTrainSortLeftPart;
        UTrainSort = UTrainSort+uTrainSortLeftPart; %#ok<NASGU>
        
        bLessThanTrain = UTrain<=(repmat(partitionPoint,size(UTrain,1),1));
        
        if ~any(bLessThanTrain(:)) || all(bLessThanTrain(:))
            error('Suggested split with empty');
        end
    end
    
    
end

projMat = projMat(:,1);

end