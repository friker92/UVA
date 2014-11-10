#include <iostream>
using namespace std;

int main(){
	int n,m,aux,a;
	cin>>n>>m;
	while (n!=-1 && m !=-1){
		if(n>m){
			aux=n;
			n=m;
			m=aux;
		}
		a=m-n;
		aux = 100-a;
		if(aux > a)cout << a << endl;
		else cout <<aux<< endl;

		cin>>n>>m;
	}
	return 0;
}