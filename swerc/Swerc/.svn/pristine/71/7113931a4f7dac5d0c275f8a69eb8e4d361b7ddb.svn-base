/*******************************************************
 * File: luisma.cpp
 * Autor: Luisma Costero
 * Fecha: 02/04/2012
 * Nº Problema: 10004 - bicoloring
 * URL: http://uva.onlinejudge.org/external/100/10004.pdf
 * Descripcion: Dado un grafo, di si es bipartito o no
 *******************************************************/
#include <iostream>
using namespace std;
#include <queue>
#include <vector>

//Tipo TNodo
struct TNodo
{
  unsigned int id;
  short int color; //-1 y 1::= coloreado; 0::= sin colorear;
  short int colorEsperado;

  TNodo(){
    color=0;
    colorEsperado=0;
  }
};

//variables globales
unsigned int N; //numero de nodos
TNodo* nodos; //Array dinamico con los nodos
vector<TNodo*>* grafo; //Array dinamico con las adyacencias de cada nodo

//funciones variopintas
bool read();
bool solve();
void finish();

//MAIN
int main()
{
  while(read()){
    if(solve())
      cout << "BICOLORABLE." << endl;
    else
      cout << "NOT BICOLORABLE." << endl;

    finish();
  }

  return 0;
}


bool read(){
  cin >> N;
  if(N==0)
    return false;

  //Iniciamos los nodos y el grafo;
  nodos = new TNodo[N];
  grafo = new vector<TNodo*> [N];
  for(int i=0; i<N; i++)
    nodos[i].id=i;
  
  //leemos las adyacencias y las insertamos
  int n,n1,n2; 
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> n1 >> n2;
    grafo[n1].push_back(&nodos[n2]);
    grafo[n2].push_back(&nodos[n1]);
  }
  
  return true;
}

bool solve(){
  //Pintamos el primer nodo
  nodos[0].color=1;

  //cola para recorrer el grafo en anchura
  queue<TNodo*> cola;

  //metemos los adyacentes a la cola
  for(vector<TNodo*>::iterator it=grafo[0].begin(); it!=grafo[0].end(); ++it){
    (*it)->colorEsperado=(-1*nodos[0].color);
    cola.push(*it);
  }

  //recorremos la cola
  while(!cola.empty()){
    //Si esta pintado, comprobamos que el color sea correcto
    if(cola.front()->color!=0){
      if(cola.front()->color!=cola.front()->colorEsperado)
	return false;
      cola.pop();
    }
    //Si esta sin pintar, lo coloreamos y colocamos los adyacentes
    else{
      cola.front()->color=cola.front()->colorEsperado;
      for(vector<TNodo*>::iterator it=grafo[cola.front()->id].begin(); it!=grafo[cola.front()->id].end(); ++it){
    (*it)->colorEsperado=cola.front()->color*-1;
    cola.push(*it);
      }
  cola.pop();
    }
 }


  return true;
}

void finish()
{
  //Se hacia asi?
  delete[] nodos;
  delete[] grafo;
}
