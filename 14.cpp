#include <iostream>
using namespace std;

unsigned long long g (unsigned long long n) {
	if (n%2 == 0) return n/2;
	else return 3*n+1;
}

unsigned long long f (unsigned long long n) {
	unsigned long long etape = 1;
	while (n != 1){
		n = g(n);
		etape++;
	}
	return etape;
}

int main()
{
	unsigned long long n = 3;
	unsigned long long ff = 0;
	unsigned long long max = 0;
	unsigned long long best = 3;
	
	for(n=3; n<=1000000; n++){
		ff=f(n);
		if (ff > max){
			best = n;
			max = ff;
		}
	}
	cout << endl << best << " "<< max <<endl;
    return 0;
}