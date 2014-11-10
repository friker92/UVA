/**
   \author Pablo Cabeza García

   No se exactamente que le pasa, me sale un wrong answer y no se si
   es de los enteros grandes o del algoritmon...
*/

#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>

#include <string>
#include <iostream>


using namespace std;

const long int BASE=100000000;
const int NUM=25;

struct longint{
    longint(long int i=0) :used(0){
	while(i>=BASE){
	    inner[used++]=i%BASE;
	    i=i/BASE;
	}
	inner[used++]=i;
	for(int j=used;j<NUM;j++) inner[j]=0;
    }

    longint(const longint& o) :used(o.used){
	memcpy(inner,o.inner,sizeof(int)*NUM);
    }

    longint operator+(longint b){
	for(int i=0;i<NUM;i++){
	    b.inner[i+1]+=(b.inner[i]+inner[i]) / BASE;
	    b.inner[i]=(b.inner[i]+inner[i])%BASE;
	}
	return b;
    }

    void show(){
	cout << inner[used-1];
	for(int i=used-2;i>=0;i--){
	    int j= (inner[i]==0) ? 1 : (floor(log10(inner[i]))+1);
	    for(;j<4;j++) cout << "0";
	    cout << inner[i];
	}
    }
    
    int used;
    long int inner[NUM];
};


longint table[10000][100];

int main(int argc, char* argv[]){
    int N;
    string seq,subseq;

    cin >> N;
    while(N--){
	unsigned short int sseq,ssub;

	cin >> seq ;
	cin >> subseq;
	
	sseq=seq.size();
	ssub=subseq.size();

	table[0][0]= (seq[0]==subseq[0]) ? 1 : 0;

	for(int j=1;j<sseq;j++){
	    table[j][0]= 
		(seq[j]==subseq[0]) ? table[j-1][0]+1 : table[j-1][0];   
   	}

	
	for(int i=1;i<ssub;i++){
	    int j=0;
	    for(;j<i;j++) table[j][i]=0; 
	    for(;j<sseq;j++){
		table[j][i] =   
		    (seq[j]==subseq[i])? 
		    table[j-1][i]+table[j-1][i-1] : 
		    table[j-1][i];
	    }
	}

	table[sseq-1][ssub-1].show();
	cout << endl;
    }

    return 0;
} 
