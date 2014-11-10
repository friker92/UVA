#include <iostream>
using namespace std;


int main(){
	int n,a,b,sum;
	cin >> n;

	for(int kk=0; kk<n;kk++){
		cin >> a >> b;
		sum = 0;
		if (a%2==0) a+=1;
		if (b%2==0) b-=1;
			while(a != b){
				sum += a;
				a+=2;
			}
			sum+=a;
		cout << "Case " << kk+1 << ": " << sum << endl;
	}
	return 0;
}