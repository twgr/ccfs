function [CCF,forestPredictsTest,forestProbsTest,treePredictsTest,cumulativeForestPredictsTest] = ...
    genCCF(nTrees,XTrain,YTrain,bReg,optionsFor,XTest,bKeepTrees,iFeatureNum,bOrdinal)
%genCCF Generate a canonical correlation forest
%
% CCF = genCCF(nTrees,XTrain,YTrain)
%
% Creates a canonical correlation forest (CCF) comprising of nTrees
% canonical correlation trees (CCT) containing splits based on the a CCA
% analysis between the training data and a binary representation of the
% class labels.
%
% Required Inputs:
%         nTrees = Number of trees to create (default 500)
%         XTrain = Array giving training features.  Each row should be a
%                  seperate data point and each column a seperate feature.
%                  Must be numerical array with missing values marked as
%                  NaN if iFeatureNum is provided, otherwise can be any
%                  format accepted by processInputData function
%         YTrain = Class data.  Three formats are accepted: a binary
%                  represenetation where each row is a seperate data point
%                  and contains only a single non zero term the column of
%                  which indicates the class, a numeric vector with unique
%                  values taken as seperate class labels or a cell array of
%                  strings giving the name.
%
% Advanced usage:
%
% [CCF, forPred, forProbs, treePred, cumForPred] =
%  genCCF(nTrees,XTrain,YTrain,bReg,options,XTest,bKeepTrees,iFeatureNum,bOrdinal)
%
% Options Inputs:
%           bReg = Whether to perform regression instead of classification.
%                  Default = false (i.e. classification).
%        options = Options object created by optionsClassCCF.  If left
%                  blank then a default set of options corresponding to the
%                  method detailed in the paper is used.
%          XTest = Test data to make predictions for.  If the input
%                  features for the test data are known at test time then
%                  using this input with the option bKeepTrees = false can
%                  significantly reduce the memory requirement.
%     bKeepTrees = If false and XTest is given then the individual trees
%                  are not stored in order to save memory.  Default = true
%    iFeatureNum = Vector for grouping of categorical variables as
%                  generated by processInputData function.  If left blank
%                  then the data is processed using processInputData.
%       bOrdinal = If the data is to be processed, this allows
%                  specification of ordinal variables.  For default
%                  behaviour see processInputData.m
%
% Outputs:
%            CCF = Structure with four fields, trees giving a Cell array of
%                  CCTs, options giving the options structure,
%                  inputProcessDetails giving details required to replicate
%                  input feature transform as done during the training and
%                  if bagging has been used (i.e. running CCF-BAG) then an
%                  out of bag error is also provided. Thus if trying to use
%                  the out of bag error for parameter selection, CCF-BAG
%                  must be used, an options structure for which can be
%                  made using optionsClassCCF.defaultOptionsCCFBag.
%                  Forest prediction can be made using predictFromCCF
%                  function or  individual trees using the predictFromCCT
%                  function. Note that some of options, e.g. voteFactor,
%                  are used in prediction and some options are changed
%                  during the generation if they are initially set to
%                  'default' values.  Note predictFromCCF applies the
%                  inputProcess so this does not need to be done manually.
%        forPred = Forest predictions for XTest
%       forProbs = Forest probabilities for XTest
%       treePred = Individual tree predictiosn for XTest
%     cumForPred = Predictions of forest for XTest cumulative in the
%                  individual trees.  cumForPred(:,end)==forPred
%
% Tom Rainforth 09/10/15

mypath = path;
locToolbox = [regexprep(mfilename('fullpath'),'genCCF',''), 'toolbox'];
bInPath = ~isempty(strfind(mypath,locToolbox));

if ~exist('nTrees','var') || isempty(nTrees)
    nTrees = 500;
end

if ~exist('bReg','var') || isempty(bReg)
    bReg = false;
end

if ~exist('bOrdinal','var')
    bOrdinal = [];
elseif ~isempty(bOrdinal)
    bOrdinal = logical(bOrdinal);
end

if ~bInPath
    addpath(locToolbox);
end


