import math;

def f(a):
    l=[];
    while(a!=0):
        l.append(a%10);
        a = int(a/10);
    return l;

def verifier(a,b):
    c = int(a/b);
    A = f(a);
    B=f(b);
    C=f(c);
    B.extend(C)
    A.extend(B);
    A.sort();
    return (A==list(range(1,10)))
   

s=set();

for a in range(1000,9999):
    for b in range(2,int(math.sqrt(a))):
        if (a%b == 0):
            if (verifier(a,b)):
                print(a,b,int(a/b));
                s.add(a);

print (sum(s));
