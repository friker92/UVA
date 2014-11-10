#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
  int n,x=0,y=0;
  bool col[101],aux,fila,muerto,act;
  cin >> n;
  while(n!=0){
    x=0;y=0;
    muerto=false;
    fila=false;
    memset(&col, false, sizeof(bool) * 101);
    for(int i=0;i<n;i++){
      aux=false;
      for(int j = 0;j<n;j++){
	cin >> act;
	col[j]=((col[j] || act) && !(col[j] && act));
	aux=((aux || act) && !(aux && act));
      }
      if(fila&&aux)muerto=true;
      else if(aux){
	fila=true;
	x=i+1;
      }
    }
    if(muerto) cout << "Corrupt" << endl;
    else{
      for(int i = 0;i<n&&!muerto;i++){
	if(col[i]&&y!=0)muerto=true;
	else if(col[i]){
	  y=i+1;
	}
      }
      if(muerto||(fila&&y==0)||(y!=0&&!fila)) cout << "Corrupt" << endl;
      else if(y!=0 && x!=0) cout << "Change bit (" << x<<","<<y<<")"<< endl;
      else cout << "OK" <<endl;
    }
    cin >> n;
  }
  return 0;
}
