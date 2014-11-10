#include <iostream>
using namespace std;

int main(){
	int T,a,b,c,aux,cont=1;
	cin >> T;
	while(T--){
		cin>> a>>b>>c;
		if(a>b){aux=b;b=a;a=aux;}
		if(c>b) aux=b;
		else if(c<a) aux=a;
		else aux=c;
		cout << "Case "<< cont <<": " << aux << endl;
		cont++;
	}
	return 0;
}