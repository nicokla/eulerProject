#include <stdio.h>
#include <stdlib.h>

int prime(int n){
	int i=3;
	if (n%2==0) 
		return 0;
	while(n%i != 0 && i*i<=n){
		i+=2;
	}
	return (n%i != 0);
}

int pandigital(int n){
	int r, i=0; 
	int tab[9]={0};
	while(n!=0){
		r=(n%10)-1;
		if (r==(-1))
			return 0;
		else if(tab[r]==1)
			return 0;
		else{
			tab[r]=1;
			i++;
			n /= 10;
		}
	}
	r=8;
	while(tab[r]==0){r--;}
	return ((r+1)==i);
}

int main(){
	int i=0;
	
	for(i=1e7;i>11;i--){
		if (pandigital(i)){
			if(prime(i)){
				printf("%d\n",i);
				return 0;
			}
		}
	}

	return 0;
}