function [XTrain,YTrain,XTest,YTest] = genCamel6Data(NTrain,NTest,x1Lims,x2Lims)

if ~exist('NTrain','var') || isempty(NTrain)
    NTrain = 1000;
end

if ~exist('test_grid_size','var') || isempty(test_grid_size)
    NTest = 1000;
end

if ~exist('x1Lims','var') || isempty(x1Lims)
    x1Lims = [-1.15,1.15];
end

if ~exist('x2Lims','var') || isempty(x2Lims)
    x2Lims = [-1.75,1.75];
end

XTrain = sampleX(NTrain,x1Lims,x2Lims);
XTest = sampleX(NTest,x1Lims,x2Lims);
YTrain = camel6(XTrain);
YTest = camel6(XTest);

end

function X = sampleX(N,x1Lims,x2Lims)

X = bsxfun(@plus,bsxfun(@times,rand(N,2),...
                                     [x1Lims(2),x2Lims(2)]-[x1Lims(1),x2Lims(1)]),...
                      [x1Lims(1),x2Lims(1)]);
end