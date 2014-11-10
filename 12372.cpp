#include <iostream>
using namespace std;

int main(){
	int a,s,d,f,cont=1;
	cin >> a;
	while(a--){
		cin >> s >> d >> f;
		
		if(s>20||d>20||f>20) cout << "Case " << cont++ << ": bad" << endl;
		else cout << "Case " << cont++ << ": good" << endl;
	}
	return 0;
}