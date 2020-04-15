//g++ 17.o BigUnsigned.o BigInteger.o BigIntegerAlgorithms.o BigUnsignedInABase.o BigIntegerUtils.o -o 17
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
	BigInteger n = 1;
	for(BigInteger k=1; k<=100; k++){
		n *= k;
	}
	cout << n << " " << f(n) << endl;
    return 0;
}
