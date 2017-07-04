function [starts,ends,x,y,labels] = CTT_TreeToLines(CCT,bStructured,inputProcessDetails)

if ~exist('bStructured','var') || isempty(bStructured)
    bStructured = false;
end

if ~exist('inputProcessDetails','var') || isempty(inputProcessDetails)
    inputProcessDetails = CCT.inputProcessDetails;
end

if CCT.bLeaf
    starts = {};
    ends = {};
    [~,labels] = max(CCT.mean);
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

startPoint = zScoreToX(startPoint,inputProcessDetails);
endPoint = zScoreToX(endPoint,inputProcessDetails);

xT = [startPoint(1), endPoint(1)];
yT = [startPoint(2), endPoint(2)];

labelT = [];

if CCT.decisionProjection(2)>0
    [startLeft, endLeft, xLeft, yLeft, labelsLeft] = CTT_TreeToLines(CCT.lessthanChild,bStructured,inputProcessDetails);
    [startRight, endRight, xRight, yRight, labelsRight] = CTT_TreeToLines(CCT.greaterthanChild,bStructured,inputProcessDetails);
else
    [startLeft, endLeft, xLeft, yLeft, labelsLeft] = CTT_TreeToLines(CCT.greaterthanChild,bStructured,inputProcessDetails);
    [startRight, endRight, xRight, yRight, labelsRight] = CTT_TreeToLines(CCT.lessthanChild,bStructured,inputProcessDetails);
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