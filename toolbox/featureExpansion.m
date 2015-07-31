function Z = featureExpansion(X,w,b)
Z = cos(bsxfun(@plus,X*w,b));
end