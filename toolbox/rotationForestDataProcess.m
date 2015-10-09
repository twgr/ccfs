function [R, muX, U] = rotationForestDataProcess(X,Y,M,pS,nCO)

if ~exist('pS','var') || isempty(pS)
    pS = 0.5;
end

classes = unique(Y);
nClasses = numel(classes);

if ~exist('nCO','var') || isempty(nCO)
    nCO = 0;
end


muX = mean(X,1);
X = bsxfun(@minus,X,muX);

D = size(X,2);

fOrder = randperm(D);

fGroups = reshape(fOrder(1:(M*floor(D/M))),M,[]);
fLeft = fOrder((M*floor(D/M)+1):end);

classLeaveGroups = manyRandPerms(nClasses,nClasses-nCO,size(fGroups,2))';
classLeaveLeft = randperm(nClasses,nClasses-nCO);

iClasses = cell(nClasses,1);
for k=1:nClasses
    iClasses{k} = find(Y==k);
end

R = sparse(D,D);
iUpTo = 1;

K = size(fGroups,2);

for n=1:K    
    iThis = iClasses{classLeaveGroups(1,n)};
    for k=2:size(classLeaveGroups,1)
        iThis = [iThis;iClasses{classLeaveGroups(k,n)}];
    end
    r = localRotation(X(iThis,fGroups(:,n)),pS);
    R((1+(n-1)*M):(n*M),iUpTo:(iUpTo+size(r,2)-1)) = r;
    iUpTo = iUpTo+size(r,2);
end

if ~isempty(fLeft)
    iThis = iClasses{classLeaveLeft(1)};
    for k=2:numel(classLeaveLeft)
        iThis = [iThis;iClasses{classLeaveLeft(k)}];
    end
    r = localRotation(X(iThis,fLeft),pS);
    R((1+(K)*M):end,iUpTo:(iUpTo+size(r,2)-1)) = r;
    iUpTo = iUpTo+size(r,2);
end

R = R(:,1:(iUpTo-1));

R(fOrder,:) = R;

if nargout>2
    U = X*R;
end

end

function r = localRotation(x,p)
    
    iB = datasample((1:size(x,1)),round(size(x,1)*p));
    xB = x(iB,:);
    r = pcaReduced(xB,false,true);

end
