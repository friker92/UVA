#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;cin >> N;
	int max,caso=1;
	int valor[10];
	string url[10];
	while(N--){
		max=-1;
		for(int i = 0; i< 10;i++){
			cin>>url[i]>>valor[i];
			if(valor[i]>max) max=valor[i];
		}
		cout << "Case #" << caso << ":" << endl;
		for(int i=0;i<10; i++){
			if(valor[i]==max) cout << url[i] << endl;
		}

		caso++;
	}
	return 0;
}