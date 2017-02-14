function [leaf_mean, leaf_node] = predictFromCCT(tree,X)
%predictFromCCT predicts output using trained tree
%
% leaf_mean = predictFromCCT(tree,X)
%
% Inputs:   tree = output strcut from growTree
%              X = processed input features
% Outputs:  leaf_mean = Mean of outputs present at the leaf.  For
%                       classification then this represents the class
%                       probability, for regression it is simply the output
%                       mean.
%           leaf_node = The full leaf node details for the assigned point.
%                       WARNING: REQUESTING THIS WILL BE MUCH SLOWER THAN
%                       JUST TAKING ONE OUTPUT!
%
% 13/02/17

if isfield(tree,'inputProcessDetails')
    X = replicateInputProcess(X,tree.inputProcessDetails);
end

if tree.bLeaf
    
    leaf_mean = bsxfun(@times,tree.mean,ones(size(X,1),1));
    if nargout>1
        leaf_node = repmat({tree},size(X,1),1);
    end
    
else
    if isfield(tree,'rotDetails') && ~isempty(tree.rotDetails)
        X = bsxfun(@minus,X,tree.rotDetails.muX)*tree.rotDetails.R;
    end
    
    if isfield(tree,'featureExpansion') && ~isempty(tree.featureExpansion)
        bLessChild = (tree.featureExpansion(X(:,tree.iIn))*tree.decisionProjection)<=tree.paritionPoint;
    else
        bLessChild = (X(:,tree.iIn)*tree.decisionProjection)<=tree.paritionPoint;
    end
    
    leaf_mean = NaN(size(X,1),numel(tree.mean));
    if nargout>1
        leaf_node = cell(size(X,1),1);
    end
    
    if any(bLessChild)
        if nargout>1
            [leaf_mean(bLessChild,:), leaf_node(bLessChild,:)] = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
        else
            leaf_mean(bLessChild,:) = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
        end
    end
    if any(~bLessChild)
        if nargout>1
            [leaf_mean(~bLessChild,:), leaf_node(~bLessChild,:)] = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
        else
            leaf_mean(~bLessChild,:) = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
        end
    end
end
end