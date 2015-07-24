% The below will train a CCF for the example spirals dataset shown in the
% paper 

clear all
disp('Generating data')
[XTrain,YTrain,XTest,YTest] = genSpiralsData;
disp('Training CCF')
CCF = genCCF(200,XTrain,YTrain);
disp(['CCF Test missclassification rate ' num2str(100*(1-mean(YTest==(predictFromCCF(CCF,XTest))))) '%']);
disp(['Training RF']);
RF = TreeBagger(200,XTrain,YTrain);
disp(['RF Test missclassification rate ' num2str(100*(1-mean(YTest==(cellfun(@str2double, predict(RF,XTest)))))) '%']);
disp(['Plotting the decision surface (this can be a bit slow ...)']);
plotCCFDecisionSurface(CCF,[round(min(XTrain(:,1))-1),round(max(XTrain(:,1))+1)],...
    [round(min(XTrain(:,2))-1),round(max(XTrain(:,2))+1)],1000,1000);
hold on
plotClasses(XTest,YTest,false);

plotTreebaggerDecisionSurface(RF,[round(min(XTrain(:,1))-1),round(max(XTrain(:,1))+1)],...
    [round(min(XTrain(:,2))-1),round(max(XTrain(:,2))+1)],1000,1000);
hold on
plotClasses(XTest,YTest,false);