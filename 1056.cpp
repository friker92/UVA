#include <iostream>
#include <map>
#include <cmath>
using namespace std;


int a[50][50];
int n;

void floyds(){
 
  int i,j,k;
  for(k = 0;k < n ; k++)
    for(i = 0;i < n; i++)
      for(j = 0;j < n ; j++)
	a[i][j] = min (a[i][j], a[i][k] + a[k][j] );
}

int main(){
  map<string,int> per;
  int r;
  int casos=0;

  while(cin >> n >> r, !(n==0 && r==0)){
    casos++;

    string aux1,aux2;
    int i1,i2;
    //init matriz
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
	a[i][j]=99999;

    //lectura matriz
    while(r--){
      cin >> aux1 >> aux2;
      map<string,int>::iterator it1,it2;
      it1=per.find(aux1);

      if(it1==per.end()){
	per.insert(pair<string,int>(aux1,per.size()));
	i1=per.size()-1;
      }
      else
	i1=it1->second;
      
      it2=per.find(aux2);
      if(it2==per.end()){
	per.insert(pair<string,int>(aux2,per.size()));
	i2=per.size()-1;
      }
      else
	i2=it2->second;

      a[i1][i2]=1;
      a[i2][i1]=1;
    }

    floyds();

    int max=0;
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++){
	if(a[i][j]>max)
	  max=a[i][j];
      }
    

    cout << "Network " << casos << ": ";

    if(max>50)
      cout << "DISCONNECTED" << endl;
    else
      cout << max << endl;

    cout << endl;
  }

  return 0;
}
