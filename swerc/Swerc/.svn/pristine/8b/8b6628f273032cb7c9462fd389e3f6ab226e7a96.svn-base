#include <iostream>
using namespace std;

#include<set>
#include<cstring>
#include<cctype>
//Variables globales
set<string> dicc;

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
    char a='\0';
    cin.get(a);

    string s;
    while(!cin.eof())
    {
        s="";

        while((a>='a' && a<='z') || (a>='A' && a<='Z') || a=='-')
        {
            if(a=='-')
            {
                cin.get(a);
                if(a=='\n')
                {
                    cin.get(a);
                    s+=tolower(a);
                }
                else
                {
                    s+='-';
                    s+=a;
                }
            }
            else
            {
                s+=tolower(a);
            }
            
            cin.get(a);
        }

        if(s!="")
            dicc.insert(s);
        //Siguiente vuelta
        cin.get(a);
    }
}

void solve()
{
    
    for(set<string>::iterator i=dicc.begin(); i!=dicc.end(); ++i)
    {
        cout  << *i << endl;

    }
}