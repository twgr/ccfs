function [percentTestMissClassfiedCCF, percentTestMissClassfiedRF, ...
    percentTestMissClassfiedCCFDefault, rf_PCA, rf_LDA] = ...
    crossValTestsWith_RFLDA_andRFPCA(X,Y,bOrdinal,nFolds,nTrees,optionsFor,bPrint,bDoRF)
%crossValMissClassifications Performs crossvalidation tests using CCFs
%
% percentTestMissClassfiedCCF = crossValTests(X,Y)
%
% Required inputs:
%       X = Feature array
%       Y = Class labels
%
% [percentTestMissClassfiedCCF, percentTestMissClassfiedRF,...
%    percentTestMissClassfiedCCFDefault] = crossValTests(X,Y)
% Also provides the miss classification rates for matlab's tree bagger
% algorithm (note this is slightly different to the random forest
% implementation in the paper) and CCF with default parameters respectively
%
% Optional Inputs:
%
% [percentTestMissClassfiedCCF] = ...
%    crossValTests(X,Y,bOrdinal,nFolds,nTrees,optionsFor,bPrint,bDoRF)
%
%   bOrdinal = row vector of logicals indicating whether the feature is
%              ordinal (true) or an unordered categorical requiring
%              expansion (false).  Default is all true
%     nFolds = Number of folds to carry out.  Default = 10
%     nTrees = Number of trees.  Default = 100
% optionsFor = An options object from optionsClassCCF.m
%     bPrint = Prints out accuracies if true. Default = true
%      bDoRF = If three output arguments are specified, this toggles
%              whether to carry out the RF calculation. Default = true;
%
% Tom Rainforth 27/07/15

if ~exist('bOrdinal','var') || isempty(bOrdinal)
    bOrdinal = true(1,size(X,2));
end

if ~exist('nFolds','var') || isempty(nFolds)
    nFolds = 10;
end

if ~exist('nTrees','var') || isempty(nTrees)
    nTrees = 100;
end

if ~exist('optionsFor','var')
    optionsFor = [];
end

if ~exist('bPrint','var') || isempty(bPrint)
    bPrint = true;
end

if ~exist('bDoRF','var') || isempty(bDoRF)
    bDoRF = true;
end

[iTrain, iTest] = setupCrossValSampleIds(size(X,1),nFolds);
percentTestMissClassfiedCCF = NaN(nFolds,1);
percentTestMissClassfiedRF = NaN(nFolds,1);
percentTestMissClassfiedCCFDefault = NaN(nFolds,1);

rf_PCA = NaN(nFolds,1);
rf_LDA = NaN(nFolds,1);

parfor n=1:nFolds
    tC = tic;
    CCF = genCCF(nTrees,X(iTrain{n},:),Y(iTrain{n},:),optionsFor,[],[],[],bOrdinal);
    yPreds = predictFromCCF(CCF,X(iTest{n},:));
    percentTestMissClassfiedCCF(n) = 100*(1-mean(yPreds==Y(iTest{n},:)));
    timeC = toc(tC);
    dispMessage = ['Fold ' num2str(n) ', % of test missclassified: CCF = ' ...
        num2str(percentTestMissClassfiedCCF(n),6)];
    
   tR = tic; 
   % if nargout>1 && bDoRF
        RF = TreeBagger(nTrees,X(iTrain{n},:),Y(iTrain{n},:),'NVarToSample',ceil(log2(size(X,2))+1));
        ypredsRF = cellfun(@str2double,predict(RF,X(iTest{n},:)));
        percentTestMissClassfiedRF(n) = 100*(1-(mean(ypredsRF==Y(iTest{n},:))));
        dispMessage = [dispMessage, ' RF = ' num2str(percentTestMissClassfiedRF(n),6)]; %#ok<AGROW>
   % end
   timeR = toc(tR);
    
%    % if nargout==3
%         CCFdef = genCCF(nTrees,X(iTrain{n},:),Y(iTrain{n},:),[],[],[],[],bOrdinal);
%         yPredsCCFdef = predictFromCCF(CCFdef,X(iTest{n},:));
%         percentTestMissClassfiedCCFDefault(n) = 100*(1-mean(yPredsCCFdef==Y(iTest{n},:)));
%         dispMessage = [dispMessage ' CCFDef = ' ...
%             num2str(percentTestMissClassfiedCCFDefault(n),6)]; %#ok<AGROW>
%    % end
   
   tP = tic;  
   % if nargout>3
        model5=ObliqueRF_train(X(iTrain{n},:),Y(iTrain{n},:),'ntrees',nTrees,'nvartosample',round(sqrt(size(X,2))),'oblique',5);
        [Y5,~]=ObliqueRF_predict(X(iTest{n},:),model5);
        rf_PCA(n) = 100*(1-mean(Y5==Y(iTest{n},:)));
        dispMessage = [dispMessage ' RF-PCA = ' ...
            num2str(rf_PCA(n),6)]; %#ok<AGROW>
  %  end
  timeP = toc(tP);  
  
  tL = tic; 
  %  if nargout>4
        model6=ObliqueRF_train(X(iTrain{n},:),Y(iTrain{n},:),'ntrees',nTrees,'nvartosample',round(sqrt(size(X,2))),'oblique',6);
        [Y6,~]=ObliqueRF_predict(X(iTest{n},:),model6);
        rf_LDA(n) = 100*(1-mean(Y6==Y(iTest{n},:)));
        dispMessage = [dispMessage ' RF-LDA = ' ...
            num2str(rf_LDA(n),6)]; %#ok<AGROW>
  %  end
  timeL = toc(tL);
  disp(['CCF ' num2str(timeC) ' RF ' num2str(timeR) ' RF_PCA ' num2str(timeP) ' RF_LDA ' num2str(timeL)]);  
    if bPrint
        disp(dispMessage);
    end
end

end