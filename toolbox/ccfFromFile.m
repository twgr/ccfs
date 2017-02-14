function OutStruct = ccfFromFile(inputLocation, outputLocation, nTrees, ...
    propTrain, bReg, bRandTrainTestSplit, bKeepTrees, nOutputsToStore, varargin)
%ccfFromFile Wrapper function to call genCCF using csvs directly
%
% Allows a CCF to be generated and predictions to be made directly from a
% csv file.  Prints results to the folder given by output location
% including a Results.mat file cotaining the forest and results.  Various 
% numerical results (depending on the nOutputsToStore) are also printed to 
% csv files in the directory.  Predictions for new data can be made using 
% the predictFromCCFFile function.  If desired then an output structure
% containing the same information is saved in Results.mat can be returned.
%
% Use is mostly as a base for generating the compiled ccfFromFile.exe.  
% Note that ccfFromFile.exe is currently only interpreted MATLAB code and 
% therefore does not offer speed ups.  However, we intend to have a version 
% made using ported C code in the near future.  As the code is to be c
% compiled, when arguements are numeric the function also accepts strings 
% of numerical characters.
%
% OutStruct = ccfFromFile(inputLocation, outputLocation, nTrees, propTrain,
%                       bRandTrainTestSplit, nOutputsToStore, varargin)
%
% Required Inputs
%      inputLocation = Location of csv input file.  See loadCSVDataSet.m
%                      details on availible format
%     outputLocation = Location and name of directory to be generated into
%                      which the results will be placed.  If set to 'none'
%                      then the results are not saved.
%
% Optional Inputs
%             nTrees = Number of trees to train (default = 500)
%          propTrain = Proportion of data to use for training (default =
%                      0.7)
% bRandTrainTestSplit = If true (default) then the samples used for
%                       training are taken at random from provided data,
%                       else the order is preserved with the first
%                       round(propTrain*N) data points used for training
%         bKeepTrees = If true (default) the generated trees are stored in
%                      Results.mat and future predictions can be made using
%                      predictFromCCFFile.  Otherwise these are discarded
%                      to save memory
%    nOutputsToStore = Number of outputs from genCCF to store
%           varargin = List of options as per optionsClassCCF.  These
%                      should be in pairs of name then value.  For example
%                      'splitCriterion', 'gini'.  For options containing
%                      structures such as 'projections' then use
%                      underscores to specify sub fields, e.g.
%                      'projections_PCA', 1 to also consider PCA
%                      projections.
%
% Outputs
%         Outstruct = Structure with fields corresponding to the saved
%                     file Results.mat, including the CCF itself, details
%                     about the run and any made predictions.
%
% Tom Rainforth 04/08/15

%% Sort out inputs
if ~exist('nTrees','var') || isempty(nTrees)
    nTrees = 500;
elseif ischar(nTrees)
    nTrees = str2double(nTrees);
end

if ~exist('propTrain','var') || isempty(propTrain)
    propTrain = 0.7;
elseif ischar(propTrain)
    propTrain = str2double(propTrain);
end

if ~exist('bReg','var') || isempty(bReg)
    bReg = false;
elseif ischar(bReg)
    bReg = logical(str2double(bReg));
end

if ~exist('bRandTrainTestSplit','var') || isempty(bRandTrainTestSplit)
    bRandTrainTestSplit = true;
elseif ischar(bRandTrainTestSplit)
    bRandTrainTestSplit = logical(str2double(bRandTrainTestSplit));
end

if ~exist('bKeepTrees','var') || isempty(bKeepTrees)
    bKeepTrees = true;
elseif ischar(bKeepTrees)
    bKeepTrees = logical(str2double(bKeepTrees));
end

if ~exist('nOutputsToStore','var') || isempty(nOutputsToStore)
    nOutputsToStore = 3;
elseif ischar(nOutputsToStore)
    nOutputsToStore = str2double(nOutputsToStore);
end
nOutputsToStore = min(nOutputsToStore,5);

bSave = ~strcmpi(outputLocation,'none');


%% Load data and split into train test
[X,Y,bOrdinal] = loadCSVDataSet(inputLocation);

if bRandTrainTestSplit
    iOrder = randperm(size(X,1));
    iTrain = iOrder(1:round(propTrain*size(X,1)));
else
    iTrain = 1:round(propTrain*size(X,1));
end

iTest = setdiff(1:size(X,1),iTrain);

XTrain = X(iTrain,:);
YTrain = Y(iTrain,:);
XTest = X(iTest,:);
YTest = Y(iTest,:);

if isempty(XTest)
    nOutputsToStore = 1;
end

%% Setup options
optionsCell = reshape(varargin,2,[]);
optionsNames = optionsCell(1,:);
optionsValues = optionsCell(2,:);

optionsFor = optionsClassCCF;
for n=1:numel(optionsNames)
    if ischar(optionsValues{n})
        value = str2num(optionsValues{n}); %#ok<*ST2NM>
        if isnan(value)
            value = optionsValues{n};
        end
    else
        value = optionsValues{n};
    end
    iUnd = regexp(optionsNames{n},'_');
    if ~isempty(iUnd)
        field = optionsNames{n}(1:(iUnd(1)-1));
        subField = optionsNames{n}((iUnd(1)+1):end);
        optionsFor.(field).(subField) = value;
    else
        optionsFor.(optionsNames{n}) = value;
    end
end

%% Generate forest
namesOut = {'CCF','forestPredictsTest','forestProbsTest','treePredictsTest','cumulativeForestPredictsTest'};

OutStruct = cell(nOutputsToStore,1);

[OutStruct{:}] = genCCF(nTrees,XTrain,YTrain,bReg,optionsFor,XTest,bKeepTrees,[],bOrdinal);

OutStruct = cell2struct(OutStruct,namesOut(1:nOutputsToStore));

%% Process outputs
if nOutputsToStore>1
    if isnumeric(YTest)
        accuracy = mean(OutStruct.forestPredictsTest==YTest);
    else
        accuracy = mean(strcmpi(OutStruct.forestPredictsTest,YTest));
    end
    OutStruct.percentMissclassified = 100*(1-accuracy);
end

if nOutputsToStore>4
    if isnumeric(YTest)
        cumForestAccuracy = mean(bsxfun(@eq,YTest,OutStruct.cumulativeForestPredictsTest),1);
    else
        cumForestAccuracy = mean(cellfun(@strcmpi,repmat(YTest,1,size(OutStruct.cumulativeForestPredictsTest,2)),OutStruct.cumulativeForestPredictsTest),1);
    end
    OutStruct.cumulativeForestPercentMissclassified = 100*(1-cumForestAccuracy);
end

OutStruct.CCF.options = struct(OutStruct.CCF.options);

OutStruct.nTrees = nTrees;
OutStruct.iTest = iTest;
if ~isnumeric(YTest)
    OutStruct.classNames = OutStruct.CCF.classNames;
end
OutStruct.sizeXTrain = size(XTrain);


%% Save outputs

if bSave
    mkdir(outputLocation);
    save([outputLocation filesep() 'Results.mat'],'-struct','OutStruct');
    writeResultCSVs(outputLocation,OutStruct,nOutputsToStore,YTest);
end


end
