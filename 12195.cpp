#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
//	stack<int> st;
	string str;
	int tam=0,tiempo,cont;
	getline(cin,str);
	while(str!="*"){
		cont=0;
		tam=str.size();
		tiempo=0;
		for(int i = 0; i < tam;i++){

			if(str[i]== 'W'){
				tiempo += 64;
			}else if(str[i]== 'H'){
				tiempo += 32;
			}else if(str[i]== 'Q'){
				tiempo += 16;
			}else if(str[i]== 'E'){
				tiempo += 8;
			}else if(str[i]== 'S'){
				tiempo += 4;
			}else if(str[i]== 'T'){
				tiempo += 2;
			}else if(str[i]== 'X'){
				tiempo += 1;
			}else if(str[i]== '/'){
				if (tiempo>0 && tiempo == 64) {
					cont++;
				}
				tiempo=0;
			}
		}
		cout << cont << endl;
		getline(cin,str);
	}

	return 0;
}