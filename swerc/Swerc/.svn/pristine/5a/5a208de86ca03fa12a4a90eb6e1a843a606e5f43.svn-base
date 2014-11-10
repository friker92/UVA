#include <iostream>
#include <algorithm>
using namespace std;

int tables[1001][1001];

int main(){
    string r,s;

    for(int i=0;i<1001;i++){
	tables[0][i]=tables[i][0]=0;
    }

    while(getline(cin,r) && getline(cin,s)){
	for(int i=1;i<=r.size();i++){
	    for(int j=1;j<=s.size();j++){
		if(r[i-1]==s[j-1]) tables[i][j]=1+tables[i-1][j-1];
		else tables[i][j]=max(tables[i-1][j],tables[i][j-1]);
	    }
	}
	cout << tables[r.size()][s.size()] << "\n";
    }
    cout << flush;
    return 0;
}

