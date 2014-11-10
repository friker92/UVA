/*****************************************
 * Author: luisma                        *
 * Date: 30/11/12                        *
 * ID: 10041 - La familia de Vito        *
 * URL: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=982
 * Categories: Ordenacion, Revilla(115)  *
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


#define MAX_FAM 500;

int familiares[500];

void solve(){
  int nFam;
  cin >> nFam;

  for(int i=0; i<nFam; i++) //leemos los familiares
    cin >> familiares[i];

  sort(familiares, familiares+nFam);
  
  int casaVito=familiares[nFam/2];

  int result=0; 

  for(int j=0; j<nFam; j++)
    result+=abs(casaVito-familiares[j]);

  cout << result << endl;
}

int main(){

  int n;
  cin >> n;
  while(n--){
    solve();
  }

  return 0;
}
