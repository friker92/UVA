/*****************************************
 * Author: luisma                        *
 * Date: 6/12/12                         *
 * ID: 120 - Torres de tortitas          *
 * URL:http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=56     *
 * Categories: Ordenación. Revilla(p116) *
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

int tortitas[32], tortitasOrden[32];
int nTortitas;


void reflota(int i){

  int len=i;
  for (int i=0;i<len/2;i++){
      tortitas[i]^=tortitas[len-i-1];
      tortitas[len-i-1]^=tortitas[i];
      tortitas[i]^=tortitas[len-i-1];
  }
} 


void solve(){
  sort(tortitasOrden,tortitasOrden+nTortitas);
  int pTort=nTortitas-1; //puntero apuntando a la tortita que toca colocar

  while(pTort!=0){
    //buscamos la tortita que queremos colocar
    for(int i=0; i<pTort; i++){
      if(tortitas[i]==tortitasOrden[pTort]){
	//flotamos la tortita hasta arriba
	if(i!=0){
	  reflota(i+1);
	  
	  cout << nTortitas-i << " ";
	}
	//bajamos la tortita hasta su sitio
	if(i!=pTort){
	  reflota(pTort+1);
	  
	  cout << nTortitas-pTort << " ";
	}
	//salimos a por la siguiente tortita
	break;
      } //if
    } //for
    --pTort;
  } //while

  cout << 0 << endl;
} //solve


int main(){

  string line;
  while(getline(cin,line)){
    nTortitas=0;
    stringstream ss(line);

    int tortita;
    while(ss >> tortita){
      tortitas[nTortitas]=tortitasOrden[nTortitas]=tortita;
      nTortitas++;
    }

    cout << line << " "<< endl;
    solve();
    //    cout << " " << 0 << endl;
  }
  
  return 0;
}
