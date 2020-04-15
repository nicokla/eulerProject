#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	int i=0, j=0;
	unsigned long long m[16][16] = {0};
	m[0][0] = 1;
	unsigned long long s=0;
	
	for (i=1; i<= 15; i++){
		m[i][0] = 1;
		for (j=1; j<= i; j++){
			m[i][j] = i*m[i-1][j-1] + m[i-1][j];
		}
	}
	for (i=0;i<=7;i++){
		s += m[15][i];
	}
	s = 20922789888000 / s;
	printf("\n%d",s);
}
