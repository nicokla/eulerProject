i=1;
somme=0;
while(i<1000):
    if (i%3 == 0 or i%5 == 0):
        somme+=i
    i+=1
print(somme)