#include <iostream>
using namespace std;

int main(){
	int t,x,y,z,A;
	cin >> t;
	while(t--){
		cin>>x>>y>>z;
		A=z*(x+(x-y))/(x+y);
		if(A<=0) cout << "0" << endl;
		else cout << A << endl;
	}
	return 0;
}