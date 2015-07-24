function [c,h] = plotDecisionSurface(x,y,preds)

    uniquePreds = unique(preds);
    nVals = numel(uniquePreds);
    numericPreds = NaN(nVals,1);
    
    if iscell(uniquePreds)
        for n=1:nVals
            numericPreds(strcmpi(uniquePreds{n},preds)) = n;
        end
    else
        numericPreds = preds;
    end
    
    numericPreds = reshape(numericPreds,size(x));
    
    contourVals = 1.5:1:(nVals-0.5);
    
    figure
    [c,h]= contourf(x,y,numericPreds,contourVals);
    xlabel('x1')
    ylabel('x2')    
    axis square
    
end