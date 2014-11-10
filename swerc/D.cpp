/* 
 * File:   D.cpp
 * Author: usuario_local
 *
 * Created on 31 de octubre de 2012, 16:57
 */

#include <cstdlib>
#include <queue>
#include <iostream>

using namespace std;


bool allowed[10000];

struct Combination{
    int n1;
    int n2;
    int n3;
    int n4;
    
    Combination (int i1, int 12, int 13, int 14){
        n1=i1;
        n2=i2;
        n3=i3;
        n4=i4;
    }
    
    int value(){
        return n1*1000 + n2*100 + n3*10 + n4;
    }
    
}

struct Pair{
    Combination comb;
    int depth;
    
    Pair (Combination c, int d){
        comb=c;
        depth=d;
    }
    
};
/*
 * 
 */

int bestPath(Combination start, Combination end, bool allowed[10000]){
    queue<Pair> toVisit;
    toVisit.push(Pair(start, 0);
    while (!toVisit.empty()){
        Combination actual=toVisit.front();
        toVisit.pop();
        if (allowed[actual.value]){
                if (actual == solución) return actual.depth;
                else if(depth>10000) return -1;
                else{
                    int currentDepth=actual.depth();
                    Combination aux1 = actual;
                    aux1.n1=(Combination.n1+10-1)%10;
                    Combination aux2 = actual;
                    aux2.n1=(Combination.n1+10+1)%10;
                    Combination aux3 = actual;
                    aux3.n2=(Combination.n2+10-1)%10;
                    Combination aux4 = actual;
                    aux4.n2=(Combination.n2+10+1)%10;
                    Combination aux5 = actual;
                    aux5.n3=(Combination.n3+10-1)%10;
                    Combination aux6 = actual;
                    aux6.n3=(Combination.n3+10+1)%10;
                    Combination aux7 = actual;
                    aux7.n4=(Combination.n4+10-1)%10;
                    Combination aux8 = actual;
                    aux8.n4=(Combination.n4+10+1)%10;
                    toVisit.push(Pair(aux1, depth+1));
                    toVisit.push(Pair(aux2, depth+1));
                    toVisit.push(Pair(aux3, depth+1));
                    toVisit.push(Pair(aux4, depth+1));
                    toVisit.push(Pair(aux5, depth+1));
                    toVisit.push(Pair(aux6, depth+1));
                    toVisit.push(Pair(aux7, depth+1));
                    toVisit.push(Pair(aux8, depth+1));          
                }
        }
    }
    return -1;
} 

int main(int argc, char** argv) {

    
    
    return 0;
}

