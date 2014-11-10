#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
	deque<string> dq;
	string texto="",aux="";
	bool end = true;
	while(cin >> texto){
		aux ="";
		end = true;
		for(int i=0; i<texto.length();i++){
			if(texto[i]=='[') {
				if(!end) dq.push_back(aux);
				else dq.push_front(aux);
				aux="";
				end=true;
			}else if(texto[i]==']'){
				if(!end) dq.push_back(aux);
				else dq.push_front(aux);
				aux="";
				end=false;
			}else{
				aux+=texto[i];
			}
		}
		if(!end) dq.push_back(aux);
		else dq.push_front(aux);
		while(!dq.empty()){
			cout << dq.front();
			dq.pop_front();
		}
		cout << endl;
	}
	return 0;
}