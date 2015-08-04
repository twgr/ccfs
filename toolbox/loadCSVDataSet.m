function [X,Y,bOrdinal] = loadCSVDataSet(inputLocation)
%loadCSVDataSet Loads a formatted csv to give features and classes
%
% funtion [X,Y,bOrdinal] = loadCSVDataSet(inputLocation)
%
% inputLocation = String giving location of an input csv file.  The
%     last column gives the class labels with featuers in the other 
%     columns.  The following delimiters are supported: 
%               [' ' ',' '|' ';' tab].  
%     Classes can either be numerical or strings.  If the dataset contains 
%     non-ordinal features then these should either be specified using 
%     non-numeric symbols or by specifying a header line of the form 
%               bOrdinal%1%1%0%1%... 
%     where % indicates the delimiter used, 1 indicates the respective 
%     feature is ordinal and 0 that it is an unordered categorical.  For an
%     example of these see the processed datasets in Dataset folder of the
%     directory.
%
% Outpus:   X = Features, this will be a numeric array if possible and
%               otherwise a cell array
%           Y = Class labels returned as a a numeric column vector when
%               possible and a column vector of cells otherwise.
%    bOrdinal = Row vector of logicals indicating whether a feature is
%               ordinal (true) or an unordered categorical (false).
%
% Tom Rainforth 04/08/15

fid = fopen(inputLocation,'r');
firstLine = fgets(fid);

if strcmpi(firstLine(1:8),'bOrdinal')
    iNum = regexp(firstLine,'\d');
    delimiter = firstLine(9:(iNum(1)-1));
    bOrdinal = arrayfun(@(x) logical(str2double(firstLine(x))), iNum);
    fclose(fid);
    InputTable = readtable(inputLocation,'HeaderLines',1,'ReadVariableNames',false,'Delimiter',delimiter);
    try
        X = table2array(InputTable(:,1:end-1));
    catch
        X = table2cell(InputTable(:,1:end-1));
    end
    try
        Y = table2array(InputTable(:,end));
    catch
        Y = table2cell(InputTable(:,end));
    end
else
    fclose(fid);
    iDel = regexp(firstLine,'[\s , \| ; \t]');
    if isempty(iDel)
        error('Invalid delimiter');
    end
    delimiter = firstLine(iDel(1));
    InputTable = readtable(inputLocation,'ReadVariableNames',false,'Delimiter',delimiter);
    try
        X = table2array(InputTable(:,1:end-1));
    catch
        X = table2cell(InputTable(:,1:end-1));
    end
    try
        Y = table2array(InputTable(:,end));
    catch
        Y = table2cell(InputTable(:,end));
    end
    bOrdinal = true(1,size(X,2));
end