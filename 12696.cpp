#include <iostream>
#define eps 1e-10
using namespace std;

int main(){
	int n,m=0;
	double a,b,c,d;
	cin >> n;
	for (int i = 0 ; i < n;i++){
		cin >> a >> b >> c >> d;
		if(((a-56<eps && b-45<eps && c-25<eps) || a+b+c-125<eps)&& d-7<eps ){
			cout << 1 << endl;
			m++;
		}else
			cout << 0 << endl;
	}
	cout << m << endl;
	return 0;
}