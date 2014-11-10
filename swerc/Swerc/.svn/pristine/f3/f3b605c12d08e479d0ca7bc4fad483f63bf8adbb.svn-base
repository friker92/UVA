// Esta programado de manera chapuza, yo no suelo ser
// así normalmente

/*****************************************
 * Author: luisma                        *
 * Date: 21/11/2012                      *
 * ID: 119 - Greedy Gifts Givers         *
 * URL:                                  *
 * Categories:                           *
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

using namespace std;


int main(){

  int nCasos;
  bool primerCaso=true;
  while(cin >> nCasos){
    cin.ignore();

    if(!primerCaso)
      cout << endl;

    primerCaso=false;
    map<string,int> reparto;
    vector<string> amigos;

    //leemos los nombres de los amigos
    string aux;
    for(int i=0; i<nCasos; i++){
      cin >> aux; //nombres de los amigos
      amigos.push_back(aux);
      reparto.insert(pair<string,int>(aux,0));
    }

    //dineros de cada uno
    int dineroTotal;
    int aRepartir;
    for(int i=0; i<amigos.size(); i++){
      cin >> aux >> dineroTotal >> aRepartir;
      
      if(aRepartir!=0){
	reparto[aux]-=dineroTotal;
	reparto[aux]+=dineroTotal%aRepartir;
	for(int j=0; j<aRepartir; j++){
	  cin >> aux;
	  reparto[aux]+=dineroTotal/aRepartir;
	}
      }
    }

    for(int i=0; i<amigos.size(); i++){
      cout << amigos[i] << " " << reparto[amigos[i]] << endl;
    }
  }

  return 0;
}
