/* 
 * File:   B.cpp
 * Author: usuario_local
 *
 * Created on 31 de octubre de 2012, 16:57
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void printNewspaper(int lower, int number, string toPrint,
        string periodicos[12], int N){
    if(number==0) cout << toPrint << endl;
    else if (number>(N-lower)) return;
    else if (lower<N){
        string save=toPrint;
        
        //Añadiendo el actual
        toPrint+=periodicos[lower];
        if (number!=1) toPrint+=", "; 
        printNewspaper(lower+1, number-1, toPrint, periodicos, N);
        //Sin añadir el actual
        printNewspaper(lower+1, number, save, periodicos, N);
    }
}

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Leemos el numero de casos
    int n;
    cin >> n;
    cin.ignore();
    cin.ignore();
    for(int i=0; i<n; i++){
        //Leemos los subconjuntos a imprimir
        int start=1;
        int finish=12;
        string cases;
        //cout << cases << endl;
        //cin.ignore();
        getline(cin, cases);
        if (cases[0]=='*'){
            } 
        else if (cases.length()>2){
            if (cases[1]==' '){
                start=cases[0]-'0';
                if (cases.length()>3){
                    finish=10+cases[3]-'0';
                }
                else{
                    finish=cases[2]-'0';
                }
            }
            else{
                start=10+cases[1]-'0';
                if (cases.length()>4){
                   finish=10+cases[4]-'0'; 
                }
                else{
                    finish=cases[3]-'0';
                }
            }
        }
        else{
            if (cases.length()==2){
                start=10 + cases[1]-'0';
                finish=start;
            }
            else{
                start=cases[0] -'0';
                finish=start;
            }
        }
        int number=0;
        string aux;
        string periodicos[12];
        getline(cin, aux);
        while(aux.length()!=0){
            periodicos[number]=aux;
            getline(cin, aux);
            number++;
        }
        //...
        if (finish>=number) finish=number;
        for(int j=start; j<=finish; j++){
            cout << "Size " << j << endl;
            printNewspaper(0, j, "" , periodicos, number);
            cout<<endl;
        }
        if(i<n-1)cout<<endl;
        //cin.ignore();
    }
    
    return 0;
}

