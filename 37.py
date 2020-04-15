import math

def prime(n):
    if(n==2 or n==3):
        return True;
    i=3;
    if (n%2==0 or n<2):
        return 0;
    else:
        while (n%i != 0 and i*i <= n):
            i+=2;
        return (n%i != 0);

def liste(n):
    l=[];
    a=n;
    while a!=0:
        l.append(a);
        a=int(a/10);
    i=1;
    a=n%10;
    while a!=n:
        l.append(a);
        i+=1;
        a = n % pow(10,i);
    return l;

def prime_super(n):
    for k in liste(n):
        if not prime(k):
            return False
    return True;        

s=0;    
for i in range(20,1000000):
    if i%10000==0:
        print(i)
    if prime_super(i):
        print(i);

    
