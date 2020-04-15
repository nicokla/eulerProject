
s=0;

def f(x):
    a=x;
    b=0;
    k=2;
    while a<1e9:
        b=a;
        a=int(str(a)+str(k*x));
        k += 1;
    return b;

def est_ok(k):
    a=list(str(k));
    a.sort();
    return a == ['1','2','3','4','5','6','7','8','9']

for i in range(1,10000):
    z=f(i)
    if est_ok(z):
        if z>s:
            s=z;

print(s);
    
