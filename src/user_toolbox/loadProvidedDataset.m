function [X,Y,bOrdinal] = loadProvidedDataset(name)
%loadProvidedDataset calls in datasets from Datasets folder
%
% [X,Y,bOrdinal] = loadProvidedDataset(name)
% 
% Valid names are the names of any csv files in this folder (these will 
% also be print to screen if you try and call an incorrect dataset).  
% For details on the formatting then see loadCSVDataSet.m
%
% Tom Rainforth 04/08/15

loc = [regexprep(mfilename('fullpath'),mfilename,''),'..',filesep(),'..',filesep()];

validNames = {'ILPD';'balanceScale';'banknote';'breastTissue';'hillValleyNoisy';...
    'hillValley';'ionosphere';'iris';'letter';'libras';'magic04';'nursery';...
    'optDigitsHandwritten';'pendDigits';'satimage';'seeds';'skinSeg';'soybean';...
    'spirals';'splice';'vowelc';'voweln';'waveformNoise';'waveform';'yeast';'zoo';'solarFlare';'flags';'jura'};

if ~any(strcmp(name,validNames))
    disp(validNames)
    error('Invalid name, valid names shown above');
end

% FIXME this is a bit disgusting
try
    [X,Y,bOrdinal] = loadCSVDataSet([loc 'Datasets' filesep() 'classification' filesep() name '.csv']);
catch
    try
        [X,Y,bOrdinal] = loadCSVDataSet([loc 'Datasets' filesep() 'regression' filesep() name '.csv']);
    catch
        [X,Y,bOrdinal] = loadCSVDataSet([loc 'Datasets' filesep() 'multi_output' filesep() name '.csv']);
    end
end