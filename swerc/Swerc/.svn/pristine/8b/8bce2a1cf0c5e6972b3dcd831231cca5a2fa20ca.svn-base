/**
   \author Pablo Cabeza
*/
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    int N,M,total;
    char str[5];
    int num[10];
    char* ptr;

    while(scanf("%i %i",&N,&M)!=EOF){
	total=0;
	for(;N<=M;N++){
	    int k=N;
	    memset(num,0,sizeof(num));
	    for(;k;k/=10){
		if(num[k%10]) break;
		num[k%10]++;
	    }
	    if(!k) total++;
	}
	printf("%i\n",total);
    }
    return 0;
}
