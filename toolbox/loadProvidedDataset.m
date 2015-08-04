function [X,Y,bOrdinal] = loadProvidedDataset(name)
%loadProvidedDataset calls in datasets from \Datasets folder
%
% [X,Y,bOrdinal] = loadProvidedDataset(name)
% 
% Valid names are the names of any csv files in this folder.  For details
% on the formatting then see loadCSVDataSet.m
%
% Tom Rainforth 04/08/15

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

[X,Y,bOrdinal] = loadCSVDataSet([loc 'Datasets' filesep() name '.csv']);