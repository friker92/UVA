#include <iostream>
#include <string>
using namespace std;

int main(){
	string str="",nuevo="";
	bool pos = true;
	while(getline(cin,str)){
		nuevo="";
			for(int i=0; i<str.length(); i++){
				if(str[i]=='"'){
					if(pos){
						nuevo+="``";
						pos=!pos;
					}else{
						nuevo+="''";
						pos=!pos;
					}
				}else{
					nuevo+=str[i];
				}
			}
		cout << nuevo << endl;
	}
	return 0;
}