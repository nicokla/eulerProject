a=600851475143
b=3
maxi = a ** 0.5
while(b <= maxi and a>1):
    if(a%b == 0):
        a /= b
    else:
        b+=2
print(b)
