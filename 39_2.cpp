#include <iostream>
#include <list>
using namespace std;

int main(){
	unsigned int a=1,b=1, k=1, a0, max;
	list<int> * tab = new list<int>[1001];
	
	for(a=1;a<=40;a++){
		for(b=1; b<a; b++){
			for(k=1; k<=500/a/(b+a); k++){
				tab[2*a*k*(b+a)].push_back(k*(a*a+b*b));
			}
		}
	}
	
	
	a0=1; max=0;
	for(a=1;a<=1000; a++){
		tab[a].sort();
		tab[a].unique();
		if(tab[a].size()>max){
			max = tab[a].size();
			a0=a;
		}
	}
	
	cout << a0 << endl;
	/*while(!tab[120].empty()){
		cout << tab[120].back() << endl;
		tab[120].pop_back();
	}
	*/
	return 0;
}