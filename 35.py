import math

def f(x):
    s=0;
    for i in str(x):
        s+=math.factorial(int(i))
    return s;

s=0;    
for i in range(3,9999999):
    if (i%100000 == 0):
        print (i)
    if (i == f(i)):
        s+=i;
        print(i)

print(s)
    
