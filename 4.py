palindrome = lambda s: s == s[::-1]

a=100
b=100
tmpa=0
tmpb=0
tmpres=0
while(a<1000):
    b=a
    while(b<1000):
        if(palindrome(str(a*b)) and (a*b) > tmpres):
            tmpa=a
            tmpb=b
            tmpres=a*b
        b+=1
    a+=1
print(tmpres)