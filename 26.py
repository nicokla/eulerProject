
# we suppose n is odd
def length(n):
    a = 1
    b = 0

    if(n%5 != 0):
        a *= 10
        a = a % n
        b += 1
        
        while(a != 1):
            a *= 10
            a = a % n
            b += 1
            
    return b
    

m = 1;
r=0;
for i in range(7,1000,2):
    print(i)
    r = length(i)
    if r > m:
        m=r

print (m)
