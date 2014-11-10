#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int numCasos;
    cin >> numCasos;
    
    for(int i=0; i<numCasos; i++){
        int numCoches;
        cin >> numCoches;
        
        int suma=0;
        int aux;
        for(int j=0; j<numCoches; j++){
            cin >> aux;
            suma+=abs((float)((aux-1)-j));
        }
        
        suma/=2;
        
        cout << "Optimal train swapping takes " << suma << " swaps." << endl;
    }
    
    
    return 0;
}
