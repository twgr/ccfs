function [predictions, countsLeaf] = predictFromCCT(tree,X)
%predictFromCCT predicts class using trained tree
%
% [prediction, countsLeaf] = predictFromCCT(tree,X)
%
% Inputs:   tree = output strcut from growTree
%              X = input features, each row should be a seperate data point
% Outputs:  predictions = Vector of numeric predictions corresponding to
%                         the class label
%           countsLeaf  = Training counts at the assigned leaf.
%
% 14/06/15

    if tree.bLeaf
        predictions = tree.label*ones(size(X,1),1);
        if nargout>1
            countsLeaf = repmat(tree.trainingCounts,size(X,1),1);
        end
    else
        if isfield(tree,'rotForDetails') && ~isempty(tree.rotForDetails)
            X = bsxfun(@minus,X,tree.rotForDetails.muX)*tree.rotForDetails.R;
        end
        
        bLessChild = (X(:,tree.iIn)*tree.decisionProjection)<=tree.paritionPoint;
        
        predictions = NaN(size(X,1),1);
        if nargout>1
            countsLeaf = NaN(size(X,1),numel(tree.trainingCounts));
        end
        
        if any(bLessChild)
            if nargout>1
                [predictions(bLessChild), countsLeaf(bLessChild,:)] = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
            else
                predictions(bLessChild) = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
            end
        end
        if any(~bLessChild)
            if nargout>1
                [predictions(~bLessChild), countsLeaf(~bLessChild,:)] = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
            else
                predictions(~bLessChild) = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
            end
        end
    end
end