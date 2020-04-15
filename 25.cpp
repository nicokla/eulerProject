#include <iostream>
#include <cmath>
using namespace std;

int main(){
double phi = (sqrt(5)+1)/2;
double n=1;
double x = 0;
double k = (log10(5)/2);
double r = log10(phi);
while (x < 1000){
	n++;
	x = fabs ( n*r - k ) + 1;
}
cout<< n <<endl;
return 0;
}