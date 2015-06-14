function [forestPredicts, forestProbs, treePredictions, cumulativeForestPredicts] = predictFromCCF(forest,X,voteFactor)
%predictFromCCT predicts class using trained tree
%
% [prediction, countsLeaf] = predictFromCCT(tree,X)
%
% Inputs:              forest = cell array of CCTs
%                           X = input features, each row should be a 
%                               seperate data point
% Optional Input:  voteFactor = factor applied to votes of each class. By
%                               default this has no effect when there is a
%                               clear winner an breaks ties towards the
%                               most globally popular class in tie breaks
% Outputs:  forestPredictions = Vector of numeric predictions corresponding to
%                               the class label
%                 forestProbs = Assigned probability to each class
%             treePredictions = Individual tree predictions
%    cumulativeForestPredicts = Predictions of forest cumaltive with adding
%                               trees
%
% 14/06/15

nTrees = numel(forest);
treePredictions = NaN(size(X,1),nTrees);

for n=1:nTrees
    treePredictions(:,n) = predictFromCCT(forest{n},X);
end

K = numel(forest{1}.trainingCounts);


if ~exist('voteFactor','var') || isempty(voteFactor)
    voteFactor = 1 + 1./((1e6+nTrees)*(forest{1}.trainingCounts+rand(1,K)));
end

if nargout>3
   cumVotes = bsxfun(@rdivide,cumsum(bsxfun(@eq,treePredictions,reshape(1:K,[1,1,K])),2),reshape(1:nTrees,[1,nTrees,1]));
   forestProbs = squeeze(cumVotes(:,end,:))/nTrees;
   voteFactor = reshape(voteFactor/mean(voteFactor),[1,1,K]);
   [~,cumulativeForestPredicts] = max(bsxfun(@times,cumVotes,voteFactor),[],3);
   forestPredicts = cumulativeForestPredicts(:,end);
else
   forestProbs = squeeze(sum(bsxfun(@eq,treePredictions,reshape(1:K,[1,1,K])),2))/nTrees;
   [~,forestPredicts] = max(bsxfun(@times,forestProbs,voteFactor(:)'),[],2);
end

end