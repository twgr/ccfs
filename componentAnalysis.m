function [projMat, U] = componentAnalysis(X,Y,processes)
%componentAnalysis  Carries out a series of specified component analyses
%
% [projRot, U] = componentAnalysis(X,Y,processes,bInclude)
%
% Carries out a a section of component analyses on X and Y to produce a
% projection matrix projMat which maps X to its components
%
% Inputs:
%          X = Input features, must be numeric.  Each row is a datapoint
%              and each column a feature (categoricals should have been
%              converted to their binary expansion
%          Y = Classes in binary expansion format.
%  processes = Component analyses to carry out.  Valid options are 'CCA',
%              'PCA', 'CCAclasswise', 'originalAxes', a cell array
%              containing any combination of the above or three part cell
%              array where the first term is 'random', the second is a set
%              of processes to sample from and the third is their
%              probability. Note CCA and Fisher's LDA are identical in 
%              this context
%
% Ouputs:
%    projMat = Projection matrix
%          U = X*projMat
%
% TR 10/06/15

if ~exist('processes','var') || isempty(processes)
    processes = {'CCA'};
elseif ~iscell(processes)
    processes = {processes};
end

if strcmpi(processes{1},'random')
    possibleProcesses = processes{2};
    nToSample = processes{3};
    iProcessUse = sort(randperm(numel(possibleProcesses),nToSample));
    processes = possibleProcesses(iProcessUse);
end

bQRXdone = false;

bYpresent = any(Y,1);
Y = Y(:,bYpresent);

muX = mean(X,1);
muY = mean(Y,1);

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

bDoingCCA = any(strcmpi(processes,'CCA'));

projMat = [];

for nProcess=1:numel(processes)
    
    switch processes{nProcess}
        case 'CCA'
            
            % This code is a reduction of the function canoncorr.  This
            % method is explained in the supplementary material
            
            if ~bQRXdone
                [q1,r1,p1] = qr(X,0);
                % Reduce to full rank within some tolerance
                rankX = sum(abs(diag(r1)) >= (1e-4*abs(r1(1))));
                if rankX == 0
                    warning('X doesnt vary so component analysis fails');
                    projMat = [1;zeros(size(XTrain,2)-1,1)];
                    if nargout>1
                        U = X*projMat;
                    end
                    return
                elseif rankX < x2
                    q1 = q1(:,1:rankX); r1 = r1(1:rankX,1:rankX);
                end
                bQRXdone = true;
            end
            
            [q2,r2,~] = qr(Y,0);
            % Reduce to full rank within some tolerance
            rankY = sum(abs(diag(r2)) >= (1e-4*abs(r2(1))));
            if rankY == 0
                warning('Y doesnt vary so component analysis fails');
                projMat = [1;zeros(size(XTrain,2)-1,1)];
                if nargout>1
                    U = X*projMat;
                end
                return
            elseif rankY < K
                q2 = q2(:,1:rankY);
            end
            
            % Solve CCA using the decompositions
            d = min(rankX,rankY);
            [L,~,~] = svd(q1' * q2,0);
            A = r1 \ L(:,1:d) * sqrt(x1-1);
            
            % Put coefficients back to their full size and their correct order
            A(p1,:) = [A; zeros(x2-rankX,d)];
            
            projMat = [projMat,A]; %#ok<AGROW>
            
        case 'PCA'
            
            pcaCoeff = pcaLite(X);
            projMat = [projMat,pcaCoeff]; %#ok<AGROW>
            
        case 'CCAclasswise'
            % Consider each class in an in / out fashion to generate a set
            % of K projections.
            
            if bDoingCCA && K==2
                % No difference here to normal CCA
                continue
            end
            
            if ~bQRXdone
                [q1,r1,p1] = qr(X,0);
                % Reduce to full rank within some tolerance
                rankX = sum(abs(diag(r1)) >= (1e-4*abs(r1(1))));
                if rankX == 0
                    warning('stats:canoncorr:BadData', 'X');
                    projMat = [1;zeros(size(XTrain,2)-1,1)];
                    U = X*projMat;
                    return
                elseif rankX < x2
                    q1 = q1(:,1:rankX); r1 = r1(1:rankX,1:rankX);
                end
                bQRXdone = true;
            end
            
            for k=1:K
                % Solve CCA using the X decomposition and the fact that the
                % corresponding Y decomposition is itself
                [L,~,~] = svd(q1' * Y(:,k),0);
                A = r1 \ L(:,1) * sqrt(x1-1);
                A(p1,:) = [A; zeros(x2-rankX,1)];
                projMat = [projMat,A];       %#ok<AGROW>
            end
            
            
        case 'originalAxes'
            
            projMat = [projMat,eye(size(X,2))]; %#ok<AGROW>
            
        otherwise
            error('Invalid feature generation process');
    end
end

% Normalize the projection matrices.  This ensures that the later tests for
% close points are triggered appropriately and is useful for
% interpretability.
projMat = bsxfun(@rdivide,projMat,sqrt(sum(projMat.^2,1)));

if nargout>2
    % Note that as in general only a projection matrix is given, we need to
    % add the mean back to be consistent with general use.  This equates to
    % addition of a constant term to each column in U
    U = bsxfun(@plus,X,muX)*projMat;
end

end