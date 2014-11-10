#include <iostream>
#include <cstring>
#include <vector>
#include <set>
using namespace std;

const int MAXV=100000;

struct nodo{
  vector<int> aristas;
  int visitado;
  int entrantes;
  
  nodo(){
    visitado=-1;
    aristas.clear();
    entrantes=0;
  }
};

nodo grafo[MAXV];
int N;
int ncomp=0;

void solve();
void read();
void pinta(int nodo, int color);
void pinta1(int nodo, int color);

int main(){

  int nCasos;
  cin >> nCasos;

  while(nCasos--){
    read();
    solve();
  }

  return 0;
}

void read(){
  int lines;
  cin >> N >> lines;

  for(int i=0; i<N; i++){
    grafo[i]=nodo();
  }


  int aux1,aux2;
  while(lines--){
    cin >> aux1 >> aux2;

    grafo[aux1-1].aristas.push_back(aux2-1);
    grafo[aux2-1].entrantes++;
  }  
}

void solve(){
  ncomp=0;
  
  for(int i=0; i<N; i++){ //1o sin padres
    if(grafo[i].entrantes==0){
      ncomp++;
      pinta1(i,i);
    }
  }
  
  for(int i=0; i<N; i++){ //los sin pintar
    if(grafo[i].visitado==-1){
      pinta(i,i);
    }
  }

  set<int> conj;
  for(int i=0; i<N; i++)
    conj.insert(grafo[i].visitado);
  
  cout << conj.size() << endl;
}

void pinta1(int nodo, int color){
  if(grafo[nodo].visitado!=-1)
    return;

  grafo[nodo].visitado=color;
  for(int i=0; i<grafo[nodo].aristas.size(); i++){
    pinta1(grafo[nodo].aristas[i],color);
  }
}


void pinta(int nodo, int color){

  if(grafo[nodo].visitado==color)
    return;
  else{
    grafo[nodo].visitado=color;
    for(int i=0; i<grafo[nodo].aristas.size(); i++){
      pinta(grafo[nodo].aristas[i], color);
    }
  }
}
