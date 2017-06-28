function v = variable_importance_tree(tree, X, Y, bReg, bOutOfBag)
% Tentative estimate for the relative variable importances using a tree,
% no guarantees this estimate is sensible!
%
% Inputs: tree
%    X = Samples to test
%    bOutOfBag = Use only the out of bag indices, requires CCF-Bag to
%         have been used in the first place.  Default metric would be to
%         have XTrain as X and this is true.  Could however do a cross
%         validation test if only think of interest is the variable
%         importance.
%
% Outputs: v = estimated variable importance, normalized to sum to 1

if ~exist('bOutOfBag','var')
    bOutOfBag = true;
end

if isfield(tree,'inputProcessDetails')
    X = replicateInputProcess(X,tree.inputProcessDetails);
end

if bOutOfBag
    X = X(tree.iOutOfBag,:);
end

% Any values left as NaN now need to be randomly assigned
X = random_missing_vals(X);
[N,D] = size(X);
Yp = predictFromCCT(tree,X);
base_error = get_error(Y,Yp,bReg);
errors = NaN(d,1);

for d=1:D
    Xd_true = X(:,d);
    X(:,d) = randn(N,1);
    Ypd = predictFromCCT(tree,X);
    errors(d) = get_error(Y,Ypd,bReg);
    X(:,d) = Xd_true;
end

v = (errors-base_error)/base_error;

end


function E = get_error(Y,YPred,bReg)

if bReg
    E = nanmean((Y-Ypred).^2,1);
else    
    E = (1-nanmean(Y==YPred,1));
end
end
