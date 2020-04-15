def ok(a,b):
    a1=int(a/10);a2=a%10;b1=int(b/10);b2=b%10;
    if(a1 == b2):
        return a2/b1 == a/b
    elif(a2 == b1):
        return a1/b2 == a/b
    else:
        return False;

        
for i in range(11, 100):
        for j in  range(i+1, 100):
            if(i%10 != 0 and j%10 !=0):
                if ok(i,j):
                    print(i,j)
    
