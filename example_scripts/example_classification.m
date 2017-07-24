% The below will train a CCF for the example spirals dataset shown in the
% paper and then generate the plots for the CCF and a RF trained using
% MATLABs TreeBagger function similar to those in the paper (note that the
% points plotted here are the test points instead of the training points as
% in the case in the paper)
%
% Tom Rainforth 27/07/15

%% Generate data
clear all
disp('Generating data')
[XTrain,YTrain,XTest,YTest] = genSpiralsData;
nTrees = 100;

%% Train and test CCF
disp('Training CCF')
CCF = genCCF(nTrees,XTrain,YTrain);
YpredCCF = predictFromCCF(CCF,XTest);
disp(['CCF Test missclassification rate (lower better) ' num2str(100*(1-mean(YTest==(YpredCCF)))) '%']);

%% Train and test RF
disp('Training RF');
RF = TreeBagger(nTrees,XTrain,YTrain);
YpredRF = cellfun(@str2double, predict(RF,XTest));
disp(['RF Test missclassification rate (lower better) ' num2str(100*(1-mean(YTest==(YpredRF)))) '%']);

%% Visualize decision surfaces
disp('Plotting the decision surface');
x1Lims = [round(min(XTrain(:,1))-1),round(max(XTrain(:,1))+1)];
x2Lims = [round(min(XTrain(:,2))-1),round(max(XTrain(:,2))+1)];
plotCCFDecisionSurface(CCF,x1Lims,x2Lims);
hold on
plotClasses(XTest,YTest,false);

plotTreebaggerDecisionSurface(RF,x1Lims,x2Lims);
hold on
plotClasses(XTest,YTest,false);