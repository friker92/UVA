#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

const int MAXV=1000000;

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
int N,m;
queue<int> cola;

void solve();
void read();
void pinta1(int nodo, int color);

int main(){

  while(cin >> N >> m , !(N==0 && m==0)){
    read();
    solve();
  }

  return 0;
}

void read(){

  for(int i=0; i<N; i++){
    grafo[i]=nodo();
  }


  int aux1,aux2;
  while(m--){
    cin >> aux1 >> aux2;

    grafo[aux1-1].aristas.push_back(aux2-1);
    grafo[aux2-1].entrantes++;
  }  
}

void solve(){
    
  cola=queue<int> ();

  for(int i=0; i<N; i++){ //1o sin padres
    if(grafo[i].entrantes==0 && grafo[i].visitado!=1){
      cola.push(i+1);
      grafo[i].visitado==1;

      for(int j=0; j<grafo[i].aristas.size(); j++){
	grafo[grafo[i].aristas[j]].entrantes--;
	pinta1(grafo[i].aristas[j],i);
      }
    }
  }

  
  for(int i=0; i<N; i++){ //los sin pintar
    if(grafo[i].entrantes!=0){
      cout << "IMPOSSIBLE" << endl;

      return;
    }
  }

  while(!cola.empty()){
    cout << cola.front() << endl;
    cola.pop();
  }

}

void pinta1(int nodo, int color){
  
  if(grafo[nodo].entrantes==0 && grafo[nodo].visitado!=1){
    cola.push(nodo+1);
    grafo[nodo].visitado=1;

    for(int i=0; i<grafo[nodo].aristas.size(); i++){
      grafo[grafo[nodo].aristas[i]].entrantes--;
      pinta1(grafo[nodo].aristas[i],i);
    }
  }
}
