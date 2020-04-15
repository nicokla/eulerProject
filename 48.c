#include <string.h>
#include <stdlib.h>
#include <stdio.h>
unsigned long long mod = 10000000000;

unsigned long long puis_spe(unsigned long long k){
	unsigned long long  i=1; 
	unsigned long long res = 1;
	for (i=1; i<=k; i++){
		res = (res*k)%mod;
	}
	return res;
}

int main (){
	unsigned long long i=1, j=1;
	unsigned long long s = 0;

	for (i=1; i<=1000; i++){
		if (j==1){
			s+=puis_spe(i);
			printf("%llu %llu %llu\n",i,puis_spe(i),s);
			//scanf("%llu", &j);
		}
		else return 0;
	}
	printf("%llu", s);
	return 0;
}
