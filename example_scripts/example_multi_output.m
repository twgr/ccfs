% The below will train a CCF for the jura dataset which is a multivariate 
% regression problem.  See multi_output_cv for a more rigorous / complete 
% example that uses the crossValTests function.
%
% Tom Rainforth 25/07/17

[X,Y] = loadProvidedDataset('jura');
iTrain = datasample(1:size(X,1),round(0.7*size(X,1)));
iTest = setdiff(1:size(X,1),iTrain);
CCF = genCCF(nTrees,X(iTrain,:),Y(iTrain,:),true);
YpredCCF = predictFromCCF(CCF,X(iTest,:));
mseCCF = mean((YpredCCF-Y(iTest,:)).^2,1);
disp(['CCF mean squared error for each output ' num2str(mseCCF)]);