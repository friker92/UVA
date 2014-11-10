/**

@author: Jesús Doménech
@problem: 3n+1
@date: 02/08/2012

**/

#include <iostream>
using namespace std;

long long int longitud(long long int numero){
	long long int longitud=1;	
	while (numero!=1){
		if (numero % 2==1) numero = numero * 3 + 1;
		   else numero = numero / 2;
		longitud++;
	}
	return longitud;
}


int main(){
	long long int i=0,j =0;
	long long int max=0;
	bool cambiar=false;
	while (cin >> i){
		cin >> j;
		max=1;
		cambiar = false;
		if(i>j){
			long long int aux = i;
			i=j;
			j=aux;
			cambiar = true;
		}
		for (long long int k = i; k <=j;k++){
			long long int longi = longitud(k);
			if (longi > max) max = longi;
		}
		if (!cambiar) cout << i << " " << j << " " << max << endl;
		else cout << j << " " << i << " " << max << endl;
	}
	return 0;
}