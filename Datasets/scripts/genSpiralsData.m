function [XTrain,YTrain,XTest,YTest] = genSpiralsData(NTrain,NTest,nClasses,startRadius,endRadius,sigR,bPlot,dims)
% Allows generation of the spirals dataset from the paper.  The original
% plot uses NTrain = 10000 and NTest = 10000, all other variables have as
% defaults the values from the paper.  The suggestsed call is thus
%
% [XTrain,YTrain,XTest,YTest] = genSpiralsData(NTrain,NTest);

if ~exist('NTrain','var') || isempty(NTrain)
    NTrain = 1000;
end

if ~exist('NTest','var') || isempty(NTest)
    NTest = 1000;
end

if ~exist('nClasses','var') || isempty(nClasses)
    nClasses = 3;
end

if ~exist('startRadius','var') || isempty(startRadius)
    startRadius = 1;
end

if ~exist('endRadius','var') || isempty(endRadius)
    endRadius = 4*pi;
end

if ~exist('sigR','var') || isempty(sigR)
    sigR = 1/nClasses;
end

if ~exist('bPlot','var') || isempty(bPlot)
    bPlot = false;
end

if ~exist('dims','var') || isempty(dims)
    dims = 2;
end

NTotal = NTrain+NTest;

cutOffs = (1/nClasses):(1/nClasses):((nClasses-1)/nClasses);

YVec = 1+sum(bsxfun(@gt,rand(NTotal,1),cutOffs),2);
Y = false(NTotal,nClasses);
for n=1:size(Y,2)
    Y(YVec==n,n) = true;
end

thetaVals = startRadius+(endRadius-startRadius).*rand(NTotal,1);
rVals = thetaVals+randn(NTotal,1).*sigR;

for n=2:size(Y,2)
    thetaVals(Y(:,n))=thetaVals(Y(:,n))+2*pi*(n-1)/size(Y,2);
end

if dims<3
    X = [rVals.*cos(thetaVals), rVals.*sin(thetaVals)];
else
    phiVals = [2*pi*rand(NTotal,dims-2),thetaVals];
    X = bsxfun(@times,rVals,[cos(phiVals(:,1)),cumprod(sin(phiVals(:,1:end-1)),2).*cos(phiVals(:,2:end)),prod(sin(phiVals),2)]);
    X = X(:,end:-1:1);
end

XTrain = X(1:NTrain,:);
XTest = X((NTrain+1):end,:);
YTrain = Y(1:NTrain,:);
YTest = Y((NTrain+1):end,:);

%XTrain = [XTrain,XTrain(:,2)+XTrain(:,3)];
%XTest = [XTest,XTest(:,2)+XTest(:,3)];

if bPlot
    
    colors = {'b','r','k','c','g','y','m'};
    
    figure
    hold on
    for n=1:size(YTrain,2)
        if dims>=3
            plot3(XTrain(YTrain(:,n),1),XTrain(YTrain(:,n),2),XTrain(YTrain(:,n),3),[colors{mod(n,numel(colors))+1} 'x']);
        else
            plot(XTrain(YTrain(:,n),1),XTrain(YTrain(:,n),2),[colors{mod(n,numel(colors))+1} 'x']);
        end
    end
    title(['Spirals train data, start radius = ' num2str(startRadius) ', end radius = ' num2str(endRadius) ', sigR = ' num2str(sigR)]);
    xlabel('x1')
    ylabel('x2')    
    legendLabels = cell(size(YTrain,2),1);
    for n=1:size(YTrain,2);
        legendLabels{n} = ['Class ' num2str(n)];
    end    
    legend(legendLabels{:})
    axis square
    axis([min(min(XTrain(:,1)),-(1*endRadius+2*sigR)),max(max(XTrain(:,1)),(1*endRadius+2*sigR)),min(min(XTrain(:,2)),-(1*endRadius+2*sigR)),max(max(XTrain(:,2)),(1*endRadius+2*sigR))]);
    
    figure
    hold on
    for n=1:size(YTest,2)
        if dims>=3
            plot3(XTest(YTest(:,n),1),XTest(YTest(:,n),2),XTest(YTest(:,n),3),[colors{mod(n,numel(colors))+1} 'x']);
        else
            plot(XTest(YTest(:,n),1),XTest(YTest(:,n),2),[colors{mod(n,numel(colors))+1} 'x']);
        end
    end
    title(['Spirals test data, start radius = ' num2str(startRadius) ', end radius = ' num2str(endRadius) ', sigR = ' num2str(sigR)]);
    xlabel('x1')
    ylabel('x2')
    legend(legendLabels{:})
    axis square
    axis([min(min(XTest(:,1)),-(1*endRadius+2*sigR)),max(max(XTest(:,1)),(1*endRadius+2*sigR)),min(min(XTest(:,2)),-(1*endRadius+2*sigR)),max(max(XTest(:,2)),(1*endRadius+2*sigR))]);
end

YTrain = sum(bsxfun(@times,1:size(YTrain,2),YTrain),2);
YTest = sum(bsxfun(@times,1:size(YTest,2),YTest),2);

end
    


