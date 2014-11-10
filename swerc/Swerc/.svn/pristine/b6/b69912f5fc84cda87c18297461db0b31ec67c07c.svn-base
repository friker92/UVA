/*
URL: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3166
 */
#include <iostream>
using namespace std;
#include <queue>
#include <string>
#include <limits.h>

#define FOR(n1,n2) for(int i=n1; i<n2; i++)
#define ROF(n1,n2) for(int i=n1; i>n2; i--)


unsigned int N;

void solve();

int main(int argc, char** argv)
{
    //numero de casos
    cin >> N;
    
    FOR(0,N)
    {
        cout << "Case #" << i+1 <<":"<< endl;
        solve();
        
    }
    
    
    return 0;
}


void solve()
{
    int maximo=INT_MIN;
    
    string auxiliar="";
    int puntos;
    
    queue<string> cola;
    
    //Insertamos
    FOR(0,10)
    {
        cin >> auxiliar >> puntos;
        
        if(puntos > maximo)
        {
            maximo=puntos;
            cola=queue<string>();
            cola.push(auxiliar);
        }
        else if(puntos == maximo)
            cola.push(auxiliar);
    }
    
    
    //Mostramos
    while(!cola.empty())
    {
        cout << cola.front() << endl;
        cola.pop();
    }
    
    
    
}
