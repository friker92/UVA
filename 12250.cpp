#include <iostream>
#include <string>
using namespace std;

int main(){
	string ss;
	int n=1;
	cin >> ss;
	while(ss!="#"){
		cout << "Case "<<n<<": ";
		if(ss=="HELLO") cout << "ENGLISH";
		else if (ss=="HALLO") cout << "GERMAN";
		else if(ss=="HOLA")cout << "SPANISH";
		else if(ss=="BONJOUR")cout << "FRENCH";
		else if(ss=="CIAO")cout << "ITALIAN";
		else if(ss=="ZDRAVSTVUJTE")cout << "RUSSIAN";
		else cout << "UNKNOWN";
		cout << endl;
		cin >> ss;
		n++;
	}
	return 0;
}