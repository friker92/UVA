/**
   \author Pablo Cabeza
   Saves intermediate results to avoid recalculations
*/
#include <cstdio>
#include <cstdlib>
#include <cmath>

double logs[10000001];

int main(){
    int CASES,fact,used=1; logs[0]=0; double* f;
    scanf("%i",&CASES);
    while(CASES--){
	scanf("%i",&fact); f=logs+fact;
	for(double* d=logs+used;d<=f;++d,++used) *d=*(d-1)+log10(used);	
	printf("%i\n",static_cast<int>(floor(*f)+1));
    }
    return 0;
}
