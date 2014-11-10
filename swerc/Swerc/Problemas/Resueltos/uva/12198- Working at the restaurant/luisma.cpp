/*****************************************
 * Author: luisma                        *
 * Date: 23/12/12                        *
 * ID: 12198 - Working at the restaurant *
 * URL: NaN                              *
 * Categories: Simular cola con 2 pilas  *
 *****************************************/
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

typedef unsigned long long int tipo;

int nCasos;
bool primero=true;

//Clase que simula una cola con dos pilas
struct cola{
  //constructora
  cola(): pila1(0), pila2(0){}
  //metodos

  //introduce num elementos en la pila que toque
  void put(tipo num){
    pila2+=num;
    cout << "DROP 2 " << num << '\n';
  }
  
  //saca num numeros de la cola. Si es necesario mueve los que
  //tenga que mover
  void get(tipo num){
    //si la pila 1 está vacia cambiamos las pilas
    if(pila1==0){
      swap(pila1, pila2);
      cout << "MOVE 2->1 " << pila1 << '\n';
    }

    //tenemos suficientes elementos en la pila 1
    if(pila1>=num){
      pila1-=num;
      cout << "TAKE 1 " << num << '\n';
    }
    else{ //no hay suficientes elementos en 1
      cout << "TAKE 1 " << pila1 << '\n';
      num-=pila1;
      pila1=0;

      //cambiamos las pilas
      swap(pila1,pila2);
      cout << "MOVE 2->1 " << pila1 << '\n';
      //cogemos las que necesitemos
      cout << "TAKE 1 " << num << '\n';
      pila1-=num;
    }
  }

  //atributos
  tipo pila1; //numero de platos en la pila 1
  tipo pila2; //numero de platos en la pila 2
};

void solve(){

  cola platos;
  tipo num;
  string action;

  if(!primero)
    cout << endl;

  while(nCasos--){
    cin >> action;
    cin >> num;

    if(action=="TAKE")
      platos.get(num);
    else
      platos.put(num);
  }
  

}

int main(){

  while(cin >> nCasos, nCasos){
    solve();
    primero=false;
  }
  return 0;
}
