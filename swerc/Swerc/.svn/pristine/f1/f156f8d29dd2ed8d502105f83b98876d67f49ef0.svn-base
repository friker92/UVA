/**
   author: Pablo Cabeza
   file:12416-space-remover
   Excessive Space Remover
*/

#include <string>
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc,char* argv[]){
    string input;
    double log2=log10(2.0);
    
    while (getline(cin,input)){
	int size=input.size();
	int numwhites=0;
	int actions=0;
	    
	for(int i=0;i<size;i++){
	    if(input[i]==' '){
		numwhites=i;
		while(i<size && input[i]==' ')i++;
		numwhites=i-numwhites;
	
		actions=actions>numwhites?actions:numwhites;
	    }
	}
	printf("%i\n",(int)ceil(log10(actions)/log2));
    }
    return 0;
}
