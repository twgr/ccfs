function [forestPredicts, forestProbs_or_std_dev, treePredicts, cumulativePredicts] = predictFromCCF(CCF,X)
%predictFromCCF predicts class using trained forest
%
% [forestPredicts, forestProbs_or_std_dev, treePredicts, ...
%       cumulativeForestPredict] = predictFromCCF(CCF,X)
%
% Inputs:                 CCF = output from genCCF.  This is a structure
%                               with a field Trees, giving a cell array of
%                               tree structures, and options which is an
%                               object of type optionsClassCCF
%                           X = input features, each row should be a 
%                               seperate data point
% Outputs:     forestPredicts = Vector of numeric predictions corresponding
%                               to the class label if the labels where
%                               provided as a numeric array or the indexes
%                               if they were provided as a cell array of
%                               strings.  Note that in the latter case, the
%                               classes labels to which this indexes is
%                               given by CCF.options.classes.
%    forestProbs_or_std_dev = Assigned probability to each class for
%                             classification or standard deviation of mean
%                             predictions for regression
%             treePredicts = Individual tree predictions
%    cumulativePredicts = Predictions of forest cumaltive with adding
%                               trees
%
% 14/06/15

X = replicateInputProcess(X,CCF.inputProcessDetails);

nTrees = numel(CCF.Trees);
if CCF.bReg
    treePredicts = NaN(size(X,1),nTrees,CCF.nOutputs);
else
    treePredicts = NaN(size(X,1),nTrees);
end

for n=1:nTrees
    treePredicts(:,n,:) = predictFromCCT(CCF.Trees{n},X);
end

if CCF.bReg
    if nargout>2
        cumulativePredicts = bsxfun(@rdivide,cumsum(treePredicts,2),1:nTrees);
        forestPredicts = squeeze(cumulativePredicts(:,end,:));
    else
        forestPredicts = squeeze(mean(treePredicts,2));
    end    
    if nargout>1        
        forestProbs_or_std_dev = squeeze(std(treePredicts,[],2));
    end
else
    
    K = numel(CCF.Trees{1}.trainingCounts);
    
    if nargout>3
        cumVotes = bsxfun(@rdivide,cumsum(bsxfun(@eq,treePredicts,reshape(1:K,[1,1,K])),2),reshape(1:nTrees,[1,nTrees,1]));
        forestProbs_or_std_dev = squeeze(cumVotes(:,end,:));
        voteFactor = reshape(CCF.options.voteFactor/mean(CCF.options.voteFactor),[1,1,K]);
        [~,cumulativePredicts] = max(bsxfun(@times,cumVotes,voteFactor),[],3);
        forestPredicts = cumulativePredicts(:,end);
    else
        forestProbs_or_std_dev = squeeze(sum(bsxfun(@eq,treePredicts,reshape(1:K,[1,1,K])),2))/nTrees;
        [~,forestPredicts] = max(bsxfun(@times,forestProbs_or_std_dev,CCF.options.voteFactor(:)'),[],2);
    end
    
    if isnumeric(CCF.options.classNames) || islogical(CCF.options.classNames)
        forestPredicts = CCF.options.classNames(forestPredicts);
        treePredicts = CCF.options.classNames(treePredicts);
    end
    
end

end