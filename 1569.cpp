#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int N,M,k;
	while(cin >>k>> N >> M){
		for(int j=k;j<N;j++){
			cout << j << endl;
		for(int i = 0; i<M;i++){
			cout << j*i<< " ";

		}
		cout << endl;
		}
	}
	return 0;
}