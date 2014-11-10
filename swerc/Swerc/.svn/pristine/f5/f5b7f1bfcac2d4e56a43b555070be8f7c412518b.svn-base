/**

@author: Jesus Domenech
@problem: Buscaminas
@date: 03/08/2012

**/
#include <iostream>
using namespace std;

int main(){
	
	int n,m,x=1;
	char a;
	cin >> n;
	cin >> m;
	while(n!=0 && m!=0){
		int minas[100][100];
		for (int i = 0; i < n ;i++){
			for (int j = 0; j < m; j++){
				minas[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m ;j++){
				cin >> a;
				if (a=='*') {
					minas[i][j]=-100;
					if (i != 0){
						if (j!=0)minas[i-1][j-1] = minas[i-1][j-1]+1;
						minas[i-1][j] = minas[i-1][j]+1;
						if(j!=m-1)minas[i-1][j+1] = minas[i-1][j+1]+1;
					}
					if(j!=0)minas[i][j-1] = minas[i][j-1]+1;
					if(j!=m-1)minas[i][j+1] = minas[i][j+1]+1;
					if(i!=n-1){
						if (j!=0)minas[i+1][j-1] = minas[i+1][j-1]+1;
						minas[i+1][j] = minas[i+1][j]+1;
						if (j!=m-1)minas[i+1][j+1] = minas[i+1][j+1]+1;
					}
				}
			}
		}
		//sigo una vez rellenado
		//if(x!=1)cout << endl;
		cout << "Field #" << x << ":" << endl;
		x++;
		for (int i = 0; i < n ;i++){//m
			for (int j = 0; j < m; j++){//n
				if (minas[i][j] < 0) cout << "*";
				else cout << minas[i][j];
			}
			cout << endl;
		}
		//cout << endl;
		cin >> n;
		cin >> m;
		if(n!=0)cout << endl;
	}
	return 0;
}