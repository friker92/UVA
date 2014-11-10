#include <iostream>
using namespace std;
int main(){
	int n;
	int caso=1,cont,num;
	while(cin >> n && n>0){
		if(n<2) cont= 0;
		else if(n<3) cont=1;
		else if(n<5) cont=2;
		else if(n<9) cont=3;
		else if(n<17) cont=4;
		else if(n<33) cont=5;
		else if(n<65) cont=6;
		else if(n<129) cont=7;
		else if(n<257) cont=8;
		else if(n<513) cont=9;
		else if(n<1025) cont=10;
		else if(n<2049) cont=11;
		else if(n<4097) cont=12;
		else if(n<8193) cont=13;
		else cont=14;
		cout << "Case " << caso << ": "<< cont << endl;
		caso++;
	}
	return 0;
}