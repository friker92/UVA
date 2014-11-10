#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,puntos[4];
	cin >> n;
	while(n--){
		for(int i=0;i<4;i++) cin >> puntos[i];
		int elem = sizeof(puntos) / sizeof(puntos[0]);
		sort(puntos,puntos+elem);
		if(puntos[0]==puntos[1] && puntos[2]==puntos[3]){
			if(puntos[1]==puntos[2])
				cout << "square\n";
			else
				cout << "rectangle\n";

		}
		else if((puntos[0]+puntos[1]+puntos[2])>puntos[3])
			cout << "quadrangle\n";
		else
			cout << "banana\n";
	}
	return 0;
}