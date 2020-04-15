#include <iostream>
using namespace std;

int nb_diviseurs ( unsigned long long n ){
	int k = 2;
	int nb_div = 1;
	int r = 0;
	while (n > 1){
		while (n%k == 0) {
			r++;
			n /= k;
		}
		if (r!=0) {nb_div *= (r+1); r=0;}
		k++;
	}
	return (nb_div);
}

int main()
{
	unsigned long long n;
	unsigned long long k = 1;
	int m = 0;
	while(m < 500){
		n = k*(k+1)/2;
		m = nb_diviseurs(n);
		
		k++;
	}
	
	cout << k << " " << n <<  " " << m << endl;
	
    return 0;
}