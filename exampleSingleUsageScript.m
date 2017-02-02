% The below will train a CCF for the example spirals dataset shown in the
% paper and then generate the plots for the CCF and a RF trained using
% MATLABs TreeBagger function similar to those in the paper (note that the
% points plotted here are seperate points draw from the same distribution
% instead of the training points used in the paper)
%
% Tom Rainforth 27/07/15

%clear all
disp('Generating data')
[XTrain,YTrain,XTest,YTest] = genSpiralsData;
disp('Training CCF')
CCF = genCCF(200,XTrain,YTrain);
disp(['CCF Test missclassification rate (lower better) ' num2str(100*(1-mean(YTest==(predictFromCCF(CCF,XTest))))) '%']);
disp('Training RF');
RF = TreeBagger(200,XTrain,YTrain);
disp(['RF Test missclassification rate (lower better) ' num2str(100*(1-mean(YTest==(cellfun(@str2double, predict(RF,XTest)))))) '%']);
disp('Plotting the decision surface (this can be a bit slow ...)');
plotCCFDecisionSurface(CCF,[round(min(XTrain(:,1))-1),round(max(XTrain(:,1))+1)],...
    [round(min(XTrain(:,2))-1),round(max(XTrain(:,2))+1)],1000,1000);
hold on
plotClasses(XTest,YTest,false);

plotTreebaggerDecisionSurface(RF,[round(min(XTrain(:,1))-1),round(max(XTrain(:,1))+1)],...
    [round(min(XTrain(:,2))-1),round(max(XTrain(:,2))+1)],1000,1000);
hold on
plotClasses(XTest,YTest,false);