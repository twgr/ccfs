function tree = growCCTnotRecursive(XTrain,YTrain,options,iFeatureNum,depth)
%growTree grows a CCT, recursively calling itself until leaves are reached
%
% function CCT = growCCT(XTrain,YTrain,options,iFeatureNum,depth)
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
%    options     = Options class of type optionsClassCCT.  Some fields are
%                  updated during recursion
%    iFeatureNum = Grouping of features as per processInputData.  During
%                  recursion if a feature is found to be identical across
%                  data points, the corresponding values in iFeatureNum are
%                  replaced with NaNs.
%    depth       = Current tree depth (zero based)
%
% Outputs
%   tree         = Structure containing learnt tree.  Prediction can be
%                  made using predictFromCCT
%
% TR 22/06/15

%% First do checks for whether we should immediately terminate

D = size(XTrain,2);
K = max(2,size(YTrain,2));

nNodesToPreassign = 2000;

%variedEmpty = row_vector_var_size_assign_capped(0,numel(iFeatureNum));
variedEmptyRow = iFeatureNum;
variedEmptyRow = zeros(1,0);

variedEmptyCol = iFeatureNum';
variedEmptyCol = zeros(0,1);

iPres1 = int64((1:size(XTrain,1))');
iPresEmpty = iPres1;
iPresEmpty = int64(zeros(1,0));

zeroCol = zeros(2,1);
zeroCol = zeros(nNodesToPreassign,1);

falseCol = false(2,1);
falseCol = false(nNodesToPreassign,1);

stepCol = (1:2)';
stepCol = (1:nNodesToPreassign)';

zero2Col = zeros(2,2);
zero2Col = zeros(nNodesToPreassign,2);

onesCol = ones(2,1);
onesCol = ones(nNodesToPreassign,1);

zeroKCol = zeros(2,K);
zeroKCol = zeros(nNodesToPreassign,K);

nanCol = NaN(2,1);
nanCol = NaN(nNodesToPreassign,1);

iPresStruct = struct('inds',iPresEmpty);
iPresStruct = repmat(struct('inds',iPresEmpty),nNodesToPreassign,1);

indsStruct = struct('inds',variedEmptyRow);
indsStruct = repmat(struct('inds',variedEmptyRow),nNodesToPreassign,1);

phiStruct = struct('phi',variedEmptyCol);
phiStruct = repmat(struct('phi',variedEmptyCol),nNodesToPreassign,1);

tree = struct('nextChild',2,'bExpanded',falseCol,'nodeId',stepCol,...
    'bLeaf',falseCol,'childIds',zero2Col,...
    'parentId',zeroCol,'depth',depth*onesCol,...
    'iPresent',iPresStruct,'iFeatNum',indsStruct,...
    'trainingCounts',zeroKCol,'labelClassId',zeroCol,...
    'partitionPoint',nanCol,'iIn',indsStruct,...
    'decisionProjection',phiStruct);

tree.iFeatNum(1).inds = iFeatureNum;
tree.iPresent(1).inds = iPres1;


bComplete = false;
XTrainGlobal = XTrain;
YTrainGlobal = YTrain;

maxIter = 1e5;
nIter=1;

while ~bComplete && nIter<maxIter
    
    nIter = nIter+1;
    
    iCalcVarSize = find(~tree.bExpanded(1:(tree.nextChild)-1),1);
    iCalc = iCalcVarSize(1);
    if isempty(iCalc)
        break
    end
    
    XTrain = XTrainGlobal(tree.iPresent(iCalc).inds,:);
    YTrain = YTrainGlobal(tree.iPresent(iCalc).inds,:);
    iFeatureNum = tree.iFeatNum(iCalc).inds;
    depth = tree.depth(iCalc);
    
    N = size(XTrain,1);
    % Return if one training point, pure node or if options for returning
    % fulfilled.  A little case to deal with a binary YTrain is required.
    bLeaf = (N<(max(2,options.minPointsForSplit))) || (isnumeric(options.maxDepthSplit) && depth>options.maxDepthSplit);
    
    if ~bLeaf
        if size(YTrain,2)>1
            bLeaf = (sum(abs(sum(YTrain,1))>1e-12)<2);
        else
            bLeaf = any(sum(YTrain)==[0,size(YTrain,1)]);
        end
    end
    
    if depth>490 && strcmpi(options.maxDepthSplit,'stack')
        %FIXME
        error('Tree is too deep and causing stack issues');
    end
    
    %% Subsample features as required for hyperplane sampling
    
    iIn = zeros(1,0);
    XTrainBag = zeros(0,0);
    YTrainBag = zeros(0,0);
    
    if ~bLeaf
        
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
        
    end
    
    if isempty(iIn)
        % This means that there was no variation along any feature, therefore
        % exit.
        bLeaf = true;
    end
    
    
    %% Projection bootstrap if required
    
    if ~bLeaf
        if options.bProjBoot
            iTrainThis = randi(size(XTrain,1),size(XTrain,1),1);
            XTrainBag = XTrain(iTrainThis,iIn);
            YTrainBag = YTrain(iTrainThis,:);
        else
            XTrainBag = XTrain(:,iIn);
            YTrainBag = YTrain;
        end
        
        bXBagVaries = queryIfColumnsVary(XTrainBag,options.XVariationTol);
        if ~any(bXBagVaries) || (size(YTrainBag,2)>1 && (sum(abs(sum(YTrainBag,1))>1e-12)<2)) || (size(YTrainBag,2)==1 && any(sum(YTrainBag)==[0,size(YTrainBag,1)]))
            if ~options.bContinueProjBootDegenerate
                bLeaf = true;
            else
                XTrainBag = XTrain(:,iIn);
                YTrainBag = YTrain;
            end
        end
    end
    
    
    if bLeaf
        % Can skip to setting up leaf
    elseif ~isempty(options.projections) && ((size(XTrainBag,1)==2) || queryIfOnlyTwoUniqueRows(XTrainBag)) % Check for only having two points
        % If there are only two points setup a maximum marginal split between the points
        
        [bSplit,projMat,partitionPoint] = twoPointMaxMarginSplit(XTrainBag,YTrainBag,options.XVariationTol);
        if ~bSplit
            bLeaf = true;
        else
            bLessThanTrain = (XTrain(:,iIn)*projMat)<=partitionPoint;
            iDir = 1;
        end
    else
        % Generate the new features as required
        
        if ~isempty(options.projections)
            projMat = componentAnalysisForCompiling(XTrainBag,YTrainBag,options.projections,options.epsilonCCA);
        else
            projMat = zeros(D,0);
        end
        
        %% Choose the features to use
        
        if ~ischar(options.includeOriginalAxes) && ~options.includeOriginalAxes
            if isempty(projMat)
                error('Must make new features to have includeOriginalAxes false');
            end
        elseif strcmpi(options.includeOriginalAxes,'sampled')
            projMat = [projMat,eye(size(projMat,1))]; %#ok<AGROW>
        elseif strcmpi(options.includeOriginalAxes,'all')
            projMatNew = zeros(D,size(projMat,2));
            projMatNew(iIn,iIn) = projMat;
            iIn = find(~isnan(iFeatureNum));
            projMat = [projMatNew(iIn,iIn),eye(numel(iIn))];
        else
            error('Invalid option for includeOriginalAxes');
        end
        
        UTrain = XTrain(:,iIn)*projMat;
        % This step catches splits based on no significant variation
        bUTrainVaries = queryIfColumnsVary(UTrain,options.XVariationTol);
        
        if ~any(bUTrainVaries)
            bLeaf = true;
            nProjDirs = 0;
            splitGains = -inf(nProjDirs,1);
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
            
            UTrain = UTrain(:,iDir);
            UTrainSort = sort(UTrain);
            
            % The convoluted nature of the below is to avoid numerical errors
            uTrainSortLeftPart = UTrainSort(iSplit);
            UTrainSort = UTrainSort-uTrainSortLeftPart;
            partitionPoint = UTrainSort(iSplit)*0.5+UTrainSort(iSplit+1)*0.5;
            partitionPoint = partitionPoint+uTrainSortLeftPart;
            UTrainSort = UTrainSort+uTrainSortLeftPart; %#ok<NASGU>
            
            bLessThanTrain = UTrain<=partitionPoint;
            
            if ~any(bLessThanTrain(:)) || all(bLessThanTrain(:))
                error('Suggested split with empty');
            end
        end
        
    end
    
    %% Recur tree growth to child nodes and constructs tree struct
    % to return
    
    if size(YTrain,2)==1
        countsNode = [numel(YTrain)-sum(YTrain),sum(YTrain)];
    else
        countsNode = sum(YTrain,1);
    end
    
    if bLeaf
        maxCounts = max(countsNode);
        bEqualMaxCounts = maxCounts == countsNode;
        idRecursion = iCalc;
        while sum(bEqualMaxCounts)>1
            idRecursion = tree.parentId(idRecursion);
            if idRecursion==0
                iContention = find(bEqualMaxCounts);
                iSel = iContention(randi(numel(iContention)));
                bEqualMaxCounts = false(size(bEqualMaxCounts));
                bEqualMaxCounts(iSel) = true;
                break
            end
            countsAdd = zeros(size(countsNode));
            countsAdd(bEqualMaxCounts) = tree.trainingCounts(idRecursion,bEqualMaxCounts)/(1e4*sum(tree.trainingCounts(idRecursion,bEqualMaxCounts)));
            countsTieBreak = countsNode+countsAdd;
            maxCounts = max(countsTieBreak);
            bEqualMaxCounts = maxCounts == countsTieBreak;
        end
        tree.bLeaf(iCalc) = true;
        tree.iPresent(iCalc).inds = [];
        tree.iFeatNum(iCalc).inds = [];
        tree.trainingCounts(iCalc,:) = countsNode;
        tree.labelClassId(iCalc) = find(bEqualMaxCounts);
        tree.bExpanded(iCalc) = true;
    else
        if tree.nextChild>(numel(tree.bLeaf)-1)
            tree.bExpanded = [tree.bExpanded;falseCol];
            tree.nodeId = [tree.nodeId;(tree.nodeId(end)+stepCol')];
            tree.bLeaf = [tree.bLeaf;falseCol];
            tree.childIds = [tree.childIds;zero2Col];
            tree.parentId = [tree.parentId;zeroCol];
            tree.depth = [tree.depth;zeroCol];
            tree.iPresent = [tree.iPresent;iPresStruct];
            tree.iFeatNum = [tree.iFeatNum;indsStruct];
            tree.trainingCounts = [tree.trainingCounts;zero2Col];
            tree.labelClassId = [tree.labelClassId;zeroCol];
            tree.partitionPoint = [tree.partitionPoint;nanCol];
            tree.iIn = [tree.iIn;indsStruct];
            tree.decisionProjection = [tree.decisionProjection;phiStruct];
        end
        tree.bLeaf(iCalc) = false;
        childIds = tree.nextChild+[0,1];
        tree.childIds(iCalc,:) = childIds;
        tree.depth(childIds) = tree.depth(iCalc)+1;
        tree.iPresent(childIds(1)).inds = tree.iPresent(iCalc).inds(bLessThanTrain);
        tree.iPresent(childIds(2)).inds = tree.iPresent(iCalc).inds(~bLessThanTrain);
        tree.iPresent(iCalc).inds = [];
        tree.iFeatNum(childIds(1)).inds = iFeatureNum;
        tree.iFeatNum(childIds(2)).inds = iFeatureNum;
        tree.trainingCounts(iCalc,:) = countsNode;
        [~,tree.labelClassId(iCalc)] = max(countsNode);
        tree.partitionPoint(iCalc) = partitionPoint;
        tree.iIn(iCalc).inds = iIn;
        tree.decisionProjection(iCalc).phi = projMat(:,iDir);
        tree.parentId(childIds) = iCalc;
        tree.nextChild = tree.nextChild+2;
        tree.bExpanded(iCalc) = true;
    end
    
    bComplete = all(tree.bExpanded(1:(tree.nextChild)-1));
    
end

fi = (tree.nextChild-1);
tree.nodeId = tree.nodeId(1:fi);
tree.bLeaf = tree.bLeaf(1:fi);
tree.childIds = tree.childIds(1:fi,:);
tree.parentId = tree.parentId(1:fi);
tree.depth = tree.depth(1:fi);
tree.trainingCounts = tree.trainingCounts(1:fi,:);
tree.labelClassId = tree.labelClassId(1:fi);
tree.partitionPoint = tree.partitionPoint(1:fi);
tree.iIn = tree.iIn(1:fi);
tree.decisionProjection = tree.decisionProjection(1:fi);

tree.bExpanded = [];
tree.iPresent = [];
tree.iFeatNum = [];
tree.nextChild = 0;

end

function [bSp, rmm, cmm] = twoPointMaxMarginSplit(X,Y,tol)
% This should only be done if X has exactly 2 unique rows
bType1 = all(abs(bsxfun(@minus,X,X(1,:)))<tol,2);
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
if any(isnan(cmm(:))) || any(isinf(cmm(:)))
    error('Suggested split point at infitity / nan');
end
end

function bVar = queryIfColumnsVary(XvarToTest,tol)
% Function that says whether columns are constant or not
bVar = max(abs(diff(XvarToTest(1:min(5,size(XvarToTest,1)),:),[],1)),[],1)>tol;
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
