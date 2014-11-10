#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

typedef long long int lint;

//lower_bound

vector<lint> muestra;

void insertar(lint n);
void solve();

int main()
{
    lint aux;
    cin >> aux; 
    
    while(!cin.eof())
    {
        insertar(aux);
        solve();
        
        cin >> aux;
    }
    return 0;
}


void insertar(lint n)
{
    vector<lint>::iterator it;
    it=lower_bound(muestra.begin(), muestra.end(), n);
    
    muestra.insert(it,n);
}

void solve()
{
  if(muestra.size()%2==1)
    cout << muestra.at((int)muestra.size()/2+1-1) << endl;
  else
  {
      lint num1 = muestra.at((muestra.size()/2)-1);
      lint num2 = muestra.at(muestra.size()/2);
      
      cout << (int)((num1+num2)/2) << endl;
  }
}