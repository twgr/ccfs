function OutStruct=predictFromCCFFile(directoryCCF,dataLocation,outputLocation,nOutputsToStore)
%predictFromCCFFile Makes predictions using output from ccfFromFile
%
% function OutStruct=predictFromCCFFile(directoryCCF,dataLocation,...
%                                          outputLocation,nOutputsToStore)
%
% Load the output from a run of ccfFromFile and carries out predictFromCCF
% on additional provided data.  Results are printed to csv's in the
% specified location
%
% Inputs
%       directoryCCF = Location of output directory from ccfFromFile
%       dataLocation = Location of csv file for prediction.  Can either be
%                      formatted as described in loadCSVDataSet or in the
%                      same format but without class labels.  If class
%                      labels are provided then accuracy predictions are
%                      given.
%     outputLocation = Directory to print results to (will be generated if
%                      does not already exist).  If 'none' then results are
%                      not saved
%    nOutputsToStore = Number of outputs from predictFromCCF to store.
%                      Note as there is no forest to store, this value
%                      should be one less than in ccfFromFile for the same
%                      behaviour.
%
% Outputs
%         OutStruct = A structure with fields containing the results.
%
% Tom Rainforth 04/08/12

if ~exist('nOutputsToStore','var') || isempty(nOutputsToStore)
    nOutputsToStore = 2;
end
nOutputsToStore = min(nOutputsToStore,4);

bSave = ~strcmpi(outputLocation,'none');

load([directoryCCF filesep() 'Results.mat'],'CCF');
load([directoryCCF filesep() 'Results.mat'],'sizeXTrain');
[XTest,YTest] = loadCSVDataSet(dataLocation);
if size(XTest,2)<sizeXTrain(2)
    XTest = [XTest,YTest];
    YTest = [];
elseif size(XTest,2)>sizeXTrain(2)
    error('CSV has too many features');
end
namesOut = {'forestPredictsTest','forestProbsTest','treePredictsTest','cumulativeForestPredictsTest'};
OutStruct = cell(nOutputsToStore,1);
[OutStruct{:}] = predictFromCCF(CCF,XTest);
OutStruct = cell2struct(OutStruct,namesOut(1:nOutputsToStore));

if ~isempty(YTest)
    
    if isnumeric(YTest)
        accuracy = mean(OutStruct.forestPredictsTest==YTest);
    else
        accuracy = mean(strcmpi(OutStruct.forestPredictsTest,YTest));
    end
    OutStruct.percentMissclassified = 100*(1-accuracy);
    
    if nOutputsToStore>3
        if isnumeric(YTest)
            cumForestAccuracy = mean(bsxfun(@eq,YTest,OutStruct.cumulativeForestPredictsTest),1);
        else
            cumForestAccuracy = mean(cellfun(@strcmpi,repmat(YTest,1,size(OutStruct.cumulativeForestPredictsTest,2)),...
                OutStruct.cumulativeForestPredictsTest),1);
        end
        OutStruct.cumulativeForestPercentMissclassified = 100*(1-cumForestAccuracy);
    end
end

OutStruct.classNames = CCF.options.classNames;

if bSave
    mkdir(outputLocation);
    writeResultCSVs(outputLocation,OutStruct,nOutputsToStore,YTest);
end
