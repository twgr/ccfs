function [X, iFeatureNum, catInstancesNewFeats] = convertCategoricalFeats(Xcat, Xcont, nSigFigTol)
% function [X, iFeatureNum] = convertCategoricalFeats(Xcat, Xcont, nSigFigTol)
%
% Concats Xcont and Xcat to [Xcont,Xcatexp] where Xcatexp is an binary
% expansion of Xcat (note Xcont is optional).  Xcat can either be numeric 
% where each variable is considered to be part of the same category if it 
% different to less than nSigFigTol or a cell array for which any numeric 
% values are converted to a string to the same tolerance and then any
% unique strings are considered different categories
%
% iFeatureNum indicates the original feature number (Xcat are numbers
% 1:size(Xcat) and then numbers are left to right the columns of Xcont) in
% the new feature space
%
% Note that if any of columns of Xcont contain only a single unique value,
% they will be ommitted from the output X but will be noticeable in a
% missing number in iFeatureNum.
%
% TR 270515

if ~exist('Xcont','var') || isempty(Xcont)
    Xcont = zeros(size(Xcont,1),0);
end

if ~exist('nSigFigTol','var') || isempty(nSigFigTol)
    nSigFigTol = 8;
end

X = Xcont;
iFeatureNum = 1:size(Xcont,2);

if isempty(Xcat)
    return;
end

if ~iscell(Xcat)
    Xcat = num2cell(Xcat);
end

if iscell(Xcat)
    Xcat = makeSureString(Xcat,nSigFigTol);
end

iSkipNum = 0;
catInstancesNewFeats = {};

for n=1:size(Xcat,2)
    if isnumeric(Xcat)
        cats = unique(roundSigFigString(Xcat(:,n),nSigFigTol));
        catInstancesNewFeats = [catInstancesNewFeats; cats]; %#ok<AGROW>
        nCats = numel(cats);
    else
        cats = unique(Xcat(:,n));
        catInstancesNewFeats = [catInstancesNewFeats; cats]; %#ok<AGROW>
        nCats = numel(cats);
    end
    
    if nCats==1
       iSkipNum = iSkipNum+1;
       continue
    else
       iSkipNum = 0;
    end
    
    sizeSoFar = numel(iFeatureNum);
    if isempty(iFeatureNum)
        iFeatureNum = (1+iSkipNum)*ones(1,nCats);
    else
        iFeatureNum = [iFeatureNum,(iFeatureNum(end)+1+iSkipNum)*ones(1,nCats)]; %#ok<AGROW>
    end
    X = [X,zeros(size(X,1),nCats)]; %#ok<AGROW>    

    for c=1:nCats
        if isnumeric(Xcat)
            X(Xcat(:,n)==cats(c),(sizeSoFar+c)) = 1;            
        else            
            X(strcmp(Xcat(:,n),cats{c}),(sizeSoFar+c)) = 1;  
        end
    end
    
end

end


function A = makeSureString(A,nSigFigTol)

    for n=1:numel(A)
        A{n} = num2str(A{n},nSigFigTol);
    end
end