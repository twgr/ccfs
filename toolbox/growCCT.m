function tree = growCCT(XTrain,YTrain,bReg,options,iFeatureNum,depth)
%growTree grows a CCT, recursively calling itself until leaves are reached
%
% function CCT = growCCT(XTrain,YTrain,bReg,options,iFeatureNum,depth)
%
% Function applies greedy splitting according to the CCT algorithm and the
% provided options structure.  This is equivalent to alogrithm 2 in the
% paper if the options structure is default.  Algorithm either returns a
% leaf or forms an internal splitting node in which case the function
% recursively calls itself for each of the children.
%
% Inputs:
%    XTrain      = Array giving training features.  Data should be
%                  processed using processInputData before being passed to
%                  CCT
%    YTrain      = Class data formatted as per output of classExpansion
%    bReg        = Whether to perform regression instead of classification.
%                  Default = false (i.e. classification).
%    options     = Options class of type optionsClassCCF.  Some fields are
%                  updated during recursion
%    iFeatureNum = Grouping of features as per processInputData.  During
%                  recursion if a feature is found to be identical across
%                  data points, the corresponding values in iFeatureNum are
%                  replaced with NaNs.
%    depth       = Current tree depth (zero based)
%    bReg        = Whether the tree is a regression tree
%
% Outputs
%   tree         = Structure containing learnt tree.  Prediction can be
%                  made using predictFromCCT
%
% Tom Rainforth 22/06/15

% Set any missing required variables

if isempty(options.mseTotal)
    options.mseTotal = var(YTrain,[],1);
end

%% First do checks for whether we should immediately terminate

N = size(XTrain,1);
% Return if one training point, pure node or if options for returning
% fulfilled.  A little case to deal with a binary YTrain is required.
bStop = (N<(max(2,options.minPointsForSplit))) || (isnumeric(options.maxDepthSplit) && depth>options.maxDepthSplit);
if bStop
    tree = setupLeaf(YTrain,bReg,options);
    return
elseif ~bReg && size(YTrain,2)>1
    if (sum(abs(sum(YTrain,1))>1e-12)<2)
        tree = setupLeaf(YTrain,bReg,options);
        return
    end
elseif ~bReg && any(sum(YTrain)==[0,size(YTrain,1)])
    tree = setupLeaf(YTrain,bReg,options);
    return
elseif bReg && all(var(YTrain)<(options.mseTotal*options.mseErrorTolerance))
    tree = setupLeaf(YTrain,bReg,options);
    return
end

if depth>490 && strcmpi(options.maxDepthSplit,'stack')
    error('Tree is too deep and causing stack issues');
end

%% Subsample features as required for hyperplane sampling

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
        lambda = min(numel(iCanBeSelected),options.lambda-nSelected);
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

if isempty(iIn)
    % This means that there was no variation along any feature, therefore
    % exit.
    tree = setupLeaf(YTrain,bReg,options);
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
if ~any(bXBagVaries) || ...
        (size(YTrainBag,2)>1 && (sum(abs(sum(YTrainBag,1))>1e-12)<2)) || ...
        (~bReg && size(YTrainBag,2)==1 && any(sum(YTrainBag)==[0,size(YTrainBag,1)]))
    if ~options.bContinueProjBootDegenerate
        tree = setupLeaf(YTrain,bReg,options);
        return
    else
        XTrainBag = XTrain(:,iIn);
        YTrainBag = YTrain;
    end
end


%% Check for only having two points

if ~isempty(options.projections) && ((size(XTrainBag,1)==2) || queryIfOnlyTwoUniqueRows(XTrainBag))
    % If there are only two points setup a maximum marginal split between the points
    
    [bSplit,projMat,partitionPoint] = twoPointMaxMarginSplit(XTrainBag,YTrainBag,bReg,options.XVariationTol);
    if ~bSplit
        tree = setupLeaf(YTrain,bReg,options);
        return
    else
        bLessThanTrain = (XTrain(:,iIn)*projMat)<=partitionPoint;
        iDir = 1;
    end
