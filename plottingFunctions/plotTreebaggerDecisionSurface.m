function [c,h] = plotTreebaggerDecisionSurface(Bag,xLims,yLims,nxRes,nyRes)

    [x,y] = meshgrid(linspace(xLims(1),xLims(2),nxRes),linspace(yLims(1),yLims(2),nyRes));
    preds = predict(Bag,[x(:),y(:)]);
    [c,h] = plotDecisionSurface(x,y,preds);
end
    
    