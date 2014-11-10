#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;


void print(short int c){
    printf(" %hi",c);
}

int main(){
    long long int people;
    int aux;
    long long int p[101];
    bool f=true,cf;

    memset(p,0,sizeof(long long int)* 101);
    while((scanf("%lli",&people)) && people){
	while(people--){
	    scanf("%i",&aux);
	    p[aux]++;
	}
	if(f) f=false; 
	else cout << '\n';

	cf=true;
	for(int i=1;i<101;i++)
	    if(p[i]){
		while(p[i]--){
		    if(cf) cf=false; 
		    else cout << ' ';
		    cout << i;
		}
		p[i]=0;
	    }
    }
    cout << endl;
    return 0;
}
