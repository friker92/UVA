/* 
 * File:   b.cpp
 * Author: usuario_local
 *
 * Created on 12 de diciembre de 2012, 17:34
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

/*
 * 
 */

int numeros(unsigned long long int n,  int v[10]){
    int resto, vuelta=1;
    while(n>10){
        resto=n%10;
        n=n/10;
        for (int i=0;i<10;i++)
            if (i<=resto) v[i]+=(n+1)*vuelta;
            else v[i]+=(n)*vuelta;
        vuelta*=10;
    }
    resto=n%10;
    n=n/10;
    for (int i=1;i<10;i++)
        if (i<=resto) v[i]+=(n+1)*vuelta;
        else v[i]+=(n)*vuelta;
}

int main(int argc, char** argv) {
    unsigned long long int num, num2;
    int v[10], u[10];
    cin >> num >> num2;
    while (num != 0 || num2 != 0){
        for (int i=0;i<10;i++){
            v[i]=0; u[i]=0;
        }
        numeros(num-1, v); numeros(num2, u);
        cout << u[0]-v[0];
        for (int i=1;i<10;i++)
            cout << " " << u[i]-v[i];
        cout << endl;
        cin >> num >> num2;
    }
    return 0;
}

