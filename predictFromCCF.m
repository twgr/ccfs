function [forestPredicts, forestProbs, treeOutputs] = predictFromCCF(CCF,X)
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
% Outputs:     forestPredicts = Array of numeric predictions corresponding
%                               to the class label if the labels where
%                               provided as a numeric array or the indexes
%                               if they were provided as a cell array of
%                               strings.  Note that in the latter case, the
%                               classes labels to which this indexes is
%                               given by CCF.options.classes.
%              forestProbs = Assigned probability to each class for
%                             classification.  Empty for regression
%               treeOutputs = Individual tree outputs.  Leaf means for
%                             regression, class probabilities for
%                             classification.  Multiple outputs are third
%                             column
%
% 14/06/15

X = replicateInputProcess(X,CCF.inputProcessDetails);

nTrees = numel(CCF.Trees);
% Preallocate output space
treeOutputs = repmat(reshape(predictFromCCT(CCF.Trees{1},X),size(X,1),1,[]),1,nTrees,1);
if CCF.options.bUseParallel
    parfor n=2:nTrees
        treeOutputs(:,n,:) = predictFromCCT(CCF.Trees{n},X);
    end
else
    for n=2:nTrees
        treeOutputs(:,n,:) = predictFromCCT(CCF.Trees{n},X);
    end
end

[forestPredicts, forestProbs] = treeOutputsToForestPredicts(CCF,treeOutputs);

end