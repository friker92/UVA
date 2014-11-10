#include <iostream>
using namespace std;

int sum(int i , int n, int inp[]){
	int suma=0;
	while(i<n&&inp[i]>0){suma+=inp[i];i++;}
	return suma;
}

int best (int i, int j,int n, int inp[]){
	if (i>j) return 0;
	int aux1 = sum(i,n,inp) - best(i+1,j,n,inp);
	int aux2 = sum(j,n,inp) - best(i,j-1,n,inp);
	if(aux1>aux2) return aux1;
	else return aux2;
}
//best(i,j) = max(value(i) - best(i + 1,j),value(j) - best(i,j - 1)
int main(){
	int n;
	cin >> n;
	int inp[101];
	while(n!=0){
        for (int i = 0; i < n; i++) {
            cin >> inp[i];
        }
		cout << best(0,n,n,inp) << endl;
		cin >> n;
	}
	return 0;
}