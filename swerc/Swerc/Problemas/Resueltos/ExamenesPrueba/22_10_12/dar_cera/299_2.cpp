#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int numCasos;
    cin >> numCasos;
    
    for(int i=0; i<numCasos; i++){
        int numCoches;
        cin >> numCoches;
        
        int* train = new int[numCoches];
        
        for(int j=0; j<numCoches; j++){
            cin >> train[j];
        }
        int suma=0;
        
        for(int j=0; j<numCoches; j++){
            for(int k=0; k<numCoches-j-1; k++){
                if(train[k]>train[k+1]){
                    swap(train[k],train[k+1]);
                    suma++;
                }
            }
        }
        
        cout << "Optimal train swapping takes " << suma << " swaps." << endl;
        delete [] train;
    }
    
    
    return 0;
}
