l=primes(1e6);
m=6;
p=41;
for i=1:(length(l)-1)
    j=min(i+m-1,length(l));
    a=sum(l(i:j));
    while (j<=length(l) && a<1e6)
        k=j-i+1;
        a=sum(l(i:j));
        if(isprime(a))
            m=k;
            p=a;
        end;
        j=j+1;
     end
end