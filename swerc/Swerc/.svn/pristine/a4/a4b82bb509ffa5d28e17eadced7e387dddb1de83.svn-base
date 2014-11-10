/* 
 * File:   restaurant.cpp
 * Author: JOSE PABLO CABEZA GARCÍA
 * Problem: B-Working at the restaurant (SWERC 2009)[12198]
 */

#include <algorithm>
#include <cstdlib>
#include <cstdio>

using namespace std;

/*Clase que simula una cola de enteros usando dos pilas con las operaciones:
 * drop(n) <-> push(n)
 * take(n) <-> pop(n)
 * nuewPile() <-> clear() 
 */
class Piles{
public:
    Piles() 
        :pile1(0),pile2(0){
    }
    
    void drop(int num){
        if( num==0) return;
        printf("DROP 2 %i\n",num);
        pile2+=num;
    }
    void take(int num){
 
        if(num==0)return; //No hacer nada si te piden coger 0 plato
        
        /*Si hay que coger mas platos de los que hay en pile1, entonces cogemos
         * todos los posible que haya en pile1 , movemos todo pile2 a pile1 y
         * cogemos los que faltan de pile1 otra vez
         */
        if(pile1<num){
            if(pile1!=0)
                printf("TAKE 1 %i\n",pile1);
            printf("MOVE 2->1 %i\n",pile2);
            num-=pile1;
            printf("TAKE 1 %i\n",num);
            pile1=pile2;        
            pile1-=num;
            pile2=0;
        }
        else{
            printf("TAKE 1 %i\n",num);
            pile1-=num;
        }
    }
    //Reinicio las pilas
    void newPile(){
        pile1=pile2=0;
        printf("\n");
    }
    
private:
    int pile1;
    int pile2;
    
};

using namespace std;

int main(int argc, char** argv) {
    Piles pile;
    char line[10];
    int n=0,num=0;
    
    while(scanf("%i",&n) && n){
       while(n--){
            scanf("%s%i",&line,&num);
            
            if(line[0]=='T') pile.take(num);
            else pile.drop(num);
       }
        pile.newPile();       
    }
    return 0;
}

