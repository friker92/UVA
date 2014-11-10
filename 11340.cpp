#include <cmath> //log10,pow,floor
#include <cstring> //memset
#include <string> //string class
#include <sstream> //stringstream class
#include <algorithm> //max and min
#include <iostream>
using namespace std;

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main() {
    int T, N, c[258], p;
    char ch;
    scanf("%d\n", &T);
    while(T-- && scanf("%d\n", &N)==1) {
        memset(c, 0, sizeof c);
        while (N-- && scanf("%c %d\n", &ch, &p)==2) c[ch + 128] = p;
        scanf("%d\n", &N);
        while (N--) while ((ch = getchar()) != '\n')
                c[257] += c[ch + 128];
        printf("%d.%02d$\n", c[257] / 100, c[257] % 100);
    }
    return 0;
}

int main(){
	unsigned long long int coste[900],cc;
	int n,k,m,aux,len;
	char c;
	longint sum;
	string str,auxy;
	cin >> n;
	while(n--){
		memset(coste,0,sizeof(coste));
		sum=0;
		cin >> k;
		while(k--){
			cin >> c >> cc;
			coste[c+300]=cc;
		}
		cin >> m;
		m++;
		while(m--){
			getline(cin,str);
			for(int i=0; i < str.length();i++){
				sum = sum + coste[str[i]+300];
			}
		}
		auxy=sum.str();
		len=auxy.length();
		if(len<3) cout << "0";
		else
		for(long long int i= 0;i<len-2;i++){
			cout << auxy[i];
		}
		
		cout << "." ;
		if(len<2) cout << "0";
		else cout << auxy[len-2];
		if(len<1) cout << "0";
		else cout << auxy[len-1];
		cout << "$" << endl;
	}
	return 0;
}