function [mseCCF,mseRF,Yp,YpRF,CCF,RF] = quickRFRegComparison(csvfile,nTrees,propDataToUse,trainProp)

options = optionsClassCCF.defaultOptionsReg;
options.bUseParallel = true;

[X,Y,bOrdinal] = loadCSVDataSet(csvfile);
N = size(X,1);
Nkeep = round(N*propDataToUse);
iKeep = datasample(1:N,Nkeep)';
X = X(iKeep,:);
Y = Y(iKeep,:);

iTrain = datasample(1:Nkeep,round(trainProp*Nkeep));
iTrain = iTrain';
iTest = setdiff((1:Nkeep)',iTrain);
XTrain = X(iTrain,:); YTrain = Y(iTrain,:); XTest = X(iTest,:); YTest = Y(iTest,:);
CCF = genCCF(nTrees,XTrain,YTrain,true,options,[],[],[],bOrdinal);
Yp = predictFromCCF(CCF,XTest);
mseCCF = mean((Yp-YTest).^2);
disp(['Mean square error CCF ', num2str(mseCCF)]);
mtry = ceil(log2(size(X,2))+1);
RF = TreeBagger(nTrees,XTrain,YTrain,'method','regression','CategoricalPredictors',~bOrdinal,'nvartosample',mtry);
YpRF = predict(RF,XTest);
mseRF = mean((YpRF-YTest).^2);
disp(['Mean square error RF ', num2str(mseRF)]);