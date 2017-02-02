function [starts,ends,x,y,labels] = CATTreeToLines(CCT,bStructured)
    
    if ~exist('bStructured','var') || isempty(bStructured)
        bStructured = false;
    end    
    
    if CCT.bLeaf
        starts = {};
        ends = {};
        labels = CCT.labelClassId;
        x = {};
        y = {};
        return
    end
    
    grad = -CCT.decisionProjection(1)/CCT.decisionProjection(2);
    
    if ~isfinite(grad) || (abs(grad)>1e12)
        startPoint = [CCT.paritionPoint, -1e6];
        endPoint = [CCT.paritionPoint, 1e6];
    else
        int = CCT.paritionPoint/CCT.decisionProjection(2);
        startPoint = [-1e6,grad*(-1e6)+int];
        endPoint = [1e6,grad*1e6+int];
    end
    
    xT = [startPoint(1), endPoint(1)];
    yT = [startPoint(2), endPoint(2)];
    
    labelT = [];
    
    if CCT.decisionProjection(2)>0
        [startLeft, endLeft, xLeft, yLeft, labelsLeft] = CATTreeToLines(CCT.lessthanChild,bStructured);
        [startRight, endRight, xRight, yRight, labelsRight] = CATTreeToLines(CCT.greaterthanChild,bStructured);
    else
        [startLeft, endLeft, xLeft, yLeft, labelsLeft] = CATTreeToLines(CCT.greaterthanChild,bStructured);
        [startRight, endRight, xRight, yRight, labelsRight] = CATTreeToLines(CCT.lessthanChild,bStructured);
    end
    
    if bStructured
    
        starts = [{startPoint};{startLeft};{startRight}];
        ends = [{endPoint};{endLeft};{endRight}];
    
        x = [{xT};{xLeft};{xRight}];
        y = [{yT};{yLeft};{yRight}];
        
        labels = [{labelT};{labelsLeft};{labelsRight}];
        
    else
        
        starts = [{startPoint};startLeft;startRight];
        ends = [{endPoint};endLeft;endRight];
        
        x = [{xT};xLeft;xRight];
        y = [{yT};yLeft;yRight];
        
        labels = [{labelT};labelsLeft;labelsRight];
        
    end
    
    
    
    
end