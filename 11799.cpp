#include <iostream>
using namespace std;
int main(){
	int t,c,d;
	int b=0;
	cin >> t;
	for (int kk=0;kk<t;kk++){
		b=0;
		cin >> c;
		for(int i = 0; i< c; i++){
			cin >> d;
			if(d>b) b=d;
		}
		cout << "Case " << kk+1 << ": " << b << endl;
	}
	return 0;
}