fid = fopen('words.txt');
tline = fgetl(fid);
C = strsplit(tline,",");

for a=1:length(C)
	C{a}=C{a}(2:end-1);
end


function [s]= somme(a)
	s=0;
	for i=1:length(a)
		s=s+a(i)-64;
	end
end

r=1:100;
s=r.*(r+1)/2;
b=0;

mot='';
for m=1:length(C),
	mot=C{m};
	if any(somme(mot)==s)
		b=b+1;
	end
end