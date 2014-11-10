/* 
 * File:   pablo-rail.cpp
 * Author: pablo
 *
 * Created on 8 de marzo de 2012, 21:57
 */

#include <cstdlib>
#include <cstdio>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int N,aux;
    int inputIt;
    int buffIt;
    bool first=true;
    
    unsigned short int input[1000]; //Array de el orden que me pide
    unsigned short int buffer[1000]; //Mi pila
    
    while(scanf("%i",&N)&&N!=0){ //Compruebo la primera condicion
        if(first) first=false; //Esto es para no poner un enter de mas al final
        else printf("\n");
        while(scanf("%i",&aux)&& aux!=0){ //Compruebo la segunda condicion
            inputIt=buffIt=0; //Inicio los indices de mi pila y array ( tamaños)

            input[0]=aux; //Como el primero ya lo he leido lo planto
            for(int i=1;i<N;i++){ //Relleno el array del orden
                scanf("%i",&aux);
                input[i]=aux;
            }

            for(int i=1;i<=N;i++){
                //Mientras que el primero de mi pila y el que estoy explorando en el array
                //sean los mismo los "elimino"
                while(buffIt!=0 && buffer[buffIt-1]==input[inputIt]){
                    buffIt--;
                    inputIt++;
                }
                buffer[buffIt++]=i;
            }
            //Repito la operación para el último elemento que meti en la pila
            while(buffIt!=0 && buffer[buffIt-1]==input[inputIt]){
                    buffIt--;
                    inputIt++;
            }
            
            //Si resulta que no me quedaba ninguno he ganao
            if(buffIt==0)printf("Yes\n");
            else printf("No\n");            
        }   
    }
    printf("\n");
    return 0;
}

