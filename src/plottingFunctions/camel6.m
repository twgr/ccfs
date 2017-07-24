function y = camel6(x)

x1 = x(:,1);
x2 = x(:,2);

term1 = (4-2.1*x2.^2+(x2.^4)/3) .* x2.^2;
term2 = x1.*x2;
term3 = (-4+4*x1.^2) .* x1.^2;

y = term1 + term2 + term3;

end