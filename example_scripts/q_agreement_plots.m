% Produces diversity-error diagrams using q statistic as the diversity
% metric.  Note corresponds only to a single train/test split and a small
% number of trees and so there can be relatively high variance on the
% reported accuracies.

clear all
close all

dataSetsToTest = {'ILPD';'balanceScale';'banknote';'breastTissue';'hillValleyNoisy';...
    'hillValley';'ionosphere';'iris';'letter';'libras';'magic04';'nursery';...
    'optDigitsHandwritten';'pendDigits';'satimage';'seeds';'skinSeg';'soybean';...
    'spirals';'splice';'vowelc';'voweln';'waveformNoise';'waveform';'yeast';'zoo'};
nD = numel(dataSetsToTest);
prob_train = 0.1;
nTrees = 25;

options{1} = optionsClassCCF;
options{2} = optionsClassCCF.defaultOptionsRF;
options{3} = optionsClassCCF.defaultOptionsRotationForest;
options{3}.bUseParallel = false;
options{4} = optionsClassCCF.defaultOptionsCCFBag;
options{5} = optionsClassCCF.defaultOptionsRandomRotation;
names = {'CCF','RF','RotFor','CCF-Bag','RRF'};
markers = {'o','square','+','x','*'};

todo = 5:-1:1;
options = options(todo);
names = names(todo);
markers = markers(todo);

nO = numel(options);

Q_av = cell(nD,nO);
avg_errors = cell(nD,nO);
ens_errors = NaN(nD,nO);

for n=1:nD
    [X,Y,bOrdinal] = loadProvidedDataset(dataSetsToTest{n});
    
    iIn = randperm(size(X,1));
    nTrain = round(size(X,1)*prob_train);
    iTrain = iIn(1:nTrain);
    iTest = iIn((nTrain+1):end);
    
    figure(n);
    hold on;
    for m=1:nO
        CCF = genCCF(nTrees,X(iTrain,:),Y(iTrain,:),[],options{m},[],[],[],bOrdinal);
        [Yp, ~, treeOutputs] = predictFromCCF(CCF,X(iTest,:));
        ens_errors(n,m) = 100*mean(Y(iTest)~=Yp);
        disp([dataSetsToTest{n} ' ' names{m} ' Error ' num2str(ens_errors(n,m)) '%']);
        [Q_av{n,m},avg_errors{n,m}] = q_statistic(treeOutputs,Y(iTest,:));
        plot(Q_av{n,m}(:),avg_errors{n,m}(:),markers{m});
    end
    legend(names);
    title(dataSetsToTest{n})
    drawnow;
end