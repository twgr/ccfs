function [X,Y,bOrdinal] = loadCSVDataSet(inputLocation,bConvertCat,bNamed)
%loadCSVDataSet Loads a formatted csv to give features and classes
%
% function [X,Y,bOrdinal] = loadCSVDataSet(inputLocation)
%
% Loads a CSV to produce X, Y and bOrdinal.  The CSV should be formatted as
% follows:
%     The last column gives the target Y with featuers X in the other
%     columns.  The following delimiters are supported:
%               [' ' ',' '|' ';' tab].
%     Classes can either be numerical or strings.  If the dataset contains
%     non-ordinal features then these should either be specified using
%     non-numeric symbols or by specifying a header line of the form
%               bOrdinal%1%1%0%1%...
%     where % indicates the delimiter used, 1 indicates the respective
%     feature is ordinal and 0 that it is an unordered categorical.
%     For an example of these see the processed datasets in Dataset folder
%     of the directory (soybean gives an example where bOrdinal is used).
%     If bOrdinal is not specified then variables are assumed to be ordinal
%     unless the variable has MORE than one unique non-numeric input.  If
%     there is only one non-numeric input this is assumed to correspond to
%     a missing value.  For example if a feature has values 1 2 ? 4 ? it
%     will be converted to an ordinal feature with corresponding x values
%     1 2 NaN 4 NaN, but 1 2 ? 4 a will be treated as a non-ordinal feature
%     with values '1' '2' '?' '4' 'a'.
%
% Inputs: inputLocation = String giving location of an input csv file.
%       bConvertCat = Whether to convert categorical features to numerical
%                  ones.  They will still be marked a ordinal by bOrdinal
%                  but this allows them to be passed to TreeBagger without
%                  causing issue as it doesn't allow cell inputs. Default =
%                  true.
%         bNamed = Whether the csv contains names for the variables.  If so
%                  these should come after the bOrdinal header line (if
%                  this exists).  False by default
%     
%
% Outpus:   X = Features, this will be a numeric array if possible and
%               otherwise a cell array.  When a cell array, cell values
%               will be numeric if all non-missing values of that feature
%               are numeric, otherwise all values in column will be
%               strings.
%           Y = Class labels returned as a a numeric column vector when
%               possible and a column vector of cells otherwise.
%    bOrdinal = Row vector of logicals indicating whether a feature is
%               ordinal (true) or an unordered categorical (false).
%
% Tom Rainforth 04/08/15

if ~exist('bConvertCat','var') || isempty(bConvertCat)
    bConvertCat = true;
end

if ~exist('bNamed','var') || isempty(bNamed)
    bNamed = false;
end

fid = fopen(inputLocation,'r');
firstLine = fgets(fid);

if strcmpi(firstLine(1:8),'bOrdinal')
    iNum = regexp(firstLine,'\d');
    delimiter = firstLine(9:(iNum(1)-1));
    bOrdinal = arrayfun(@(x) logical(str2double(firstLine(x))), iNum);
    fclose(fid);
    InputTable = readtable(inputLocation,'HeaderLines',1,'ReadVariableNames',bNamed,'Delimiter',delimiter);
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
    InputTable = readtable(inputLocation,'ReadVariableNames',bNamed,'Delimiter',delimiter);
    try
        X = table2array(InputTable(:,1:end-1));
        assert(~iscell(X));
        bOrdinal = true(1,size(X,2));
    catch
        X = table2cell(InputTable(:,1:end-1));
        bNumeric = cellfun(@isnumeric,X);
        bOrdinal = sum(~bNumeric,1)==0;
        iContainsString = find(~bOrdinal);
        for n=1:numel(iContainsString)
            Xnum = cellfun(@str2double,X(~bNumeric(:,iContainsString(n)),iContainsString(n)));
            bNotNum = isnan(Xnum);            
            nUniqueStrings = numel(unique(X(bNotNum,iContainsString(n))));
            if nUniqueStrings<=1
                X(~bNumeric(:,iContainsString(n)),iContainsString(n)) = num2cell(Xnum);
                bOrdinal(iContainsString(n)) = true;
            end
        end
        if all(bOrdinal)
            X = cell2mat(X);
        end
    end
    try
        Y = table2array(InputTable(:,end));
    catch
        Y = table2cell(InputTable(:,end));
    end
end

if bConvertCat && iscell(X)
   for n=find(~bOrdinal)
      [~,~,iC] = unique(X(:,n));
      X(:,n) = num2cell(iC);
   end
   X = cell2mat(X);
end