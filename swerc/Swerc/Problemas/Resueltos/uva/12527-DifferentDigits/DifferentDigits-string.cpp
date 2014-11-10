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
	    sprintf(str,"%i",N);
	    memset(num,0,sizeof(num));
	    for(ptr=str;*ptr!='\0';ptr++){
		if(num[*ptr-'0']) break;
		num[*ptr-'0']++;
	    }
	    if(*ptr=='\0') total++;
	}
	printf("%i\n",total);
    }
    return 0;
}
