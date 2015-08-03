% Runs a set of cross validations for the provided datasets and provided
% comparisons to random forests.  Note that in the paper 15 of these cross
% validations are run rather than the single 1 below which is for
% demonstration purposes.
%
% Tom Rainforth 27/07/15

%clear all
dataSetsToTest = {'breastTissue','yeast','balanceScale','banknote','hillValley','ILPD','ionosphere','iris','seeds','soybean','spirals','zoo'};
%dataSetsToTest = {'libras'};
nFolds = 10;
nTrees = 100;
optionsFor = optionsClassCCF;
optionsFor.bRCCA = true;
optionsFor.bBagTrees = true;
optionsFor.bProjBoot = false;
optionsFor.bUseParallel = true;
optionsFor.epsilonCCA = 0.05;
optionsFor.rccaNFeatures = 100;
[percentTestMissClassfiedCCF,percentTestMissClassfiedRF] = deal(cell(numel(dataSetsToTest),1));

for n=1:numel(dataSetsToTest)
    name = dataSetsToTest{n};
    disp(['Doing cross validation for ' name]);
    [X,Y,bOrdinal] = loadDataset(name);
    [percentTestMissClassfiedCCF{n}, percentTestMissClassfiedRF{n}, percentTestMissClassfiedCCFDef{n}] = ...
        crossValTests(X,Y,bOrdinal,nFolds,nTrees,optionsFor);
    disp(['Missclassfication CCF = ' num2str(mean(percentTestMissClassfiedCCF{n})) ' +/- ' num2str(std(percentTestMissClassfiedCCF{n}))]);
    disp(['Missclassfication RF = ' num2str(mean(percentTestMissClassfiedRF{n})) ' +/- ' num2str(std(percentTestMissClassfiedRF{n}))]);
    disp(['Missclassfication CCFDef = ' num2str(mean(percentTestMissClassfiedCCFDef{n})) ' +/- ' num2str(std(percentTestMissClassfiedCCFDef{n}))]);
    disp(' ');
end