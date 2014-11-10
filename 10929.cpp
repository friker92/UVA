#include <iostream>
#include <string>
using namespace std;

int main(){
	string num;
	int sum=0;
	cin >> num;
	while(num[0]!='0'||num.length()>1){
		sum=0;
		for(int i=0;i<num.length();i++){
			if(i%2==0) sum-=num[i]-'0';
			else sum+=num[i]-'0';
		}
		if(sum%11==0) cout << num << " is a multiple of 11." << endl;
		else cout << num << " is not a multiple of 11." << endl;
		cin >> num;
	}
	return 0;
}