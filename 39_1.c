#include <stdlib.h>
#include <stdio.h>

int main(){
	int tab[501]={0};
	int a, c, k, max, a0;
	a0=1;
	max=0;
	
	for (a=2;a<=25;a++){
		for(c=a+1; c<=2*a-1; c++){
			for(k=1; k<=500/a/c; k++){
				tab[a*c*k] += 1;
				//if (a*c*k == 60)
					//printf("%d %d %d %d %d %d\n",a,c,k,k*(a*a+(c-a)*(c-a)),k*(a*a-(c-a)*(c-a)), k*2*a*(c-a));
			}
		}
	}
	
	for(a=1;a<=500; a++){
		if(tab[a]>max){
			max = tab[a];
			a0=a;
		}
	}
	
	printf("%d", 2*a0);
	return 0;
}