/**
   \author Pablo Cabeza García
   \brief Number of swap steps from bubble sort. 
 */

#include <iostream>
using namespace std;

int main(){
    int N,M, elems[50], acum,aux;

    cin >> N;    
    while(N--){
	acum=0;
	cin >> M;
	for(int i=0;i<M;i++){
	    cin >> elems[i];
	    for(int j=0;j<i;j++) if(elems[j]>elems[i]) acum++;
	}
	cout << "Optimal train swapping takes " << acum << " swaps.\n";
    }
    cout << flush;
    return 0;
}
