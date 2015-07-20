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

K = max(2,size(YTrain,2));

nNodesToPreassign = 2000;

variedEmptyRow = zeros(1,1);
variedEmptyCol = zeros(1,1)';
iPresEmpty = int64(zeros(1,1));
zeroCol = zeros(2,1);
falseCol = false(2,1);
stepCol = (1:2)';
zero2Col = zeros(2,2);
onesCol = ones(2,1);
zeroKCol = zeros(2,K);
nanCol = NaN(2,1);
iPresStruct = struct('inds',iPresEmpty);
indsStruct = struct('inds',variedEmptyRow);
phiStruct = struct('phi',variedEmptyCol);

tree = struct('nextChild',2,'bExpanded',falseCol,'nodeId',stepCol,...
    'bLeaf',falseCol,'childIds',zero2Col,...
    'parentId',zeroCol,'depth',depth*onesCol,...
    'iPresent',iPresStruct,'iFeatNum',indsStruct,...
    'trainingCounts',zeroKCol,'labelClassId',zeroCol,...
    'partitionPoint',nanCol,'iIn',indsStruct,...
    'decisionProjection',phiStruct);

variedEmptyRow = zeros(1,0);
variedEmptyCol = zeros(0,1);
iPresEmpty = int64(zeros(1,0));
zeroCol = zeros(nNodesToPreassign,1);
falseCol = false(nNodesToPreassign,1);
stepCol = (1:nNodesToPreassign)';
zero2Col = zeros(nNodesToPreassign,2);
onesCol = ones(nNodesToPreassign,1);
zeroKCol = zeros(nNodesToPreassign,K);
nanCol = NaN(nNodesToPreassign,1);
iPresStruct = repmat(struct('inds',iPresEmpty),nNodesToPreassign,1);
indsStruct = repmat(struct('inds',variedEmptyRow),nNodesToPreassign,1);
phiStruct = repmat(struct('phi',variedEmptyCol),nNodesToPreassign,1);

tree.bExpanded = falseCol;
tree.nodeId = stepCol;
tree.bLeaf = falseCol;
tree.childIds = zero2Col;
tree.parentId = zeroCol;
tree.depth = depth*onesCol;
tree.iPresent = iPresStruct;
tree.iFeatNum = indsStruct;
tree.trainingCounts = zeroKCol;
tree.labelClassId = zeroCol;
tree.partitionPoint = nanCol;
tree.iIn = indsStruct;
tree.decisionProjection = phiStruct;

tree.iFeatNum(1).inds = iFeatureNum;
tree.iPresent(1).inds = int64((1:size(XTrain,1)));

bComplete = false;
XTrainGlobal = XTrain;
YTrainGlobal = YTrain;

maxIter = 2*size(XTrain,1)+2;

for nIter=1:maxIter
    
    if bComplete
        break
    end
    
    iCalcVarSize = find(~tree.bExpanded(1:(tree.nextChild)-1),1);
    if isempty(iCalcVarSize)
        break
    end
    iCalc = iCalcVarSize(1);
    
    iFeatureNum = tree.iFeatNum(iCalc).inds;
    
    [bLeaf, bLessThanTrain, partitionPoint, projMat, countsNode, iIn] = expandNode(XTrainGlobal(tree.iPresent(iCalc).inds,:),...
        YTrainGlobal(tree.iPresent(iCalc).inds,:),options,iFeatureNum,tree.depth(iCalc));
      
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
        tree.iPresent(iCalc).inds = int64(zeros(1,0));
        tree.iFeatNum(iCalc).inds = zeros(1,0);
        tree.trainingCounts(iCalc,:) = countsNode;
        tree.labelClassId(iCalc) = find(bEqualMaxCounts);
        tree.bExpanded(iCalc) = true;
    else
         if tree.nextChild>(numel(tree.bLeaf)-1)
             tree.bExpanded = [tree.bExpanded;falseCol];
             tree.nodeId = [tree.nodeId;(tree.nodeId(end)+stepCol)];
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
        tree.iPresent(iCalc).inds = int64(zeros(1,0));
        tree.iFeatNum(iCalc).inds = zeros(1,0);
        tree.iFeatNum(childIds(1)).inds = iFeatureNum;
        tree.iFeatNum(childIds(2)).inds = iFeatureNum;
        tree.trainingCounts(iCalc,:) = countsNode;
        [~,tree.labelClassId(iCalc)] = max(countsNode);
        tree.partitionPoint(iCalc) = partitionPoint;
        tree.iIn(iCalc).inds = iIn;
        tree.decisionProjection(iCalc).phi = projMat;
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

tree.nextChild = 0;

end
