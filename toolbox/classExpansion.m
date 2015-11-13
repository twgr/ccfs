function [Y, classes] = classExpansion(Y)
%classExpansion Ensures that class data is in its binary expansion format
%
% function [Yb, classes] = classExpansion(Y)
%
% Inputs: 
%    Y       = Class information, can be a binary expansion, a numerical
%              vector of labels or a cell array of numerical or string 
%              labels
%            
% Outpus: 
%    Yb      = Input in binary expansion format
%    classes = Names of classes.  In CCT only the class index is stored and
%              so this is used to convert to the original name.
%
% Tom Rainforth 22/06/15

if size(Y,2)==1 && ~islogical(Y) && (iscell(Y) || ~all(Y==0 | Y==1))
    [classes,~,Yindexes] = unique(Y);
    if numel(classes)==2
        % If there are only 2 classes the binary expansion can be a single
        % logical array
        YVec = Y;
        if iscell(YVec)
            Y = cellfun(@(x) strcmpi(x,classes{2}), YVec);
        else
            Y = YVec==classes(2);
        end
    else
        Y = false(size(Yindexes,1),numel(classes));
        for k=1:numel(classes)
            Y(:,k) = k==Yindexes;
        end
    end
else
    % Already in binary format but make sure Y is logical type to minimize 
    % memory requirement in recursion
    Y = logical(Y);
    if size(Y,2)==1
        classes = [false;true];
    else
        classes = (1:size(Y,2))';
    end
end