#include <iostream>
using namespace std;


int n,m;

void solve(){
  int sinGastar=n;
  int gastados=0;

  int fumados=0;

  //fumamos los primeros
  sinGastar=0; 
  gastados=n;
  fumados=n;

  while(gastados>=m){
    //creamos los nuevos cigarros
    sinGastar+=gastados/m;
    gastados=gastados%m;
    
    //fumamos los que tenemos
    fumados+=sinGastar;
    gastados+=sinGastar;
    sinGastar=0;
  }

  cout << fumados << endl;
}

int main(){
  while(cin >> n >> m)
    solve();

  return 0;
}
