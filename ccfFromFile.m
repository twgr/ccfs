function ccfFromFile(trainLocation, testLocation, outputLocation, nTrees, bOrdinalLocation, varargin)
%ccfFromFile Wrapper function allowing compiled use of genCCF

InputTrain = readtable(trainLocation,'ReadVariableNames',0);
InputTest = readtable(testLocation,'ReadVariableNames',0);
InputTest = InputTest(:,1:size(InputTrain,2));
XTest = InputTrain((nTrain+1):end,1:end-1);
try
    YTrain = table2array(InputTrain(1:nTrain,end));
catch
    YTrain = table2cell(InputTrain(1:nTrain,end));
end

optionsCell = reshape(varargin,2,[]);
optionsNames = optionsCell(1,:);
optionsValues = optionsCell(2,:);

optionsFor = optionsClassCCT;
for n=1:numel(optionsNames)
    value = str2double(optionsValues{n});
    if isnan(value)
        value = optionsValues{n};
    end
    optionsFor.(optionsNames{n}) = value;
end

nTrees = str2double(nTrees);

if exist('bOrdinalLocation','var')
    bOrdinal = load(bOrdinalLocation);
else
    bOrdinal = [];
end

[~,forestPredictsTest,forestProbsTest,treePredictsTest,cumulativeForestPredictsTest] = genCCF(nTrees,XTrain,YTrain,optionsFor,XTest,false,[],bOrdinal); %#ok<NASGU,ASGLU>
names = {'CCF','forestPredictsTest','forestProbsTest','treePredictsTest','cumulativeForestPredictsTest'};
save(outputLocation,names{1:nOut});
end
