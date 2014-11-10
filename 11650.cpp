#include <iostream>
using namespace std;

int main(){
	int T, h,m;
	char c;
	cin>>T;
	while(T--){
		cin >> h >> c >> m;
		if(m==0) h=12-h;
		else h=11-h;
		if(h<=0)h+=12;
		if(m!=0) m=60-m;
		if(h<10) cout << "0";
		cout << h << ":";
		if(m<10) cout << "0";
		cout << m << endl;

	}
	return 0;
}