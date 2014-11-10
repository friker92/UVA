#include <iostream>
#define ABS(x)    ((x) > 0 ? (x) : -(x))
using namespace std;

int main(){
	int n,num;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num;
		num = (num * 63 + 7492) * 5 - 498;
		num = ABS(num);
		cout << (num/10)%10 << endl;
	}
	return 0;
}
