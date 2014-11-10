/* 
 * File:   newmain.cpp
 * Author: usuario_local
 *
 * Created on 15 de octubre de 2012, 17:00
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

const long long int M=1000000;

long long int d(long long int num){
    long long int aux=num;
    while(aux!=0){
        num+=aux%10;
        aux/=10;
    }
    return num;    
}

int main(int argc, char** argv) {

    bool array[M+1];
    
    memset(array,1,sizeof(array));
    
    for( long long int i=1 ; i<=M ; i++){
        int aux=d(i);
        array[aux<=M?d(i):0]=false;
    }
    for(long long int i=1;i<=M;i++) if(array[i]) cout << i << "\n";
    
    return 0;
}

