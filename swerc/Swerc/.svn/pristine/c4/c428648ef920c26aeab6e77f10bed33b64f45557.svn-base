/*/
#define dout cout
/*/
#define dout if(true){}else cout
//*/


#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <cmath>

using namespace std;


int main(int argc, char** argv) {
    int n,k;
    int primos[500000];
    for (int i=0; i<500000 ; i++) primos[i]=0;
    
    //Generar primos
    primos[0]=2;
    primos[1]=3;
    k=2;
    for(int i=5; i<=1000000; i=i+2){
        int j=1;
        int tope= int(floor(sqrt(i)));
        bool primo=true;
        while(primos[j]<=tope && primos[j]!=0 && primo){
            if (i%primos[j]==0) primo=false;
            j++;
        }
        if (primo){
            primos[k]=i;
            k++;
            dout << i << endl;
        }
    }

    dout << "generados";

    //Copiar primos
    bool esPrimo[1000000];
    for (int i=0; i<1000000; i++) esPrimo[i]=false;
    bool terminado=false;
    int j=0;
    while(j<1000000 && !terminado){
        if(primos[j]!=0) esPrimo[primos[j]]=true;
        else terminado=true;
        j++;
    }


    dout << "copiados";

    while(scanf("%i",&n)&& n!=0){
        //TODO contenido del algorimo
        dout << "Hola";
        int i=3;
        bool found=false;
        while(i<=n && !found){
            if (esPrimo[i])
                if (esPrimo[n-i]){
                    cout << n << " = " << i << " + " << n-i << endl;
                    found=true;
                }
            i=i+2;
        }
        
        
        
    }


    return 0;
}

