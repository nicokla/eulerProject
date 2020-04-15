def sumDiv(n):
    s = 0
    for i in range(1, int(n/2)+1):
        if n%i == 0:
            s += i
    return s

def isAmicable (n):
    a = sumDiv(n)
    if (a != n and sumDiv(a) == n) :
        return a+n
    else :
        return 0

s=0
for i in range(1, 10001):
    s += isAmicable(i)
print(int(s/2))
