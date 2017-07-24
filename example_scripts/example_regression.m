% The below will train a CCF for the example camel6 dataset shown in the
% paper and then generate the plots for the CCF and a RF trained using
% MATLABs TreeBagger function similar to those in the paper.
%
% Tom Rainforth 27/07/15

%% Generate data
clear all
disp('Generating data')
[XTrain,YTrain,XTest,YTest] = genCamel6Data;
nTrees = 100;

%% Train and test CCF
disp('Training CCF')
CCF = genCCF(nTrees,XTrain,YTrain,true);
YpredCCF = predictFromCCF(CCF,XTest);
disp(['CCF Mean squared error (lower better) ' num2str(mean((YpredCCF-YTest).^2))]);

%% Train and test RF
disp('Training RF');
RF = TreeBagger(nTrees,XTrain,YTrain,'method','regression');
YpredRF = predict(RF,XTest);
disp(['RF Mean squared error (lower better) ' num2str(mean((YpredRF-YTest).^2))]);

%% Visualize decision surfaces
disp('Plotting the contour predictions');
x1Lims = [-1.15,1.15];
x2Lims = [-1.75,1.75];
resolution = 200;
plotCCFDecisionSurface(CCF,x1Lims,x2Lims,resolution,resolution);
title('CCF');

plotTreebaggerDecisionSurface(RF,x1Lims,x2Lims,resolution,resolution);
title('RF');

% Calc truth
[x1,x2] = meshgrid(linspace(x1Lims(1),x1Lims(2),resolution),linspace(x2Lims(1),x2Lims(2),resolution));
ytrue = camel6([x1(:),x2(:)]);
[c,h] = plotDecisionSurface(x1,x2,ytrue);
title('Ground Truth');