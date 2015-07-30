function trees = growManyTreesCompileTest(nTrees,XTrain,YTrain,options,iFeatureNum)
%#codegen
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
    'parentId',zeroCol,'depth',0*onesCol,...
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
tree.depth = 0*onesCol;
tree.iPresent = iPresStruct;
tree.iFeatNum = indsStruct;
tree.trainingCounts = zeroKCol;
tree.labelClassId = zeroCol;
tree.partitionPoint = nanCol;
tree.iIn = indsStruct;
tree.decisionProjection = phiStruct;

trees = repmat(tree,nTrees,1);


for n=1:nTrees
    trees(n) = growCCTnotRecursive(XTrain,YTrain,options,iFeatureNum,0);
end
end