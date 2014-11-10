#include <iostream>
#include <cstring>
#include <list>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n!=-1){
		char sol[10000],prue[10000];
		cin >> sol >> prue;
		int rr = strlen(sol);
		list <char> lista (&sol[0],&sol[rr]);
		int fallo=0;
		rr= strlen(prue);
		for (int i = 0; i < rr; i++){
			if(!lista.empty()){
				int size = lista.size();
				lista.remove(prue[i]);
				if (size == lista.size()) fallo++;
			}
		}
		cout << "Round " << n << endl;
		if(lista.empty() && fallo < 7) cout << "You win." << endl;
		else if(!lista.empty() && fallo < 7) cout << "You chickened out." << endl;
		else cout << "You lose." << endl;
		cin >> n;
	}

	return 0;
}