#include <iostream>
using namespace std;


int main(){

	int n,aux;
cin >> n;
	while(n!=0){

	if(n>100) aux= n-10;
	else aux=91;

	cout << "f91(" << n << ") = " << aux << endl;
cin >> n;
	}
	return 0;
}