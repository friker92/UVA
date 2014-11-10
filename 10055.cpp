#include <iostream>
using namespace std;

int main(){
long long int n,m;
while( cin >> n>>m){
	if(m>n)
		cout << m-n<<endl;
	else
		cout << n-m<<endl;
}

return 0;
}