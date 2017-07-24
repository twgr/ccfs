% Runs a set of cross validations for selection of classification datasets
% providing comparison to RF.
%
% Tom Rainforth 24/07/15

%clear all
dataSetsToTest = {'banknote','hillValley','ionosphere','iris','seeds','soybean','zoo'};
nFolds = 10;
nTrees = 100;
optionsFor = [];
[percentTestMissClassfiedCCF,percentTestMissClassfiedRF] = deal(cell(numel(dataSetsToTest),1));

for n=1:numel(dataSetsToTest)
    name = dataSetsToTest{n};
    disp(['Doing cross validation for ' name]);
    [X,Y,bOrdinal] = loadProvidedDataset(name);
    [percentTestMissClassfiedCCF{n}, percentTestMissClassfiedRF{n}] = ...
        crossValTests(X,Y,false,bOrdinal,nFolds,nTrees,optionsFor);
end