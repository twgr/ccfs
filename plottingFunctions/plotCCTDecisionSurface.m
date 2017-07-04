function [c,h] = plotCCTDecisionSurface(CCT,xLims,yLims,nxRes,nyRes)

    [x,y] = meshgrid(linspace(xLims(1),xLims(2),nxRes),linspace(yLims(1),yLims(2),nyRes));
    probs = predictFromCCT(CCT,[x(:),y(:)]);
    [~,preds] = max(probs,[],2);
    [c,h] = plotDecisionSurface(x,y,preds);
end
    
    