#include <stdio.h>
#include <stdlib.h>

struct vect {
	double a;
	double b;
};

// x est symetrise par rapport a la droite de y
void symetrise (struct vect * x, struct vect * y){
	double u, v, s, t;
	s = (x->a * y->a) + (x->b * y->b);
	t = (y->a * y->a) + (y->b * y->b);
	u = s / t * y->a;
	v = s / t * y->b; // u et v sont ici la projection de x sur la droite de y.
	u = x->a - u;
	v = x->b - v; // maintenant u et v sont la composante de x perpendiculaire à y.
	x->a -= 2*u;
	x->b -= 2*v;
}

// calcul de m1 en supposant m0 sur l'ellipse
void calcul_m1(struct vect * m0, struct vect * v0){
	double k;
	k = -(8. * m0->a * v0->a + 2. * m0->b * v0->b) / (4. * v0->a*v0->a + v0->b*v0->b);
	m0->a = m0->a + k * v0->a;
	m0->b = m0->b + k * v0->b;
}

int condition (struct vect * x){
	return (x->a >= -0.01 && x->a <= 0.01 && x->b > 0.0);
}

int main(){
	struct vect m0, v0, r;
	int i=1, j=1;
	
	m0.a = 1.4;
	m0.b = -9.6;
	
	v0.a = -16.4590673575;
	v0.b = 10.9155440415;

	while (!condition(&m0)){
		printf("%d : (%f, %f) (%f, %f)\n", i, m0.a, m0.b, v0.a, v0.b);
		calcul_m1(&m0, &v0);
		r.a = - m0.b / 2.;
		r.b = 2 * m0.a;
		symetrise(&v0, &r);
		i++;
		// system("PAUSE");
		// scanf(" %d",&j);
		// if (j==0) return 0;
	}

	printf("%d",i-1);
	
	return 0;
}