if ~isnumeric(XTrain) || ~exist('iFeatureNum','var') || isempty(iFeatureNum)
    % If XTrain not in numeric form or if a grouping of features is not
    % provided, apply the input data processing.
    if exist('iFeatureNum','var') && ~isempty(iFeatureNum)
        warning('iFeatureNum provided but XTrain not in array format, over-riding');
    end
    if ~exist('XTest','var') || isempty(XTest)
        [XTrain, iFeatureNum, inputProcessDetails] = processInputData(XTrain,bOrdinal);
    else
        [XTrain, iFeatureNum, inputProcessDetails, XTest] = processInputData(XTrain,bOrdinal,XTest);
    end
else
    mu_XTrain = nanmean(XTrain,1);
    std_XTrain = nanstd(XTrain,[],1);
    inputProcessDetails = struct('bOrdinal',true(1,size(XTrain,2)),'mu_XTrain',mu_XTrain,'std_XTrain',std_XTrain);
    inputProcessDetails.Cats = cell(0,1);
    XTrain = replicateInputProcess(XTrain,inputProcessDetails);
    if ~isempty(XTest)
        XTest = replicateInputProcess(XTest,inputProcessDetails);
    end
end

if ~exist('bKeepTrees','var') || isempty(bKeepTrees)
    bKeepTrees = true;
end

N = size(XTrain,1);
D = numel(fastUnique(iFeatureNum)); % Note that setting of number of features to subsample is based only
% number of features before expansion of categoricals.


if ~bReg
    
    [YTrain, classes] = classExpansion(YTrain);
    
    if numel(classes)==1
        warning('Only 1 class present in training data!');
    end
    
    if size(YTrain,2)==1
        baseCounts = [sum(~YTrain),sum(YTrain)];
    else
        baseCounts = sum(YTrain,1);
    end
    
    if ~exist('optionsFor','var') || isempty(optionsFor)
        optionsFor = optionsClassCCF;
    end
    optionsFor = optionsFor.updateForD(D);
    optionsFor = optionsFor.updateForBaseCounts(baseCounts);
    
    % Stored class names can be used to link the ids given in the CCT to the
    % actual class names
    optionsFor.classNames = classes;
        
    % Number of classes
    K = max(2,size(YTrain,2));
else
    
    muY = mean(YTrain);
    stdY = std(YTrain,[],1);
    
    YTrain = bsxfun(@rdivide,bsxfun(@minus,YTrain,muY),stdY);
    YTrain(isnan(YTrain)) = 0;
    
    if ~exist('optionsFor','var') || isempty(optionsFor)
        optionsFor = optionsClassCCF.defaultOptionsReg;
    end
    
    optionsFor = optionsFor.updateForD(D);    
    optionsFor.org_muY = muY;
    optionsFor.org_stdY = stdY;
    optionsFor.mseTotal = 1;    
end

nOut = nargout;

if nOut<2 && ~bKeepTrees
    bKeepTrees = true;
    warning('Selected not to keep trees but only requested a single output of the trees, reseting bKeepTrees to true');
end

if ~exist('XTest','var') || isempty(XTest)
    if nOut>1
        error('To return more than just the trees themselves, must input the test points');
    else
        XTest = NaN(0,size(XTrain,1));
    end
end

forest = cell(1,nTrees);
if nOut>1
    treePredictsTest = NaN(size(XTest,1),nTrees);
end

if optionsFor.bUseParallel == true
    parfor nT = 1:nTrees
        tree = genTree(XTrain,YTrain,bReg,optionsFor,iFeatureNum,N);
        if bKeepTrees
            forest{nT} = tree;
        end
        if nOut>1
            treePredictsTest(:,nT) = predictFromCCT(tree,XTest);
        end
    end
else
    for nT = 1:nTrees
        tree = genTree(XTrain,YTrain,bReg,optionsFor,iFeatureNum,N);
        if bKeepTrees
            forest{nT} = tree;
        end
        if nOut>1
            treePredictsTest(:,nT) = predictFromCCT(tree,XTest);
        end
    end
end

CCF.Trees = forest;
CCF.bReg = bReg;
CCF.options = optionsFor;
CCF.inputProcessDetails = inputProcessDetails;

