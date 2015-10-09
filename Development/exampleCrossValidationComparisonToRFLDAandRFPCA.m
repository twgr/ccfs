% Runs a set of cross validations for the provided datasets and provided
% comparisons to random forests.  Note that in the paper 15 of these cross
% validations are run rather than the single 1 below which is for
% demonstration purposes.
%
% Tom Rainforth 27/07/15

%clear all

%dataSetsToTest = {'libras'};%{'balanceScale','banknote','hillValley','ILPD','ionosphere','iris','seeds','soybean','spirals','zoo'};
dataSetsToTest = {'climate'};
nFolds = 10;
nTrees = 100;
optionsFor = [];
[percentTestMissClassfiedCCF,percentTestMissClassfiedRF,rf_PCA,rf_LDA] = deal(cell(numel(dataSetsToTest),1));

for n=1:numel(dataSetsToTest)
    name = dataSetsToTest{n};
    disp(['Doing cross validation for ' name]);
    %[X,Y,bOrdinal] = loadProvidedDataset(name);
    [X,Y,bOrdinal] = loadCSVDataSet('C:\Users\Tom\Documents\CCF_other\restrictedDatasets\climatePopCrash_dataset.csv');
    [percentTestMissClassfiedCCF{n}, percentTestMissClassfiedRF{n}, ~, rf_PCA{n}, rf_LDA{n}] = ...
        crossValTestsWith_RFLDA_andRFPCA(X,Y,bOrdinal,nFolds,nTrees,optionsFor);
    disp(['Missclassfication CCF = ' num2str(mean(percentTestMissClassfiedCCF{n})) ' +/- ' num2str(std(percentTestMissClassfiedCCF{n}))]);
    disp(['Missclassfication RF = ' num2str(mean(percentTestMissClassfiedRF{n})) ' +/- ' num2str(std(percentTestMissClassfiedRF{n}))]);
    disp(['Missclassfication RF_PCA = ' num2str(mean(rf_PCA{n})) ' +/- ' num2str(std(rf_PCA{n}))]);
    disp(['Missclassfication RF_LDA = ' num2str(mean(rf_LDA{n})) ' +/- ' num2str(std(rf_LDA{n}))]);    
    disp(' ');
end