function trees = growManyTreesCompileTest(nTrees,XTrain,YTrain,options,iFeatureNum)

%for n=1:nTrees
    trees = growCCTnotRecursive(XTrain(1,:),YTrain(1,:),options,iFeatureNum,0);
%end
end