#include <iostream>
#include <string>
using namespace std;

int main(){
	int n =1;
	string str;
	while(cin >> str && str.compare("*")!=0){
		if(str.compare("Hajj")==0)
			cout << "Case " << n << ": Hajj-e-Akbar" << endl;
		else
			cout << "Case " << n << ": Hajj-e-Asghar" << endl;
		n++;
	}
	return 0;
}