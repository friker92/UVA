/**
   \author Pablo Cabeza García
   The right way of solving the problem, even if previous version
   passes this is more complete. 
 */
#include <cstdlib>
#include <cstdio>

int main(){
    char str1[30],str2[30];
    int cases;
    bool dif;

    fgets(str1,sizeof(str1),stdin); cases=atoi(str1);
    for(int c=1;c<=cases;c++){
	fgets(str1,sizeof(str1),stdin); fgets(str2,sizeof(str2),stdin);
	dif=false;
	char* s1=str1,*s2=str2;
	for(;*s1!='\n' && *s2!='\n';s1++,s2++){
	    if(*s1!=*s2){ 
		dif=true;
		for(;(*s1)==' ';s1++);
		for(;(*s2)==' ';s2++);
		if(*s1!=*s2) break;
	    }
	}
	if(*s1!=*s2) dif=true;
	for(;(*s1)==' ';s1++);
	for(;(*s2)==' ';s2++);

	if((*s1=='\n') && (*s2=='\n'))
	    if(!dif) printf("Case %i: Yes\n",c);
	    else printf("Case %i: Output Format Error\n",c);
	else printf("Case %i: Wrong Answer\n",c);
    }
    return 0;
}
