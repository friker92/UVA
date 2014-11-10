/* 
 * File:   A.cpp
 * Author: usuario_local
 *
 * Created on 12 de diciembre de 2012, 17:01
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


int nums[10];
void dividir(unsigned long long int numerito);
/*
 * 
 */
int main() {
        
    unsigned long long int num, num2;
    cin >> num >> num2;
    while (num != 0 && num2 != 0)
    {
        for (int i = 0; i < 10; i++) // todos a 0 en el array // 0 apariciones
        {
            nums[i] = 0;
        }
       
        
        for ( unsigned long long int i = num; i <= num2; i++)
        {
            dividir(i);
            
        }
        
        
        for (int i = 0; i < 10; i++)
        {
            cout << nums[i];
            if (i < 9) cout << " ";
        }
        cout << endl;
        
        cin >> num >> num2;
    }
    
    
    return 0;
}

void dividir( unsigned long long int numerito)
{
    int resto;
    while (numerito > 9)
    {
        resto = numerito % 10;
        nums[resto]++;
        numerito = numerito / 10;
    }
    
    nums[numerito]++;
}