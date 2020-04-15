//g++ 13.o BigUnsigned.o BigInteger.o BigIntegerAlgorithms.o BigUnsignedInABase.o BigIntegerUtils.o -o 13
#include <iostream>
#include <fstream>
#include <string>
#include "bigint-2010.04.30/BigIntegerLibrary.hh"
using namespace std;

int main()
{
	BigInteger n = 0;
	BigInteger s = 0;
	string ligne;
	ifstream fichier("C:/Users/Nicolas K/Desktop/projet_euler/texte");
	for(int i = 0; i<100; i++){
		getline(fichier, ligne);
		n=stringToBigInteger(ligne);
		s += n;
	}
	
	cout << n << log(n) << endl << s << log(n) << endl;
	
    return 0;
}