function plotClasses(X,Y)

colors = {'b','r','k','c','g','y','m'};
markers = {'x','+','o','*','square','diamond','pentagram','hexagram'};

if size(Y,2)~=1
    Y = sum(bsxfun(@times,Y,1:size(Y,2)),2);
elseif islogical(Y)
    Y = Y+1;
end

figure
hold on

for k=1:max(Y)
    plot(X(Y==k,1),X(Y==k,2),[colors{mod(k,numel(colors))+1} markers{mod(k,numel(markers))+1}]);
end
