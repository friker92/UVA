/*****************************************
 * Author: luisma                        *
 * Date:                                 *
 * ID: 10191 - La siesta más larga       *
 * URL:                                  *
 * Categories: Ordenación - Revilla(p119)*
 *****************************************/

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <complex>
#include <utility>
#include <cmath>
#include <cstring>
#include <sstream>
#include <climits>
#include <algorithm>
using namespace std;

//variables globales
int citasInicio[105];
int citasFin[105];
int nCasos;


//funciones
void solve(){
  int mejor=0;
  int hMejor=0;
  //añadimos una cita que acaba a las 10 y otra que empieza a las 18
  citasInicio[nCasos]=18*60;
  citasFin[nCasos]=10*60;
  ++nCasos;

  sort(citasInicio,citasInicio+nCasos);
  sort(citasFin,citasFin+nCasos);

  for(int i=0; i<nCasos; i++){
    if(citasInicio[i]-citasFin[i]>mejor){
      mejor=citasInicio[i]-citasFin[i];
      hMejor=citasFin[i];
    }
  }

  cout << "the longest nap starts at ";
  if(hMejor/60==0)
    cout << "00";
  else{
    if(hMejor/60 < 10)
      cout << "0";
    cout << (int)hMejor/60 << ":";
  }

  if(hMejor%60==0)
    cout << "00";
  else{
    if(hMejor%60<10)
      cout << "0";
    cout << hMejor%60;
  }
  cout << " and will last for ";
  

  if(mejor>=60){
    cout << mejor/60 << " hours and " 
	 << mejor%60 << " minutes." << endl;
  }  
  else{
    cout << mejor << " minutes." << endl;
  }
}

//main
int main(){

  int contador=1;
  int aux1,aux2;
  string basura;
  while(cin >> nCasos){
    //leo la entrada y los guardo en un array
    for(int i=0; i<nCasos; i++){

      //inicio de las citas
      cin >> aux1;
      cin.ignore();
      cin >> aux2;

      citasInicio[i]=aux1*60+aux2; //inicio tarea

      cin.ignore();
      //final de las citas
      cin >> aux1;
      cin.ignore();
      cin >> aux2;

      citasFin[i]=aux1*60+aux2; //fin tarea
      getline(cin,basura);
    }

    cout << "Day #" << contador << ": ";
    contador++;
    solve();
  }
  
  return 0;
}
