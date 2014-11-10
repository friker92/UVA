/* 
 * File:   Jesus.cpp
 * Author: Jesús Doménech Arellano
 *
 * Your amazing program should sum the numbers given in each line, 
 * and one line for each question with the response. 
 * Note that some numbers might be negative.
 * Sample input
 * 2 3
 * 4 5 1
 * Sample output
 * 5
 * 10
 *
 * Created on 16 de abril de 2012, 15:01
 */
#include <iostream>
#include <string>
using namespace std;

int sumar(char a[],int & i, int & n){
    int b=0;
    int c=1;
    char ch;
    if (a[i]==' ') i++;
    if(a[i]=='-') { c=-1;i++;}
    else if(a[i]=='+') { c=1;i++;}
    while(a[i] != ' ' && a[i] != '\0'){
        ch = a[i];
        b = 10*b + a[i]-'0';
        i++;
    }
    if(i >= n || a[i]=='\0') return c*b;
    else return c*b + sumar(a,i,n);  
}

int main(int argc, char** argv) {  
    int sum = 0;
    int a = 500, j =0;
    char str[500];
    while(cin.getline(str, 500, '\n') ){
        
        sum = sumar(str,j,a);
        cout << sum << endl;
        sum=0;
        j=0;
    }
    return 0;
}

