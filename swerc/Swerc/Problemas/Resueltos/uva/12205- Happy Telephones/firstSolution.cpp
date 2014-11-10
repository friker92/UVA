/* 
 * File:   firstSolution.cpp
 * Author: Jose Pablo Cabeza Garcia
 * Problen: I-Happy Telephones (SWERC 2009)
 */
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

//El tipo intervalo
struct interval{
    int LowerBound;
    int UpperBound;
    interval(int l=0, int u=0):UpperBound(u),LowerBound(l){}
};

//Relaciones de orden para ordenar los intervalos
bool lowerBound(interval a, interval b){
    return a.LowerBound<b.LowerBound;
}
bool upperBound(interval a, interval b){
    return a.UpperBound<b.UpperBound;
}


int main(int argc, char** argv) {
    int n,m,aux1,aux2,N;
    
    vector<interval> intervals;
    vector<interval>::iterator it,it2,IT;
    interval aux;
    
    intervals.resize(10000);
    
    while(scanf("%i%i",&n,&m) && n!=0){
        
        IT=intervals.begin();
        
        while(n--){
            scanf("%i%i%i%i",&N,&N,&aux1,&aux2);   
            (*(IT++))=interval(aux1,aux2+aux1);
        }
        
        //Ordenos por el comienzo del intervalo para poder buscar
        sort(intervals.begin(),IT,lowerBound);
                    
        while(m--){
            scanf("%i%i",&aux1,&aux2);
            N=0;
            
            //Creo un intervalo auxiliar para hacer la busqueda binaria de los elementos
            aux=interval(aux1+aux2,aux1); //[s=aux1,e=aux1+aux2]
            
            //Busco el primer elemento tal que A>=e siendo A: [A,B]
            it=lower_bound(intervals.begin(),IT,aux,lowerBound);
            it--; //Este es el primero que no sirve, por lo tanto no lo cuento
            
            //Reviso todos los elementos entre este y busco los que sirvam
            it2=intervals.begin()-1;
            for(;it!=it2;it--){
                if((*it).UpperBound>aux.UpperBound)N++;
            }
            printf("%d\n",N);
        }
    }
    
    return 0;
}


