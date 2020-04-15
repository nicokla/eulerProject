function [y] = hexagonal(x)
y=x*(2*x-1);
end;

function [y]= estPent(x)
y=0==mod((sqrt(24*x+1)+1)/6,1);
end;

a=144;
while(!estPent(hexagonal(a)))
	a=a+1;
end;

format long;
hexagonal (a)