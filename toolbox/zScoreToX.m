function X = zScoreToX(zScore,InputProcessDetails)

X = bsxfun(@plus,bsxfun(@times,zScore,InputProcessDetails.std_XTrain),InputProcessDetails.mu_XTrain);
X(isnan(X)) = 0;