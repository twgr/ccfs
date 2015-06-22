function uX = fastUnique(X)

uX = sort(X);
if isrow(X)
    uX = uX([true,diff(X)~=0]);
else
    uX = uX([true;diff(X)~=0]);
end