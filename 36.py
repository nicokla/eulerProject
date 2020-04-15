import math

def prime(n):
    i=3;
    if (n%2==0 or n<2):
        return 0;
    else:
        while (n%i != 0 and i*i <= n):
            i+=2;
        return (n%i != 0);

def tourne(n):
    c=int(math.log10(n));
    l=[n];
    for i in range(c):
        a=n%10;
        b=int(n/10);
        n=a*pow(10,c)+b
        l.append(n);
    return l;

def prime_super(n):
    for k in tourne(n):
        if not prime(k):
            return False
    return True;        

s=0;    
for i in range(1,1000000):
    if i%10000==0:
        print(i)
    if prime_super(i):
        s+=1;

print(s+2)
    
