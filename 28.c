#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main(){
int i=0;
int j=0;

int m[100][100]={0};
int s[100][100]={0};

FILE * pfile;
pfile=fopen("doc.txt","r");

  for(i=0; i<100; i++){
    for(j=0; j<=i; j++){
        fscanf(pfile,"%d",&(m[i][j]));
    }
  }
  fclose(pfile);
  
  //for(i=0; i<15; i++){ for(j=0; j<15; j++){ printf("%d ",m[i][j]); } printf("\n"); }
  for(i=0;i<=99;i++){s[99][i]=m[99][i];}
  
  for(i=98;i>=0; i--){
	for(j=0; j<=i; j++){
		s[i][j] = m[i][j] + max(s[i+1][j], s[i+1][j+1] );
	}
  }
  
  printf("%d", s[0][0]);
return 0;	
}