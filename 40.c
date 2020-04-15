#include <stdio.h>
#include <stdlib.h>

int main(){
	int s=0, k=1, n=1, m=1, r=1, l=0;
	
	while(s <= 1e6){
		k=n;
		m=0;
		while(k != 0){
			k/=10;
			m++;
			if(((s+m) % r) == 0){
				printf("%d\n",n);
				printf("%d\n\n",s);
				r*=10;
				l++;
			}
		}
		s += m;
		n++;
	}
	
	return 0;
}