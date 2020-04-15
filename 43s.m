l=perms(0:9);
a=[100 10 1];
c=zeros(7);
s=0;
x=0;
d=10.^[9:(-1):0];
for b=1:size(l,1)
	for t=2:8
		c(t-1)=a*l(b,t:t+2)';
	end
	if(mod(c(7),17)==0)
	if(mod(c(6),13)==0)
	if(mod(c(5),11)==0)
	if(mod(c(4),7)==0)
	if(mod(c(3),5)==0)
	if(mod(c(2),3)==0)
	if(mod(c(1),2)==0)
		x=d*l(b,:)';
		printf("%d\n",x);
		s=s+x;
	end end end end end end end
end
