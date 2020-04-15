//g++ 16.o BigUnsigned.o BigInteger.o BigIntegerAlgorithms.o BigUnsignedInABase.o BigIntegerUtils.o -o 16
#include <iostream>
#include <fstream>
#include <string>
#include "bigint-2010.04.30/BigIntegerLibrary.hh"
using namespace std;

BigInteger f (BigInteger n){
	BigInteger s = 0;
	while(n>=10) {
		s += n%10;
		n /= 10;
	}
	s += n;
	return s;
}

int main()
{
	BigInteger n = 2;
	BigInteger two = 2;
	for(BigInteger i=1; i<=1000; i++){
		cout << i << " " << f(n) << endl;
		n.multiply(n,two);
	}
    return 0;
}
