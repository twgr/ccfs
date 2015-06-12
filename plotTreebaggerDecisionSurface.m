function [c,h] = plotTreebaggerDecisionSurface(Bag,xLims,yLims,nxRes,nyRes)

    [x,y] = meshgrid(linspace(xLims(1),xLims(2),nxRes),linspace(yLims(1),yLims(2),nyRes));
    preds = predict(Bag,[x(:),y(:)]);
    uniquePreds = unique(preds);
    nVals = numel(uniquePreds);
    numericPreds = NaN(numel(x),1);
    
    for n=1:nVals
        numericPreds(strcmpi(uniquePreds{n},preds)) = n;
    end
    
    numericPreds = reshape(numericPreds,size(x));
    
    contourVals = 1.5:1:(nVals-0.5);
    
    figure
    [c,h]= contourf(x,y,numericPreds,contourVals);
    %ch = get(h,'child');
    xlabel('x1')
    ylabel('x2')    
    axis square
end
    
    