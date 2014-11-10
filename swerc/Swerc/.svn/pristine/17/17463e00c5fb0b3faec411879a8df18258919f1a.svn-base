/*
  authot: Pablo Cabeza
  file: 12414-calculating-yuanfen.cpp
 */

#include <cstdlib>
#include <cstdio>
#include <cmath>

#include <iostream>
#include <string>

using namespace std;


void addtoarray(int arr[],int & pos,int num){
    int cif=floor(log10((double)num));
    pos+=cif;
    
    for(int i=0;i<=cif;i++){
	arr[pos--]=num%10;
	num=num/10;
    }
    
    pos=pos+cif+2;
}

int main(int argc,char* argv[]){
    string input;
    int Orig[50],
	Next[50],
	*orig=Orig,
	*next=Next,
	s=0;
	bool end=false,notprint;

    while(getline(cin,input)){
	end=false,notprint=true;
	for(int i=1;i<10000 && !end;i++){
	    s=0;
	    
	    for(int j=0;j<input.size();j++)
		addtoarray(orig,s,i+input[j]-'A');

	    while(s>2 && !end ){
		for(int j=0;j<s-1;j++)
		    next[j]=(orig[j]+orig[j+1])%10;
		
		s--;
		int *aux=next;
		next=orig;
		orig=aux;
		
		if(s==3 && orig[0]==1 && orig[1]==0&&orig[2]==0)
		    end=true;
	    }
	    if(end){
		printf("%i\n",i);
		notprint=false;
	    }
	}
	if(notprint) printf(":(\n");
    }
    return 0;
}
