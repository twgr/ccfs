function [X,Y,bOrdinal] = loadDataset(name)
%loadDataset calls in datasets from \Datasets folder
%
% [X,Y,bOrdinal] = loadDataset(name)
% 
% Valid names are the names of any csv files in this folder.  These should
% be in the form where the last column is the class label and the first row
% indicates whether the corresponding feature is an ordinal feature or not
% (i.e. this should be 0 only for non-ordered categorical features).
%
% Tom Rainforth 27/07/15

loc = mfilename('fullpath');
iSeps = regexp(loc,filesep());
loc = loc(1:(iSeps(end-1)));

validNames = {'ILPD';'balanceScale';'banknote';'breastTissue';'hillValleyNoisy';...
    'hillValley';'ionosphere';'iris';'letter';'libras';'magic04';'nursery';...
    'optDigitsHandwritten';'pendDigits';'satimage';'seeds';'skinSeg';'soybean';...
    'spirals';'splice';'vowelc';'voweln';'waveformNoise';'waveform';'yeast';'zoo'};

if ~any(strcmp(name,validNames))
    disp(validNames)
    error('Invalid name, valid names shown above');
end

A = csvread([loc 'Datasets' filesep() name '.csv']);
bOrdinal = logical(A(1,1:end-1));
X = A(2:end,1:end-1);
Y = A(2:end,end);