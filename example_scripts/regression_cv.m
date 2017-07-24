% Runs a set of cross validations for selection of classification datasets
% providing comparison to RF.
%
% Tom Rainforth 24/07/15

%clear all
dataSetsToTest = {'auto93','fishcatch','longley','machine_cpu','servo','stock'};
nFolds = 10;
nTrees = 100;
optionsFor = [];
[scaled_mseCCF,scaled_mseRF] = deal(cell(numel(dataSetsToTest),1));

for n=1:numel(dataSetsToTest)
    name = dataSetsToTest{n};
    disp(['Doing cross validation for ' name]);
    [X,Y,bOrdinal] = loadProvidedDataset(name);
    [scaled_mseCCF{n}, scaled_mseRF{n}] = ...
        crossValTests(X,Y,true,bOrdinal,nFolds,nTrees,optionsFor);
end