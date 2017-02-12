function [primary_output, secondary_output] = predictFromCCT(tree,X)
%predictFromCCT predicts output using trained tree
%
% [primary_output, secondary_output] = predictFromCCT(tree,X)
%
% Inputs:   tree = output strcut from growTree
%              X = processed input features
% Outputs for classification
%           primary_output = classLabelIds
%                         Vector of numeric predictions corresponding to
%                         the class label ids.  Note this is not
%                         necessarily the class itself, e.g. if the classes
%                         are the digits 0 to 9, then classLabelId==1 is
%                         digit 0.
%           secondary_output = countsLeaf
%                         Training counts at the assigned leaf.
% Outputs for regression
%           primary_output = Mean
%                         Vector of mean predictions for outputs
%           secondary_output = Standard deviation
%
% 03/02/17

if isfield(tree,'inputProcessDetails')
    X = replicateInputProcess(X,tree.inputProcessDetails);
end

if tree.bLeaf
    if isfield(tree, 'mean')
        % Regression
        primary_output = bsxfun(@times,tree.mean,ones(size(X,1),1));
        secondary_output = bsxfun(@times,tree.std_dev,ones(size(X,1),1));
    else
        % Classification
        primary_output = tree.labelClassId*ones(size(X,1),1);
        if nargout>1
            secondary_output = repmat(tree.trainingCounts,size(X,1),1);
        end
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
    
    
    if isfield(tree,'trainingCounts')
        primary_output = NaN(size(X,1),1);
        if nargout>1
            secondary_output = NaN(size(X,1),numel(tree.trainingCounts));
        end
    else
        primary_output = NaN(size(X,1),numel(tree.meanNode));
        if nargout>1
            secondary_output = NaN(size(X,1),numel(tree.meanNode));
        end
    end
    
    if any(bLessChild)
        if nargout>1
            [primary_output(bLessChild,:), secondary_output(bLessChild,:)] = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
        else
            primary_output(bLessChild,:) = predictFromCCT(tree.lessthanChild,X(bLessChild,:));
        end
    end
    if any(~bLessChild)
        if nargout>1
            [primary_output(~bLessChild,:), secondary_output(~bLessChild,:)] = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
        else
            primary_output(~bLessChild,:) = predictFromCCT(tree.greaterthanChild,X(~bLessChild,:));
        end
    end
end
end