function predFromEXE(Xloc,destination)

load('myForest.mat');
X = readtable(Xloc,'ReadVariableNames',false);
disp(CCF)
forestPredicts = predictFromCCF(CCF,X);
csvwrite(destination,forestPredicts);