function R=random_rotation_matrix(d)
% random rotation matrix in space with dimention d
% algorithm: http://en.wikipedia.org/wiki/Rotation_matrix#Properties_of_a_rotation_matrix
% We can also generate a uniform distribution in any dimension using the 
% subgroup algorithm of Diaconis & Shashahani (1987). 
% This recursively exploits the nested dimensions group structure of SO(n),
% as follows. Generate a uniform angle and construct a 2×2 rotation matrix.
% To step from n to n+1, generate a vector v uniformly distributed on the n-sphere,
% Sn, embed the n×n matrix in the next larger size with last column (0,…,0,1), 
% and rotate the larger matrix so the last column becomes v.

if d==0
    R=[];
    return;
end

if d==1
    R=1;
    return;
end

R=zeros(d,d);

% generate 1st random 2d rtation:
al=2*pi*rand;
cal=cos(al);
sal=sin(al);
R(1:2,1:2)=[cal  -sal
            sal  cal];
 
A=zeros(d,d);
        
for dmc=3:d
    v=random_unit_vector(dmc,1);
    R(dmc,dmc)=1;
    % now it is need to rotate R(1:dmc,1:dmc) in such way to have last
    % column oriented as v
    
    % gramm shmidt:
    A(1:dmc,1:dmc)=eye(dmc);
    A(1:dmc,1)=v;
    for c1 = 2:dmc
        a=A(1:dmc,c1);
        for c2=1:c1-1
            a=a-(a'*A(1:dmc,c2))*A(1:dmc,c2);
        end
        a=a/norm(a);
        A(1:dmc,c1)=a;
    end
    A(1:dmc,1:dmc)=circshift(A(1:dmc,1:dmc),[0 -1]);
    %A(1:dmc,1:dmc)=A(1:dmc,1:dmc)/det(A(1:dmc,1:dmc)); % to prevent det(A)=-1;
    
    R(1:dmc,1:dmc)=A(1:dmc,1:dmc)*R(1:dmc,1:dmc);
end
if det(R)<0
    R=[-R(:,1),  R(:,2:end)];
end