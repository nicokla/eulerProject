import string

def valeur(c):
    if c == "\"" :
        return 0
    else:
        return ord(c)-96

def valeurString (s):
    somme = 0
    for c in s.lower() :
        somme += valeur(c)
    return somme

f = open('names.txt','r')
string = f.read()
words = string.split(',')
l = sorted(words)

i = 1
s=0
for m in l :
    s+=i*valeurString(m)
    i+=1
print (s)
