#include <iostream>
using namespace std;

#include <set>
#include "string.h"
#include <ctype.h>

set<string> conjunto;

void read();
void solve();

int main()
{
    read();
    solve();

    return 0;
}

void read()
{
    char aux='\0';

    cin.get(aux);

    while(!cin.eof())
    {
        string sAux="";
        bool seguir = true;
        while(seguir == true && (aux!=' ' && aux!='\n') && !cin.eof())
        {
            if(aux>='A' && aux <='Z')
              sAux+=tolower(aux);
            else if( aux>='a' && aux<='z')
              sAux+=aux;
            else seguir = false;
            if (seguir == true) cin.get(aux);
        }

        if(sAux!="")
            conjunto.insert(sAux);

        cin.get(aux);
    }

}

void solve()
{
       for(set<string>::iterator it=conjunto.begin(); it!=conjunto.end(); ++it)
        cout << *it << endl;
    
       conjunto=set<string>();

}