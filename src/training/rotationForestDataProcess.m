function [R, muX, U] = rotationForestDataProcess(X,Y,M,prop_points_subsample,prop_classes_eliminate)

if ~exist('pS','var') || isempty(prop_points_subsample)
    prop_points_subsample = 0.5;
end

muX = mean(X,1);
X = bsxfun(@minus,X,muX);

D = size(X,2);

fOrder = randperm(D);

fGroups = reshape(fOrder(1:(M*floor(D/M))),M,[]);
fLeft = fOrder((M*floor(D/M)+1):end);

if ~exist('prop_classes_eliminate','var') || isempty(prop_classes_eliminate)
    prop_classes_eliminate = 0;
end

K = size(fGroups,2);

if prop_classes_eliminate~=0
    classes = unique(Y,'rows');
    nClasses = size(classes,1);
    
    n_classes_eliminate = floor(prop_classes_eliminate*nClasses);
    
    classLeaveGroups = manyRandPerms(nClasses,nClasses-n_classes_eliminate,size(fGroups,2))';
    classLeaveLeft = randperm(nClasses,nClasses-n_classes_eliminate);
    
    iClasses = cell(nClasses,1);
    for k=1:nClasses
        iClasses{k} = find(Y(:,k))';
    end
else
    % This could be a regression case so don't even try and find the
    % classes
    classLeaveGroups = ones(1,K);
    classLeaveLeft = 1;
    iClasses = {(1:size(X,1))};
end

R = zeros(D,D);
iUpTo = 1;

for n=1:K    
    iThis = [iClasses{classLeaveGroups(:,n)}];
    r = localRotation(X(iThis,fGroups(:,n)),prop_points_subsample);
    R((1+(n-1)*M):(n*M),iUpTo:(iUpTo+size(r,2)-1)) = r;
    iUpTo = iUpTo+size(r,2);
end

if ~isempty(fLeft)
    iThis = [iClasses{classLeaveLeft(:)}];
    r = localRotation(X(iThis,fLeft),prop_points_subsample);
    R((1+(K)*M):end,iUpTo:(iUpTo+size(r,2)-1)) = r;
end

R(fOrder,:) = R;

if nargout>2
    U = X*R;
end

end

function r = localRotation(x,p)
    
    iB = datasample((1:size(x,1)),round(size(x,1)*p));
    xB = x(iB,:);
    r = pcaLite(xB,false,false);

end
