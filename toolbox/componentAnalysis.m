function [projMat, yprojMat, r, U] = componentAnalysis(X,Y,processes,epsilon)
%componentAnalysis  Carries out a series of specified component analyses
%
% [projRot, U] = componentAnalysis(X,Y,processes,epsilon)
%
% Carries out a a section of component analyses on X and Y to produce a
% projection matrix projMat which maps X to its components
%
% Inputs:
%          X = Input features, must be numeric.  Each row is a datapoint
%              and each column a feature (categoricals should have been
%              converted to their binary expansion
%          Y = Classes in binary expansion format.
%  processes = Component analyses to carry out. This should be a structure
%              of the form of the projections field in optionsClassCCF
%    epsilon = Tolerance parameter for rank reduction of QR decompositions
%
% Ouputs:
%    projMat = Projection matrix
%          U = X*projMat
%
% Tom Rainforth 10/06/15

toDo = [processes.CCA, processes.PCA, processes.CCAclasswise];

if ~isempty(processes.Rand)
    selected = processes.Rand(randi(numel(processes.Rand)));
    notSelected = processes.Rand(processes.Rand~=selected);
    toDo(selected) = true;
    toDo(notSelected) = false;
end

% FIXME yprojMat a bit of a mess.  In particular won't be the correct size
% when we eliminate things below
bYpresent = (max(Y,[],1)-min(Y,[],1))>1e-12;
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

projMat = NaN(size(X,2),0);
yprojMat = NaN(size(Y,2),0);

if toDo(2)
    
    pcaCoeff = pcaLite(X);
    projMat = [projMat,pcaCoeff];
    
end

if any(toDo([1,3]))
    
    % These require QR decomposition of X
    [q1,r1,p1] = qr(X,0);
    % Reduce to full rank within some tolerance
    rankX = sum(abs(diag(r1)) >= (epsilon*abs(r1(1))));
    if rankX == 0
        %warning('X doesnt vary so component analysis fails');
        projMat = [1;zeros(size(X,2)-1,1)];
        if nargout>1
            U = X*projMat;
        end
        return
    elseif rankX < x2
        q1 = q1(:,1:rankX); r1 = r1(1:rankX,1:rankX);
    end
    
    if toDo(1)
        
        % This code is a reduction of the function canoncorr.  This
        % method is explained in the supplementary material
        
        [q2,r2,p2] = qr(Y,0);
        % Reduce to full rank within some tolerance
        rankY = sum(abs(diag(r2)) >= (epsilon*abs(r2(1))));
        if rankY == 0
            %warning('Y doesnt vary so component analysis fails');
            projMat = [1;zeros(size(X,2)-1,1)];
            if nargout>1
                U = X*projMat;
            end
            return
        elseif rankY < K
            q2 = q2(:,1:rankY);
        end
        
        % Solve CCA using the decompositions, taking care to use minimal
        % complexity orientation for SVD.  Note the two calculations are
        % equivalent except in computational complexity
        
        d = min(rankX,rankY);
        if rankX>=rankY
            [L,D,M] = svd(q1' * q2,0);
        else
            [M,D,L] = svd(q2' * q1,0);
        end
        A = r1 \ L(:,1:d) * sqrt(x1-1);
                
        % Put coefficients back to their full size and their correct order
        A(p1,:) = [A; zeros(x2-rankX,d)];
        projMat = [projMat,A];
        
        if nargout>1
            % If requested also return projection for Y
            r2 = r2(1:rankY,1:rankY);
            B = r2 \ M(:,1:d) * sqrt(x1-1);
            B(p2,:) = [B; zeros(K-rankY,d)];
            yprojMat = [yprojMat,B];
        end
        
        if nargout>2
            r = min(max(diag(D(:,1:d))', 0), 1);
        end
    end
    
    if toDo(3)
        % Consider each class in an in / out fashion to generate a set
        % of K projections.
        
        for k=1:K
            % Solve CCA using the X decomposition and the fact that the
            % corresponding Y decomposition is itself
            [L,~,~] = svd(q1' * Y(:,k),0);
            A = r1 \ L(:,1) * sqrt(x1-1);
            A(p1,:) = [A; zeros(x2-rankX,1)];
            projMat = [projMat,A];       %#ok<AGROW>
        end
    end
    
end

%end

% Normalize the projection matrices.  This ensures that the later tests for
% close points are triggered appropriately and is useful for
% interpretability.
projMat = bsxfun(@rdivide,projMat,sqrt(sum(projMat.^2,1)));


if nargout>3
    % Note that as in general only a projection matrix is given, we need to
    % add the mean back to be consistent with general use.  This equates to
    % addition of a constant term to each column in U
    U = bsxfun(@plus,X,muX)*projMat;
end

end