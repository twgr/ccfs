function forest = makeForestForMex(XTrain,YTrain,optionsFor,iFeatureNum,depth)
    tree = growCCT(XTrain,YTrain,optionsFor,iFeatureNum,depth);
    forest = repmat(tree,50,1);
    for n=2:50
        forest(n) = growCCT(XTrain,YTrain,optionsFor,iFeatureNum,depth);
    end
end