function v = variable_importance_forest(CCF, X, Y, bOutOfBag)
% Tentative estimate for the relative variable importances using a forest,
% no guarantees this estimate is sensible!
%
% Based on summing the absolute values of the CCA coefficients for the
% feature scaled by the number of variables at the split for all trees
%
% Inputs: CCF
%
% Outputs: v = estimated variable importance, normalized to sum to 1
%
% Tom Rainforth 28/06/17

D = numel(CCF.inputProcessDetails.mu_XTrain);
nTrees = numel(CCF.Trees);
bReg = CCF.bREg;
v = zeros(D,1);

for n=1:nTrees
    v = v+variable_importance_tree(CCF.Trees{n},X, Y, bReg, bOutOfBag);
end
v = v/nTrees;
