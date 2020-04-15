import math;

def intToList(a):
    l=[];
    while(a!=0):
        l.append(a%10);
        a = int(a/10);
    return l;

def pandigital(a):
    A =intToList(a);
    #A.extend(B);
    A.sort();
    return (A==list(range(1,10)))

def verifier:
