% Runs a set of cross validations for selection of classification datasets
% providing comparison to RF.
%
% Tom Rainforth 24/07/15

%clear all
dataSetsToTest = {'jura','solarFlare'};
bReg = [true,false];
nFolds = 10;
nTrees = 100;
optionsFor = [];
[errorsCCF,errorsRF] = deal(cell(numel(dataSetsToTest),1));

for n=1:numel(dataSetsToTest)
    name = dataSetsToTest{n};
    disp(['Doing cross validation for ' name]);
    [X,Y,bOrdinal] = loadProvidedDataset(name);
    [errorsCCF{n}, errorsRF{n}] = ...
        crossValTests(X,Y,bReg(n),bOrdinal,nFolds,nTrees,optionsFor);
end