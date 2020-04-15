#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int min(int a, int b) {
	if (a < b) return a;
	else return b;
}

int main (){
int i=0;
int j=0;
int res;

int taille = 80;
int m[taille][taille];
int s[taille][taille];

FILE * pfile;
pfile=fopen("matrix.txt","r");

//--------------

  for(i=0; i<taille; i++){
    for(j=0; j<taille; j++){
        fscanf(pfile,"%d,",&(m[i][j]));
    }
  }
	fclose(pfile);
	
	//affichage 1
  // for(i=0; i<taille; i++){
	// printf("\n");
    // for(j=0; j<taille; j++){
		// printf("(%d,%d)%d ",i,j,m[i][j]);
    // }
  // }
  // printf("\n");
  
	s[0][0] = m[0][0];
    for (i=1;i<taille;i++){
		s[i][0] = m[i][0] + s[i-1][0] ;
		s[0][i] = m[0][i] + s[0][i-1] ;
	}
	j=2;
	while(j<=taille ){
		for(i = 1; i<j; i++){
			s[i][j-i] = m[i][j-i] + min (s[i][j-i-1], s[i-1][j-i]);
		}
		j++;
	}//ici j=taille+1
	
	while(j <= 2*(taille-1)){
		for(i = j-taille+1; i<=taille-1; i++){
			s[i][j-i] = m[i][j-i] + min (s[i][j-i-1], s[i-1][j-i]);
		}
		j++;
	}
	
	//Affichage 2
	//scanf("%d",&res);
	// for(i=0; i<taille; i++){
		// printf("\n");
		// for(j=0; j<taille; j++){
			// printf("%d ",s[i][j]);
		// }
	// }

printf("\n%d",s[taille-1][taille-1]);
}
