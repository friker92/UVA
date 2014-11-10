#include <iostream>
#include <string>
using namespace std;

int main(){
	int n=1,N,M,a[12];
	cin >> N;
	while(N--){
		cin >> M;
		for(int i = 0;i<M;i++) cin >> a[i];
		cout << "Case "<<n<<": " << a[M/2]<< endl;
		n++;
	}
	return 0;
}