function ccfFromFile(inputLocation, outputLocation, nOut)
%ccfFromFile Wrapper function allowing compiled use of genCCF


    Input = load(inputLocation);
    XTrain = Input.XTrain;
    YTrain = Input.YTrain;
    nTrees = Input.nTrees;
    
    if isfield(Input,'optionsFor')
        optionsFor = Input.optionsFor;
    else
        optionsFor = [];
    end
    
    if isfield(Input,'iFeatureNum')
        iFeatureNum = Input.iFeatureNum;
    else
        iFeatureNum = [];
    end
    
    if isfield(Input,'XTest')
        XTest = Input.XTest;
    else
        XTest = [];
    end
    
    if isfield(Input,'bKeepTrees')
        bKeepTrees = Input.bKeepTrees;
    else
        bKeepTrees = [];
    end
    
    if isempty(XTest)
        [CCF] = genCCF(XTrain,YTrain,nTrees,optionsFor,iFeatureNum,XTest,bKeepTrees);
        save(outputLocation,'CCF');
    else        
        if nargout<2
            nOut = 5;
        else
            nOut = str2double(nOut);
        end        
        [CCF,forestPredictsTest,forestProbsTest,treePredictsTest,cumulativeForestPredictsTest] = genCCF(XTrain,YTrain,nTrees,optionsFor,iFeatureNum,XTest,bKeepTrees); %#ok<NASGU,ASGLU>
        names = {'CCF','forestPredictsTest','forestProbsTest','treePredictsTest','cumulativeForestPredictsTest'};
        save(outputLocation,names{1:nOut});
    end
end
    