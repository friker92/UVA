#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>
using namespace std;

int papas[10000];

int papa(int p){
	if(papas[p]==p)return p;
	return papas[p]=papa(papas[p]);
}


int main () {
	int N,nC,p,q,OK=0,NO=0;
	char c;
	bool nopri=false;
	cin >> N;
	while(N--){
		OK=NO=0;
		memset(papas,0,sizeof(int)*10000);
		cin >> nC;
		for (int i = 0; i < nC+3; i++) papas[i]=i;
		getchar();
		while((c=getchar()) && isalpha(c)){
			cin >> p >> q;
			getchar();
			p=papa(p);
			q=papa(q);
			if(c=='c'){
				papas[p]=q;
			}else{
				if(p==q) OK++;
				else NO++;
			}
		}
		if(nopri) cout << endl;
		nopri=true;
		cout << OK << ',' << NO << endl;

	}
	
	return 0;
}