function tree = growTree(XTrain,YTrain,options,iFeatureNum,depth)

%% First do checks for whether we should immediately terminate

N = size(XTrain,1);
if (N<options.minPointsForSplit) || (sum(abs(sum(YTrain,1))<1e-12)<2) || (isnumeric(options.maxDepthSplit) && depth>options.maxDepthSplit)
    % Return if one training point, pure node or if options for returning fulfilled
    setupLeaf
    return
elseif depth>490 && strcmpi(options.maxDepthSplit,'stack')
    error('Tree is too deep and causing stack issues');
end


%% Bootstrap for the projection bootstrap if required

% Bag
if options.bBootForCanonCorr
    iTrainThis = datasample(1:size(XTrain,1),size(XTrain,1));
    XTrainBag = XTrain(iTrainThis,:);
    YTrainBag = YTrain(iTrainThis,:);
else
    XTrainBag = XTrain;
    YTrainBag = YTrain;
end

bXBagVaries = queryIfColumnsVary(XTrainBag,options.XVariationTol);
if (sum(abs(sum(YTrainBag,1))<1e-12)<2)  || ~any(bXBagVaries)
    setupLeaf
    error('Need to check that setting up a leaf here rather than just resetting the original data when the original XTrain varies does not harm the results');
    return
end


%% Check for only having two points

if ~isempty(options.projections) && queryIfOnlyTwoUniqueRows(XTrainBag)
    % If there are only two points setup a maximum marginal split between the points
    [bSplit, projMat, partitionPoint, bLeftTrain] = twoPointMaxMarginSplit(XTrainBag,YVecTrainBag);
    iDir = 1;
    iIn = 1:size(XTrainBag,2);
    if ~bSplit
        setupLeaf
    else
        makeSubTrees();
    end
    return
end

%% Subsample features as required for hyperplane sampling

iCanBeSelected = unique(iFeatureNum(bXBagVaries));
nIncludeCC = min(numel(iCanBeSelected),options.nIncludeCC);
indFeatIn = randperm(numel(iCanBeSelected),nIncludeCC);
iFeatIn = iCanBeSelected(indFeatIn);

