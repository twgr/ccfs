function [CCF,forestPredictsTest,forestProbsTest,treePredictsTest,cumulativeForestPredictsTest] = compiledGenCCF(nTrees,XTrain,YTrain,optionsFor,iFeatureNum,XTest,bKeepTrees) %#ok<*INUSD,*STOUT>

 if ~exist('optionsFor','var')
     optionsFor = []; %#ok<*NASGU>
 end
 
 if ~exist('iFeatureNum','var')
     iFeatureNum = [];
 end
 
 if ~exist('XTest','var')
     XTest = [];
 end
 
 if ~exist('bKeepTrees','var')
     bKeepTrees = true;
 end
 
 dt = datestr(now,30);
 inputFileName = ['ccfInputTemp', dt, '.mat'];
 save(inputFileName);
 outputFileName = ['ccfOutputTemp', dt, '.mat'];
 nOut = nargout;
 %ccfFromFile(inputFileName,outputFileName,nOut);
 eval(['!ccfFromFile.exe ' inputFileName ' ' outputFileName ' ' num2str(nOut) ';']);
 delete(inputFileName);
 outputs = load(outputFileName);
 outputNames = {'CCF','forestPredictsTest','forestProbsTest','treePredictsTest','cumulativeForestPredictsTest'};
 for n=1:nOut
     eval([outputNames{n} ' = outputs.' outputNames{n} ';']);
 end
 delete(outputFileName);
end


