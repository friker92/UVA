/**
   \author Pablo Cabeza
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main(){
    int CASES,fact;
    double prec;
    scanf("%i",&CASES);
    while(CASES--){
	scanf("%i",&fact);	
	prec=0; 
	for(int i=2;i<=fact;i++) prec+=log10(i);
	printf("%i\n",static_cast<int>(floor(prec)+1));
    }
    return 0;
}
