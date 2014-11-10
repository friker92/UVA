#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main(){
  int n,m;
  cin >> n >> m;

  while(n!=0 && m!=0){

    vector <int> inicios, finales;
    for(int i=0; i<n; i++){
      int a,b;
      cin >> a >> b >> a >> b;

      inicios.push_back(a);
      finales.push_back(a+b);
      
    }
    
    //ordenamos los inicios y finales
    sort(inicios.begin(),inicios.end());
    sort(finales.begin(),finales.end());

    for(int i=0; i<m; i++){
      int k,l; //casos de prueba
      cin >> k >> l;

      int n1,n2;

      n1= inicios.end()-lower_bound(inicios.begin(),inicios.end(),k+l);
      n2= upper_bound(finales.begin(),finales.end(),k)-finales.begin();
 
      cout << inicios.size() - n1 - n2<< endl;
    }    
    //proxima vuelta
    cin >> n >> m;
  }

  return 0;
}
