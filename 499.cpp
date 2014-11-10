#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string line;

    while(getline(cin, line)) {
        int V[52];
		int max=0,act=0;
		for(int k=0;k<52;k++) {
			V[k]=0;
		}
        for(int i=0; i<line.length(); i++) {
			if(line[i]<='Z' && line[i]>='A'){
                V[line[i]-'A']++;
				act=V[line[i]-'A'];
			}
			else if(line[i]<='z' && line[i]>='a'){
				V[line[i]-'a'+26]++;
				act=V[line[i]-'a'+26];
			}
			if(act>max) max=act;
        }

        for(int k=0;k<52;k++) {
            if(V[k]==max){
				if (k<26)
					cout << char(k+'A');
				else cout << char(k-26+'a');
			}
        }
        cout << " " << max << endl;
    }   


	return 0;
}