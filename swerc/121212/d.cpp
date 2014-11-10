/* 
 * File:   d.cpp
 * Author: usuario_local
 *
 * Created on 12 de diciembre de 2012, 18:19
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
using namespace std;
struct fract{
    unsigned int n1;
    unsigned int n2;
    bool operator ==(fract f){
        return f.n1*n2==f.n2*n1;
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int n1,n2;
    cin >> n1 >> n2;
    while(n1!=1||n2!=1){
        fract a,b,c,bus;
        a.n1=1;
        a.n2=0;
        c.n1=0;
        c.n2=1;
        b.n1=1;
        b.n2=1;
        bus.n1=n1;
        bus.n2=n2;

        string cad="";
        while ((unsigned long long int)bus.n1*b.n2!=(unsigned long long int)bus.n2*b.n1){
            bool comp= ((unsigned long long int)bus.n1*b.n2>(unsigned long long int)bus.n2*b.n1);
            if(comp){
                c.n1=b.n1;
                c.n2=b.n2;
                b.n1=a.n1+b.n1;
                b.n2=a.n2+b.n2;
                cad+="R";
            }else{
                a.n1=b.n1;
                a.n2=b.n2;
                b.n1=c.n1+b.n1;
                b.n2=c.n2+b.n2;
                cad+="L";
            } 
        }
        if(cad=="")cout << "I" << endl;
        else cout << cad << endl;
        cin>> n1>>n2;
    }
    return 0;
}

