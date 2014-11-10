#include <iostream>
#include <string>
using namespace std;

int main(){
  string asd;
  while(cin >> asd){
    for(int i = 0; i<asd.size();i++){
      if(asd[i]=='B'||asd[i]=='F'||asd[i]=='P'||asd[i]=='V')
	cout << 1;
      if(asd[i]=='C'||asd[i]=='G'||asd[i]=='J'||asd[i]=='K'||asd[i]=='Q'||asd[i]=='S'||asd[i]=='X'||asd[i]=='Z')
	cout << 2;
      if(asd[i]=='D'||asd[i]=='T')
	cout << 3;
      if(asd[i]=='L')
	cout << 4;
      if(asd[i]=='M'||asd[i]=='N')
	cout << 5;
      if(asd[i]=='R')
	cout << 6;
    }
    cout << endl;
  }
  return 0;
}
