function propTestMissClassfied = crossValMissClassifications(location,name,nFolds,nTrees,optionsFor)

if ~exist('nFolds','var') || isempty(nFolds)
    nFolds = 10;
end

if ~exist('nTrees','var') || isempty(nTrees)
    nTrees = 200;
end

if ~exist('optionsFor','var')
    optionsFor = [];
end

validNames = {'ILPD';'balanceScale';'banknote';'breastTissue';'hillValleyNoisy';'hillValley';...
    'ionosphere';'iris';'letter';'libras';'magic04';'nursery';'optDigitsHandwritten';'pendDigits';...
    'satimage';'seeds';'skinSeg';'soybean';'spirals';'splice';'vowelc';'voweln';'waveformNoise';'waveform';'yeast';'zoo'};

if ~any(strcmp(name,validNames))
    disp(validNames)
    error('Invalid name, valid names shown above');
end

A = csvread([location filesep() name '.csv']);
bOrdinal = A(1,1:end-1);
X = A(2:end,1:end-1);
Y = A(2:end,end);

[iTrain, iTest] = setupCrossValSampleIds(size(X,1),nFolds);
propTestMissClassfied = NaN(nFolds,1);

for n=1:nFolds
    tCCF = tic;
    CCF = genCCF(nTrees,X(iTrain{n},:),Y(iTrain{n},:),optionsFor,[],[],[],bOrdinal);
    yPreds = predictFromCCF(CCF,X(iTest{n},:));
    toc(tCCF)
    
    tRF = tic;
    RF = TreeBagger(nTrees,X(iTrain{n},:),Y(iTrain{n},:));
    ypredsRF = cellfun(@str2double,predict(RF,X(iTest{n},:)));
    toc(tRF);   
    
    disp(mean(ypredsRF==Y(iTest{n},:)));
    
    propTestMissClassfied(n) = mean(yPreds==Y(iTest{n},:));
    disp(['Dataset ' name ' Fold ' num2str(n) ' Proportion of test missclassified ' num2str(propTestMissClassfied(n),5)]);
end

end