bIn = any(bsxfun(@eq,iFeatureNum(:)',iFeatIn(:)),1);
iIn = find(bIn);

%% Generate the new features as required

if ~isemtpy(options.projections)
    projMat = componentAnalysis(XTrainBag(:,iIn),YTrainBag,options.projections);
end

%% Choose the features to use

if ~ischar(includeOriginalAxes) && ~includeOriginalAxes
    if isempty(projMat)
        error('Must make new features to have includeOriginalAxes false');
    end
elseif strcmpi(includeOriginalAxes,'sampled')
    projMat = [projMat,eye(size(projMat,1))];
elseif strcmpi(includeOriginalAxes,'all')
    projMatNew = zeros(size(XTrain,2),size(projMat,2));
    projMatNew(iIn,iIn) = projMat;
    iIn = find(bXBagVaries);
    projMat = [projMatNew(iIn,iIn),eye(numel(iIn))];
else
    error('Invalid option for includeOriginalAxes');
end

UTrain = XTrain(:,iIn)*projMat;
% This step is important as it catches splits based on no significant
% variation
bUTrainVaries = queryIfColumnsVary(UTrain,options.XVariationTol);

if ~any(bUTrainVaries)
    setupLeaf;
    return
end

UTrain = UTrain(:,bUTrainVaries);
projMat = projMat(:,bUTrainVaries);

%% Search over splits using provided method

nProjDirs = size(UTrain,2);
splitGains = NaN(nProjDirs,1);
iSplits = NaN(nProjDirs,1);

for nVarAtt = 1:nProjDirs
    
    [UTrainSort,iUTrainSort] = sort(UTrain(:,nVarAtt));
    YTrainSort = YTrain(iUTrainSort,:);
    if size(YTrain,2)==1
        CumCounts = [(1:numel(YTrainSort))'-cumsum(YTrainSort),cumsum(YTrainSort)];
    else
        CumCounts = cumsum(YTrainSort,1);
    end
    OtherCumCounts = bsxfun(@minus,CumCounts(end,:),CumCounts);
    bUniquePoints = [diff(UTrainSort,[],1)>1e-10;false];
    
    pL = bsxfun(@rdivide,CumCounts,sum(CumCounts,2));
    pR = bsxfun(@rdivide,OtherCumCounts,sum(OtherCumCounts,2));
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
        error('Invalid split criterion');
    end
    metricCurrent = metricLeft(end);
    metricLeft(~bUniquePoints) = 1e6;
    metricRight(~bUniquePoints) = 1e6;
    giniGain = metricCurrent-((1:N)'.*metricLeft+(N-1:-1:0)'.*metricRight)/N;
    
    [splitGains(nVarAtt),iSplits(nVarAtt)] = max(giniGain(1:end-1));
    iEqualMax = find(abs(giniGain(1:end-1)-splitGains(nVarAtt))<(10*eps));
    % Randomly same from equally best.  Add one as was max from 2 to
    % end
    try
        iSplits(nVarAtt) = iEqualMax(randi(numel(iEqualMax)));
    catch
        disp(['GiniGains ' num2str(splitGains(nVarAtt)) ' iSplits ' num2str(iSplits(nVarAtt))]);
    end
    
end


if max(splitGains)<0
    setupLeaf
    return
end
if strcmpi(options.dirIfEqual,'rand')
    maxGain = max(splitGains);
    iEqualMax = find(abs(splitGains-maxGain)<(10*eps));
    % Randomly same from the all gains equal to the best gain
    iDir = iEqualMax(randi(numel(iEqualMax)));
elseif strcmpi(options.dirIfEqual,'maxCorr')    
    [~,iDir] = max(splitGains);
    error('In truth need to be more careful here');
else
    error('invalid dirIfEqual');
end
iSplit = iSplits(iDir);


%% Setup Finish
UTrain = UTrain(:,iDir);
UTrainSort = sort(UTrain);

% The convoluted nature of the below is to avoid numerical errors if the
% parition point is taken direct
uTrainSortLeftPart = UTrainSort(iSplit);
UTrainSort = UTrainSort-uTrainSortLeftPart;
partitionPoint = UTrainSort(iSplit)*0.5+UTrainSort(iSplit+1)*0.5;
partitionPoint = partitionPoint+uTrainSortLeftPart;
UTrainSort = UTrainSort+uTrainSortLeftPart; %#ok<NASGU>

bLeftTrain = UTrain<=partitionPoint;

if ~any(bLeftTrain) || all(bLeftTrain)
    warning('Suggested split with empty');
    setupLeaf;
    return;
end

makeSubTrees();

%% Nested Functions after here

    function makeSubTrees
        if size(YTrain,2)==1
            countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
        else
            countsNode = sum(YTrain,1);
        end
        [~,label] = max(countsNode+options.pWhenEven/100+1e-8*rand(size(countsNode)));
        maxCounts = max(countsNode);
        nEqualMax = sum(maxCounts==countsNode);
        if nEqualMax<2
            options.pWhenEven = countsNode/sum(countsNode);
        end
        treeLeft = growTree(XTrain(bLeftTrain,:),YTrain(bLeftTrain,:),options,iFeatureNum,depth+1);
        treeRight = growTree(XTrain(~bLeftTrain,:),YTrain(~bLeftTrain,:),options,iFeatureNum,depth+1);
        tree.bLeaf = false;
        tree.label = label;
        tree.trainingCounts = countsNode;
        tree.iIn = iIn;
        tree.decisionProjection = projMat(:,iDir);
        tree.paritionPoint = partitionPoint;
        tree.lessthanChild = treeLeft;
        tree.greaterthanChild = treeRight;
    end

    function setupLeaf
        if size(YTrain,2)==1
            countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
        else
            countsNode = sum(YTrain,1);
        end
        [~,label] = max(countsNode+options.pWhenEven/100+1e-8*rand(size(countsNode)));
        countsTrain = countsNode;
        tree.bLeaf = true;
        tree.label = label;
        tree.trainingCounts = countsTrain;
    end

    function [bSp, rmm, cmm, bLeft] = twoPointMaxMarginSplit(X,Y)
        % This should only be done if X has exactly 2 unique rows
        bType1 = all(abs(bsxfun(@minus,X,X(1,:)))<options.XVariationTol,2);
        if size(Y,2)==1
            YLeft = Y;
            YRight = ~Y;
        else
            YLeft = Y(bType1,:);
            YRight = Y(~bType1,:);
        end
        if all(sum(YLeft,1)==sum(YRight,1))
            % Here the two unique points have identical sets of class
            % labels and so we can't split
            bSp = false;
            rmm = [];
            cmm = [];
            bLeft = [];
            return
        else
            bSp = true;
        end
        % Otherwise the optimal spliting plane is the plane perpendicular
        % to the vector between the two points (rmm) and the maximal
        % marginal split point (cmm) is halway between the two points on
        % this line.
        iType2 = find(~bType1,1);
        rmm = (X(iType2,:)-X(1,:))';
        cmm = 0.5*(X(iType2,:)*rmm+X(1,:)*rmm);
        if isnan(cmm) || isinf(cmm)
            error('Suggested split point at infitity / nan');
        end
        % Setup for left right
        if X(1,:)*rmm<cmm
            bLeft = bType1;
        else
            bLeft = ~bType1;
        end
    end

end

function bVar = queryIfColumnsVary(XvarToTest,tol)
% Function that says whether columns are constant or not
bVar = abs(XvarToTest(1,:)-XvarToTest(2,:))>tol;
bVar(~bVar) = max(abs(diff(XvarToTest(:,~bVar),[],1)),[],1)>tol;
end

function bLessThanTwoUniqueRows = queryIfOnlyTwoUniqueRows(X)
% Function that checks if an array has only two unique rows as this can
% cause failure of for example LDA
if size(X,1)==2
    bLessThanTwoUniqueRows = true;
    return
end
bEqualFirst = all(bsxfun(@eq,X,X(1,:)),2);
iFirstNotEqual = find(~bEqualFirst,1);
if isempty(iFirstNotEqual)
    bLessThanTwoUniqueRows = true;
    return;
end
iToCheck = find(~bEqualFirst(2:end))+1;
bNotUnique = all(bsxfun(@eq,X(iToCheck,:),X(iFirstNotEqual,:)),2);
bLessThanTwoUniqueRows = all(bNotUnique);
end