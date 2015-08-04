function ccfFromFile(inputLocation, outputLocation, nTrees, propTrain, bRandTrainTestSplit, nOutputsToStore, varargin)
%ccfFromFile Wrapper function to call genCCF using csvs directly
%
% Allows a CCF to be generated and predictions to be made directly from a
% csv file.  Use is mostly as a base for generating the compiled
% ccfFromFile.exe.  Note that ccfFromFile.exe is currently only interpreted
% MATLAB code and therefore does not offer speed ups.  However, we intend
% to have a version made using ported C code, and therefore offering speed
% improvements, in the near future.  As the code is to be compiled, when
% arguements are numeric the function also accepts strings of numerical
% characters.
%
% ccfFromFile(inputLocation, outputLocation, nTrees, propTrain, ...
%                       bRandTrainTestSplit, nOutputsToStore, varargin)
%
% Required Inputs
%      inputLocation = Location of csv input file.  See loadCSVDataSet.m
%                      details on availible format
%     outputLocation = Location and name of directory to be generated into
%                      which the results will be placed.
%
% Optional Inputs
%             nTrees = Number of trees to train (default = 100)
%          propTrain = Proportion of data to use for training (default =
%                      0.7)
% bRandTrainTestSplit = If true (default) then the samples used for
%                       training are taken at random from provided data,
%                       else the order is preserved with the first
%                       round(propTrain*N) data points used for training
%    nOutputsToStore = Number of outputs from genCCF to store
%           varargin = List of options as per optionsClassCCF.  These
%                      should be in pairs of name then value.  For example
%                      'splitCriterion', 'gini'.  For options containing
%                      structures such as 'projections' then use
%                      underscores to specify sub fields, e.g.
%                      'projections_PCA', 1 to also consider PCA
%                      projections.
%
% The function returns no arguments but creates a folder in the directory
% outputLocation containing a Results.mat file cotaining the forest and
% results.  Various numerical results (depending on the nOutputsToStore)
% are also printed to csv files in the directory.  Predictions for new data
% can be made using the predictFromCCFFile function
%
% Tom Rainforth 04/08/15

%% Sort out inputs
if ~exist('nTrees','var') || isempty(nTrees)
    nTrees = 100;
elseif ischar(nTrees)
    nTrees = str2double(nTrees);
end

if ~exist('propTrain','var') || isempty(propTrain)
    propTrain = 0.7;
elseif ischar(propTrain)
    propTrain = str2double(propTrain);
end

if ~exist('bRandTrainTestSplit','var') || isempty(bRandTrainTestSplit)
    bRandTrainTestSplit = true;
elseif ischar(bRandTrainTestSplit)
    bRandTrainTestSplit = logical(str2double(bRandTrainTestSplit));
end

if ~exist('nOutputsToStore','var') || isempty(nOutputsToStore)
    nOutputsToStore = 3;
elseif ischar(nOutputsToStore)
    nOutputsToStore = str2double(nOutputsToStore);
end
nOutputsToStore = min(nOutputsToStore,5);


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

[OutStruct{:}] = genCCF(nTrees,XTrain,YTrain,optionsFor,XTest,false,[],bOrdinal);

OutStruct = cell2struct(OutStruct,namesOut(1:nOutputsToStore));

%% Process and print outputs
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

mkdir(outputLocation);

OutStruct.nTrees = nTrees;
OutStruct.iTest = iTest;
if ~isnumeric(YTest)
    OutStruct.classNames = OutStruct.CCF.options.classNames;
end

save([outputLocation filesep() 'Results.mat'],'-struct','OutStruct');

if nOutputsToStore>1
    if isnumeric(YTest)
        csvwrite([outputLocation filesep() 'TrueTestLabels.csv'],YTest);
        csvwrite([outputLocation filesep() 'PredictedTestLabels.csv'],OutStruct.forestPredictsTest);
    else
        writetable(cell2table(YTest),[outputLocation filesep() 'TrueTestLabels.csv'],'WriteVariableNames',false);
        writetable(cell2table(OutStruct.forestPredictsTest),[outputLocation filesep() 'PredictedTestLabels.csv'],'WriteVariableNames',false);
    end
    csvwrite([outputLocation filesep() 'PercentTestMissclassified.csv'],OutStruct.percentMissclassified);
    if nOutputsToStore>2
        if isnumeric(YTest)
            csvwrite([outputLocation filesep() 'PredictedTestProbabilities.csv'],OutStruct.forestProbsTest);
        else
            tableProbs = array2table(OutStruct.forestProbsTest);
            tableProbs.Properties.VariableNames = OutStruct.classNames;
            writetable(tableProbs,[outputLocation filesep() 'PredictedTestProbabilities.csv']);
        end
        if nOutputsToStore>3
            if isnumeric(OutStruct.treePredictsTest)
                csvwrite([outputLocation filesep() 'IndividualTreePredictions.csv'],OutStruct.treePredictsTest);
            else
                writetable(cell2table(OutStruct.treePredictsTest),[outputLocation filesep() 'IndividualTreePredictions.csv'],'WriteVariableNames',false);
            end
            if nOutputsToStore>4
                if isnumeric(OutStruct.cumulativeForestPredictsTest)
                    csvwrite([outputLocation filesep() 'CumulativeForestPredictsTest.csv'],OutStruct.cumulativeForestPredictsTest);
                else
                    writetable(cell2table(OutStruct.cumulativeForestPredictsTest),[outputLocation filesep() 'CumulativeForestPredictsTest.csv'],'WriteVariableNames',false);
                end
                csvwrite([outputLocation filesep() 'CumulativeForestPercentTestMissclassified.csv'],OutStruct.cumulativeForestPercentMissclassified);
            end
        end
    end
end


end
