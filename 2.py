
a=1
b=2
tmp=0
somme = 0
while(b <= 4e6):
    if(b%2 == 0):
        somme += b
    tmp = b
    b = a+b
    a = tmp
print(somme)