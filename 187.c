#pb 187

l = [2,3]
i=5
j=0
while i<1000000:
    j=0;
    m=True;
    while l[j]*l[j] <= i and m:
        if i%l[j] != 0:
            j+=1;
        else:
            m=False;
    if i%l[j] != 0:
        l.append(i);
    i+=2;
print(len(l));

n=0
for i in l:
    m=0
    while m<len(l) and l[m]<=i:
        if l[m]*i < 100000000:
            n+=1;
    m+=1;
        
print n
