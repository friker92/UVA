#include <iostream>
using namespace std;

int main(){
	long long int sum,res,x,y,n;
	cin >> n;
	while(n--){
		cin>> sum>>res;
		y=(sum-res)/2;
		x=sum-y;
		if(y<0||x<0) cout << "impossible" << endl;
		else cout << x << ' ' << y << endl;
	}
	return 0;
}