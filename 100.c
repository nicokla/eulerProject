#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
double x=1.0;
double y=1.0;
double n=1.0;
	while (x < pow(10.0,12)){
		x=0.5 + (sqrt(2.0)-1.0)/4.*pow((3.+2.*sqrt(2.)),n);
		y=0.5 + (2.0-sqrt(2.0))/8.*pow((3.+2.*sqrt(2.)),n);
		printf("x : %f\ny : %f\n\n", x,y);
		n++;
	}
	printf("x : %f\ny : %f\n\n", x,y);
	return 0;
}