else
    % Generate the new features as required
    
    if options.bRCCA
        [wZ,bZ] = genFeatureExpansionParameters(XTrainBag,options.rccaNFeatures,options.rccaLengthScale);
        fExp = makeExpansionFunc(wZ,bZ,options.rccaIncludeOriginal);
        XTrainBag = fExp(XTrainBag);
        projMat = regCCA_alt(XTrainBag,YTrainBag,options.rccaRegLambda,options.rccaRegLambda,1e-8);
        if isempty(projMat)
            projMat = ones(size(XTrainBag,2),1);
        end
    elseif ~isempty(options.projections)
        projMat = componentAnalysis(XTrainBag,YTrainBag,options.projections,options.epsilonCCA);
    else
        projMat = NaN(size(XTrainBag,2),0);
    end
    
    
    
    %% Choose the features to use
    
    if ~ischar(options.includeOriginalAxes) && ~options.includeOriginalAxes
        if isempty(projMat)
            error('Must make new features to have includeOriginalAxes false');
        end
    elseif strcmpi(options.includeOriginalAxes,'sampled')
        projMat = [projMat,eye(size(projMat,1))];
    elseif strcmpi(options.includeOriginalAxes,'all')
        projMatNew = zeros(size(XTrain,2),size(projMat,2));
        projMatNew(iIn,:) = projMat;
        iIn = find(~isnan(iFeatureNum));
        projMat = [projMatNew(iIn,:),eye(numel(iIn))];
    else
        error('Invalid option for includeOriginalAxes');
    end
    
    if options.bRCCA
        UTrain = fExp(XTrain(:,iIn))*projMat;
    else
        UTrain = XTrain(:,iIn)*projMat;
    end
    % This step catches splits based on no significant variation
    bUTrainVaries = queryIfColumnsVary(UTrain,options.XVariationTol);
    
    if ~any(bUTrainVaries)
        tree = setupLeaf(YTrain,bReg,options);
        return
    end
    
    UTrain = UTrain(:,bUTrainVaries);
    projMat = projMat(:,bUTrainVaries);
    
    %% Search over splits using provided method
    
    nProjDirs = size(UTrain,2);
    splitGains = NaN(nProjDirs,1);
    iSplits = NaN(nProjDirs,1);
    
    for nVarAtt = 1:nProjDirs
        
        % Calculate the probabilities of being at each class in each of child
        % nodes based on proportion of training data for each of possible
        % splits using current projection
        [UTrainSort,iUTrainSort] = sort(UTrain(:,nVarAtt));
        bUniquePoints = [diff(UTrainSort,[],1)>options.XVariationTol;false];
        YTrainSort = YTrain(iUTrainSort,:);
        
        if size(YTrain,2)==1 && ~bReg
            leftCum = [(1:numel(YTrainSort))'-cumsum(YTrainSort),cumsum(YTrainSort)];
        else
            leftCum = cumsum(YTrainSort,1);
        end
        rightCum = bsxfun(@minus,leftCum(end,:),leftCum);
        
        if ~bReg
           pL = bsxfun(@rdivide,leftCum,sum(leftCum,2));
           pR = bsxfun(@rdivide,rightCum,sum(rightCum,2));
        end
        
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
        elseif strcmpi(options.splitCriterion,'mse')
            cumSqLeft = cumsum(YTrainSort.^2);
            if ((cumSqLeft(end)/N)-(leftCum(end)/N)^2)<(options.mseTotal*options.mseErrorTolerance)
                % Total variation is less then the allowed tolerance so
                % terminate and construct a leaf
                tree = setupLeaf(YTrain,bReg,options);
                return
            end
            metricLeft = calc_mse([zeros(size(YTrainSort,2));leftCum],cumSqLeft,YTrainSort);
            % For calculating the right need to go in additive order again
            % so go from other end and then flip
            metricRight = [0;calc_mse(rightCum(end:-1:1,:),...
                                      cumSqLeft(end)-cumSqLeft(end-1:-1:1),...
                                      YTrainSort(end:-1:2,:))];
            metricRight = metricRight(end:-1:1);
        else
            error('Invalid split criterion');
        end
        
        metricCurrent = metricLeft(end); 
        metricLeft(~bUniquePoints) = inf;
        metricRight(~bUniquePoints) = inf;
        
        % Calculate gain in metric for each of possible splits based on current
        % metric value minus metric value of child weighted by number of terms
        % in each child
        metricGain = metricCurrent-((1:N)'.*metricLeft+(N-1:-1:0)'.*metricRight)/N;
        
        % Disallow splits that violate the minimum number of leaf points
        metricGain(1:(options.minPointsLeaf-1)) = -inf;
        metricGain((end-(options.minPointsLeaf-1)):end) = -inf; % Note that end is never chosen anyway
        
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
        tree = setupLeaf(YTrain,bReg,options);
        return
    end
    
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
    
    UTrain = UTrain(:,iDir);
    UTrainSort = sort(UTrain);
    
    % The convoluted nature of the below is to avoid numerical errors
    uTrainSortLeftPart = UTrainSort(iSplit);
    UTrainSort = UTrainSort-uTrainSortLeftPart;
    partitionPoint = UTrainSort(iSplit)*0.5+UTrainSort(iSplit+1)*0.5;
    partitionPoint = partitionPoint+uTrainSortLeftPart;
    UTrainSort = UTrainSort+uTrainSortLeftPart; %#ok<NASGU>
    
    bLessThanTrain = UTrain<=partitionPoint;
    
    if ~any(bLessThanTrain) || all(bLessThanTrain)
        error('Suggested split with empty');
    end
    
end

%% Recur tree growth to child nodes and constructs tree struct
% to return

if ~bReg
    % Update ancestral counts for breaking ties if needed
    if size(YTrain,2)==1
        countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
    else
        countsNode = sum(YTrain,1);
    end
    nNonZeroCounts = sum(countsNode>0);
    nUniqueNonZeroCounts = numel(fastUnique(countsNode));
    if nUniqueNonZeroCounts==nNonZeroCounts
        options.ancestralProbs = countsNode/sum(countsNode);
    else
        options.ancestralProbs = [options.ancestralProbs;countsNode/sum(countsNode)];
    end
    tree.trainingCounts = countsNode;
end

treeLeft = growCCT(XTrain(bLessThanTrain,:),YTrain(bLessThanTrain,:),bReg,options,iFeatureNum,depth+1);
treeRight = growCCT(XTrain(~bLessThanTrain,:),YTrain(~bLessThanTrain,:),bReg,options,iFeatureNum,depth+1);
tree.bLeaf = false;
tree.iIn = iIn;
if options.bRCCA && exist('fExp','var')
    tree.featureExpansion = fExp;
end
tree.decisionProjection = projMat(:,iDir);
tree.paritionPoint = partitionPoint;
tree.lessthanChild = treeLeft;
tree.greaterthanChild = treeRight;
tree.Npoints = N;

end

function tree = setupLeaf(YTrain,bReg,options)
% Update tree struct to make node a leaf

tree.bLeaf = true;

if bReg
    % TODO add other possible leaf models
    
    tree.mean = mean(YTrain,1);
    tree.std_dev = std(YTrain,[],1);
    
    % If a mapping has been applied, invert it
    if ~isempty(options.org_stdY)
        tree.mean = tree.mean.*options.org_stdY;
        tree.std_dev = tree.std_dev.*options.org_stdY;
    end
    if ~isempty(options.org_muY)
        tree.mean = tree.mean+options.org_muY;
    end
else
    
    if size(YTrain,2)==1
        countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
    else
        countsNode = sum(YTrain,1);
    end
    maxCounts = max(countsNode);
    bEqualMaxCounts = maxCounts == countsNode;
    if sum(bEqualMaxCounts)==1
        label = find(bEqualMaxCounts);
    else
        nRecur = size(options.ancestralProbs,1);
        while nRecur>0
            countsTieBreak = countsNode+options.ancestralProbs(nRecur,:)/1e9;
            maxCounts = max(countsTieBreak);
            bEqualMaxCounts = maxCounts == countsTieBreak;
            if sum(bEqualMaxCounts)==1
                label = find(bEqualMaxCounts);
                break
            else
                nRecur = nRecur-1;
            end
            if nRecur==0
                [~,label] = max(countsNode+rand(size(countsNode))/1e9);
            end
        end
    end
    tree.labelClassId = label;
    tree.trainingCounts = countsNode;
end

tree.Npoints = size(YTrain,1);

end

function f = makeExpansionFunc(wZ,bZ,bIncOrig)
    if bIncOrig
        f = @(x) [x,featureExpansion(x,wZ,bZ)];
    else
        f = @(x) featureExpansion(x,wZ,bZ);
    end
end

function value = calc_mse(cumtotal,cumsq,YTrainSort)
% CMSE(j)=sigma(j)/j-(1/j^2)(mu(j-1)^2+Y(j)^2+2mu(j-1)Y(j))
%   where sigma(j) = sum_{i=1}^j Y(j)^2 i.e. cumsq(j)
%   and      mu(j) = sum_{i=1}^j Y(j) i.e. cumtotal(j+1)
% The mean 2 is to then take the average over the variances
% for multi-output regression

value = mean(bsxfun(@rdivide,cumsq,(1:size(YTrainSort,1))')-...
             bsxfun(@rdivide, cumtotal(1:end-1,:).^2+YTrainSort.^2+2*cumtotal(1:end-1,:).*YTrainSort...
                            , ((1:size(YTrainSort,1)).^2)'),2);
                                            
end