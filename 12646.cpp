//12646

#include <iostream>
using namespace std;

int main(){
bool a,b,c;
while (cin >> a >> b >> c){
	if((a&&b&&c)||(!a&&!b&&!c))
		cout << "*" << endl;
	else if ((!a&&b&&c)||(a&&!b&&!c))
		cout << "A" << endl;
	else if ((a&&!b&&c)||(!a&&b&&!c))
		cout << "B" << endl;
	else if ((a&&b&&!c)||(!a&&!b&&c))
		cout << "C" << endl;
}

return 0;
}