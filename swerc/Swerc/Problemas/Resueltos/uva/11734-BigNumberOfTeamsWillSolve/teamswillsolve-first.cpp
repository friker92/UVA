/**
   \author Pablo Cabeza
*/
#include <cstdlib>
#include <cstdio>

int main(){
    char str1[30],str2[30];
    int cases,sp1,sp2;
    
    fgets(str1,sizeof(str1),stdin); cases=atoi(str1);
    for(int c=1;c<=cases;c++){
	fgets(str1,sizeof(str1),stdin); fgets(str2,sizeof(str2),stdin);
	sp1=sp2=0;
	char* s1=str1,*s2=str2;
	for(; *s1 && *s1!='\n' && *s2 && *s2!='\n';s1++,s2++){
	    for(;(*s1)==' ';s1++) ++sp1;
	    for(;(*s2)==' ';s2++) ++sp2;
	    if(*s1!=*s2) break;
	}
	for(;(*s1)==' ';s1++) ++sp1;
	for(;(*s2)==' ';s2++) ++sp2;
	if((!*s1 || *s1=='\n') && (!*s2 || *s2=='\n'))
	    if(sp1==sp2) printf("Case %i: Yes\n",c);
	    else printf("Case %i: Output Format Error\n",c);
	else printf("Case %i: Wrong Answer\n",c);
    }
    return 0;
}
