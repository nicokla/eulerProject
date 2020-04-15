#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct vect {int x; int y;};

int det(struct vect v1, struct vect v2){
	return (v1.x*v2.y - v1.y*v2.x);
}

int est_ok(struct vect v1, struct vect v2, struct vect v3 ){
int d1 = det(v1,v2);
int d2 = det(v2,v3);
int d3 = det(v3,v1);

if(d1>=0) return (d2>=0 && d3>=0);
else return (d2<=0 && d3<=0);
}

int main () {
struct vect v1,v2,v3;
int i; int s=0;
FILE * pFile = fopen("doc2.txt","r");

for(i=1; i<=1000; i++){
	fscanf(pFile,"%d,%d,%d,%d,%d,%d",&(v1.x),&(v1.y),&(v2.x),&(v2.y),&(v3.x),&(v3.y));
	printf("%d,%d,%d,%d,%d,%d\n",(v1.x),(v1.y),(v2.x),(v2.y),(v3.x),(v3.y));
	if(est_ok(v1,v2,v3))s++;
}

printf("%d",s);
fclose(pFile);
return 0;
}