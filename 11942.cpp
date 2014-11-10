#include <iostream>
using namespace std;

int main(){
	int a,b,N;cin >> N;
	bool m=true, bien=true;
	cout << "Lumberjacks:" << endl;
	for(int i = 0; i < N; i++){
		bien= true;
		m= true;
		cin >> a>> b;
		if (a>b) m=false;
		for(int j = 0; j<8; j++){
			a=b;
			cin>>b;
			if(m) {
				if(a>b){
					bien=false;
					j=10;
				}
			}else{
				if(a<b){
					bien=false;
					j=10;
				}
			}
		}
		if(bien) cout << "Ordered" << endl;
		else{
			cout << "Unordered" << endl;
			cin.ignore(100, '\n');
		}
	}
	return 0;
}