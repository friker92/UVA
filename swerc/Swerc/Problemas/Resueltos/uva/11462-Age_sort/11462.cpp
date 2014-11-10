#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main(){

  int n;
  cin >> n;
  while(n!=0){
    vector<int> numeros;
    while(n--){
      int aux;
      cin >> aux;
      numeros.push_back(aux);
    }
    
    sort(numeros.begin(), numeros.end());
    for(int i=0; i<numeros.size()-1; i++){
      cout << numeros[i] << " ";
    }
    cout << numeros[numeros.size()-1] << endl;
    cin >> n;
  }

  return 0;
}