if optionsFor.bBagTrees && bKeepTrees && ~bReg
    votesOOb = zeros(size(YTrain,1),max(2,size(YTrain,2)));
    for nTO=1:numel(CCF.Trees)
        indAdd = sub2ind(size(votesOOb),CCF.Trees{nTO}.iOutOfBag,CCF.Trees{nTO}.predictsOutOfBag);
        votesOOb(indAdd) = votesOOb(indAdd)+1;
    end
    forestProbs = bsxfun(@rdivide,votesOOb,sum(votesOOb,2));
    [~,forestPredicts] = max(bsxfun(@times,forestProbs,CCF.options.voteFactor(:)'),[],2);
    YTrainVec = sum(bsxfun(@times,YTrain,1:size(YTrain,2)),2);
    CCF.percentageOutOfBagError = 100*(1-mean(forestPredicts==YTrainVec));
elseif bReg
    CCF.percentageOutOfBagError = 'Currently not supported for regression';
    % FIXME add regression out of bag error
else
    CCF.percentageOutOfBagError = 'OOB error only returned if bagging used.  Please use CCF-Bag instead via options=optionsClassCCF.defaultOptionsCCFBag';
end

if nOut<2
    return
end


% Use equal voting to make predictions
if ~bReg
    if nargout>4
        cumVotes = bsxfun(@rdivide,cumsum(bsxfun(@eq,treePredictsTest,reshape(1:K,[1,1,K])),2),reshape(1:nTrees,[1,nTrees,1]));
        forestProbsTest = squeeze(cumVotes(:,end,:));
        voteFactor = reshape(optionsFor.voteFactor/mean(optionsFor.voteFactor),[1,1,K]);
        [~,cumulativeForestPredictsTest] = max(bsxfun(@times,cumVotes,voteFactor),[],3);
        forestPredictsTest = cumulativeForestPredictsTest(:,end);
    else
        forestProbsTest = squeeze(sum(bsxfun(@eq,treePredictsTest,reshape(1:K,[1,1,K])),2))/nTrees;
        [~,forestPredictsTest] = max(bsxfun(@times,forestProbsTest,optionsFor.voteFactor(:)'),[],2);
    end
    
    forestPredictsTest = reshape(optionsFor.classNames(forestPredictsTest),[],1);
    if nargout>3
        treePredictsTest = optionsFor.classNames(treePredictsTest);
        if nargout>4
            cumulativeForestPredictsTest= optionsFor.classNames(cumulativeForestPredictsTest);
        end
    end
else
    if nargout>3
        cumulativeForestPredictsTest = bsxfun(@rdivide,cumsum(treePredicts,2),1:nTrees);
        forestPredictsTest = cumulativeForestPredictsTest(:,end);
    else
        forestPredictsTest = mean(treePredictsTest,2);
    end
    if nargout>2
        forestProbsTest = std(treePredictsTest,[],2);
    end
end

end

function tree = genTree(XTrain,YTrain,bReg,optionsFor,iFeatureNum,N)
% A sub-function is used so that it can be shared between the for and
% parfor loops

if optionsFor.bBagTrees
    iTrainThis = datasample(1:N,N);
    iOob = setdiff(1:N,iTrainThis)';
else
    iTrainThis = 1:N;
end

XTrainBag = XTrain(iTrainThis,:);
YTrainBag = YTrain(iTrainThis,:);

if strcmpi(optionsFor.treeRotation,'rotationForest')
    % This allows functionality to use the Rotation Forest algorithm as a
    % meta method for individual CCTs
    [R,muX,XTrainBag] = rotationForestDataProcess(XTrainBag,optionsFor.RotForM,...
                                optionsFor.RotForpS,optionsFor.RotForpClassLeaveOut);
elseif strcmpi(optionsFor.treeRotation,'random')
    R = randomRotation(size(XTrain,2));
    muX = mean(XTrain,1);
    XTrainBag = bsxfun(@minus,XTrainBag,muX)*R;
elseif strcmpi(optionsFor.treeRotation,'pca')
    [R,muX,XTrainBag] = pcaLite(XTrainBag,false,false);
end

tree = growCCT(XTrainBag,YTrainBag,bReg,optionsFor,iFeatureNum,0);

if optionsFor.bBagTrees
    tree.iOutOfBag = iOob;
    tree.predictsOutOfBag = predictFromCCT(tree,XTrain(iOob,:));
end

if ~strcmpi(optionsFor.treeRotation,'none')
    tree.rotDetails = struct('R',R,'muX',muX);
end

end

function x = converToZScores(x,mu,std)
x = bsxfun(@rdivide,bsxfun(@minus,x,mu),std);
x(isnan(x)) = 0;
end
