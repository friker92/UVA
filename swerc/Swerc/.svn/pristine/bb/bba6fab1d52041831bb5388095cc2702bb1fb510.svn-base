/*
 * Author: luisma
 * Problem: 10405-Longest Common Subsequence
 * Type: Programación dinámica
 * URL: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1346
 */

#include <iostream>
using namespace std;
#include <string.h>

string cad1,cad2;
unsigned int tabla[1001][1001];

void solve(){
  for(int i=1; i<=cad1.size(); i++){
    for(int j=1; j<=cad2.size(); j++){
      if(cad1[i-1]==cad2[j-1])
	tabla[i][j]=tabla[i-1][j-1]+1;
      else if(tabla[i-1][j] >= tabla[i][j-1])
	tabla[i][j]=tabla[i-1][j];
      else
	tabla[i][j]=tabla[i][j-1];
    }
  }
}


int main(){

  while(getline(cin,cad1)){
    getline(cin,cad2);

    //iniciamos la tabla
    for(int i=0; i<1001; i++)
      memset(tabla[i],0,1001);

    //solve
    solve();
    cout << tabla[cad1.size()][cad2.size()] << endl;
  }

  return 0;
}
