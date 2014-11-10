#include <iostream>
using namespace std;

int main(){
	unsigned long long int n,k,sum,aux;
	while(cin >> n >> k){
		sum=0;
		aux=0;
		while(n!=0){
			n+=aux;
			aux=n%k;
			sum+=n-aux;
			n=n/k;
		}
		sum+=aux;
		cout << sum << endl;
	}
	return 0;
}