function projMat = componentAnalysisForCompiling(X,Y,epsilon)
%componentAnalysis  Carries out a series of specified component analyses
%
% projRot = componentAnalysis(X,Y,epsilon)
%
% Carries out a a section of component analyses on X and Y to produce a
% projection matrix projMat which maps X to its components
%
% Inputs:
%          X = Input features, must be numeric.  Each row is a datapoint
%              and each column a feature (categoricals should have been
%              converted to their binary expansion
%          Y = Classes in binary expansion format.
%    epsilon = Tolerance parameter for rank reduction of QR decompositions
%
% Ouputs:
%    projMat = Projection matrix
%
% 10/06/15

bYpresent = any(Y,1);
Y = Y(:,bYpresent);

muX = sum(X,1)/size(X,1);
muY = sum(Y,1)/size(Y,1);

% Subtraction of the mean is common to the process of calculating the
% projection matrices for both CCA and PCA but for computational
% effificently we don't make this translation when actually applying the
% projections

X = bsxfun(@minus,X,muX);
Y = bsxfun(@minus,Y,muY);

[x1,x2] = size(X);
if size(Y,1) ~= x1
    error('Input sizes do not match');
elseif x1 == 1
    error('Cannot carry out component analysis with only one point');
end
K = size(Y,2);
    
% This code is a reduction of the function canoncorr.  This
% method is explained in the supplementary material
[q1,r1,p1] = qr(X,0);
% Reduce to full rank within some tolerance
rankX = sum(abs(diag(r1)) >= (epsilon*abs(r1(1))));
if rankX == 0
    %warning('X doesnt vary so component analysis fails');
    projMat = [1;zeros(size(X,2)-1,1)];
    return
elseif rankX < x2
    q1 = q1(:,1:rankX); r1 = r1(1:rankX,1:rankX);
end

% This code is a reduction of the function canoncorr.  This
% method is explained in the supplementary material

[q2,r2,~] = qr(Y,0);
% Reduce to full rank within some tolerance
rankY = sum(abs(diag(r2)) >= (epsilon*abs(r2(1))));
if rankY == 0
    %warning('Y doesnt vary so component analysis fails');
    projMat = [1;zeros(size(X,2)-1,1)];
    return
elseif rankY < K
    q2 = q2(:,1:rankY);
end

% Solve CCA using the decompositions
d = min(rankX,rankY);
[L,~,~] = svd(q1' * q2,0);
projMat = r1 \ L(:,1:d) * sqrt(x1-1);

% Put coefficients back to their full size and their correct order
projMat(p1,:) = [projMat; zeros(x2-rankX,d)];
      
% Normalize the projection matrices.  This ensures that the later tests for
% close points are triggered appropriately and is useful for
% interpretability.
projMat = bsxfun(@rdivide,projMat,sqrt(sum(projMat.^2,1)));

end