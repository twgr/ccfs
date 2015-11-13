function [percentTestMissClassfiedCCF, percentTestMissClassfiedRF,...
    percentTestMissClassfiedCCFDefault] = ...
    crossValTests(X,Y,bOrdinal,nFolds,nTrees,optionsFor,bPrint,bDoRF,iTrain,iTest)
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

if ~exist('iTrain','var') || ~exist('iTest','var') || isempty(iTrain) || isempty(iTest)
    [iTrain, iTest] = setupCrossValSampleIds(size(X,1),nFolds);
end

percentTestMissClassfiedCCF = NaN(nFolds,1);
percentTestMissClassfiedRF = NaN(nFolds,1);
percentTestMissClassfiedCCFDefault = NaN(nFolds,1);

for n=1:nFolds
    tCCF = tic;
    CCF = genCCF(nTrees,X(iTrain{n},:),Y(iTrain{n},:),optionsFor,[],[],[],bOrdinal);
    yPreds = predictFromCCF(CCF,X(iTest{n},:));
    if iscell(Y)
        percentTestMissClassfiedCCF(n) = 100*(1-mean(cellfun(@strcmpi,CCF.options.classNames(yPreds),Y(iTest{n}))));
    else
        percentTestMissClassfiedCCF(n) = 100*(1-mean(yPreds==Y(iTest{n},:)));
    end
    timeCCF = toc(tCCF);
    dispMessage = ['Fold ' num2str(n) ', test error (lower is better): CCF = ' ...
        num2str(percentTestMissClassfiedCCF(n),6) '%'];
    
    if nargout>1 && bDoRF
        if isempty(optionsFor) || strcmpi(optionsFor.lambda,'log')
            mtry = ceil(log2(size(X(iTrain{n},:),2))+1);
        elseif strcmpi(optionsFor.lambda,'sqrt')
            mtry = ceil(sqrt(size(X(iTrain{n},:),2)));
        else
            mtry = optionsFor.lambda;
        end
        tRF = tic;
        RF = TreeBagger(nTrees,X(iTrain{n},:),Y(iTrain{n},:),'CategoricalPredictors',~bOrdinal,'nvartosample',mtry);
        if iscell(Y)
            percentTestMissClassfiedRF(n) = 100*(1-mean(cellfun(@strcmpi,predict(RF,X(iTest{n},:)),Y(iTest{n}))));
        else
            ypredsRF = cellfun(@str2double,predict(RF,X(iTest{n},:)));
            percentTestMissClassfiedRF(n) = 100*(1-(mean(ypredsRF==Y(iTest{n},:))));
        end
        timeRF = toc(tRF);
        dispMessage = [dispMessage, ' RF = ' num2str(percentTestMissClassfiedRF(n),6) '%']; %#ok<AGROW>
    end
    
    if nargout>2
        CCFdef = genCCF(nTrees,X(iTrain{n},:),Y(iTrain{n},:),[],[],[],[],bOrdinal);
        yPredsCCFdef = predictFromCCF(CCFdef,X(iTest{n},:));        
        if iscell(Y)
            percentTestMissClassfiedCCFDefault(n) = 100*(1-mean(cellfun(@strcmpi,CCFdef.options.classNames(yPredsCCFdef),Y(iTest{n}))));
        else
            percentTestMissClassfiedCCFDefault(n) = 100*(1-mean(yPredsCCFdef==Y(iTest{n},:)));
        end
        dispMessage = [dispMessage ' CCFDef = ' ...
            num2str(percentTestMissClassfiedCCFDefault(n),6) '%']; %#ok<AGROW>
    end
    
    dispMessage = [dispMessage, '.     Timings CCF ' num2str(timeCCF) ' sec, RF ' num2str(timeRF) ' sec']; %#ok<AGROW>
    
    if bPrint
        disp(dispMessage);
    end
end

end