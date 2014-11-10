#include <iostream>
using namespace std;

int main(){
	int t,n,a,b,up,down,cont=1;
	cin >> t;
	while(t--){
		up=0;down=0;
		cin >> n;
		n-=1;
		cin>>b;
		while(n--){
			a=b;
			cin >> b;
			if(a>b)down++;
			else if(b>a) up++;
		}
		cout << "Case " << cont << ": " << up << ' ' << down << endl;
		cont++;
	}
	return 0;
}