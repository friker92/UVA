/* 
 * File:   goodSolution.cpp
 * Author: Jose Pablo Cabeza Garcia
 * Problen: I-Happy Telephones (SWERC 2009)
 */

#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int n,m;
    int aux1,aux2,s,d;
    vector<int> lowerBound,upperBound;
    vector<int>::iterator ITL,ITU;
    
    lowerBound.resize(10000);
    upperBound.resize(10000);
    
    while(scanf("%i%i",&n,&m) && n!=0){
        
        ITL=lowerBound.begin();
        ITU=upperBound.begin();
        
        for(int i=0;i<n;i++){
            scanf("%i%i%i%i",&aux1,&aux2,&s,&d);
            
            *ITL=s;
            *ITU=s+d;
            ITL++;
            ITU++;
        }
        
        //Ordeno los vectores de los limites inferiores y superiores
        sort(lowerBound.begin(),ITL);
        sort(upperBound.begin(),ITU);
                    
        //Lo que hago es buscar el numero de elementos que no me interesan
        while(m--){
            scanf("%i%i",&s,&d);
            d+=s;
                
            //Busco el primer elemento tal que A>=d, y me quedo con el numero de estos hasta el final
            aux1=ITL-lower_bound(lowerBound.begin(),ITL,d);
            
            //Busco el primer elemento tal que B>s, es decir el siguiente al ultimo tal que !(B<=s)
            aux2=upper_bound(upperBound.begin(),ITU,s)-upperBound.begin();
            
             //Imprimo la diferencia del numero de llamadas con los que no me interesan
            printf("%i\n",n-(aux1+aux2));           
        }x
    }
    return 0;
}


