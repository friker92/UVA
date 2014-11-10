#include <iostream>
#include <iomanip>
using namespace std;

#define float double

struct punto {
    float x;
    float y;

    bool operator ==(punto& Punto)
    {
        return (x==Punto.x && y==Punto.y);
    }

    punto& operator=(const punto& Punto)
    {
        x=Punto.x;
        y=Punto.y;

        return *this;
    }
};

punto uno;
punto dos;
punto tres;
punto cuatro;
punto ultimo;

void read();
void solve();

int main()
{
    read();
    while(!cin.eof())
    {
        solve();
        read();
    }
    return 0;
}

void read()
{
    cin >> uno.x >> uno.y >> dos.x >> dos.y 
        >> tres.x >> tres.y >> cuatro.x >> cuatro.y;
    
    if(tres==uno)
    {
        ultimo=cuatro;

        cuatro=uno;

        uno=dos;
        dos=cuatro;

    }
    else if(tres==dos)
    {
        ultimo=cuatro;
    }
    else if(cuatro==uno)
    {
        ultimo=tres;
        
        tres=uno;

        uno=dos;
        dos=tres;
    }
    else if(cuatro==dos)
    {
        ultimo=tres;
    }

}

void solve(){
    float anchura=uno.x-dos.x;
    float altura=uno.y-dos.y;

    cuatro.x=ultimo.x+anchura;
    cuatro.y=ultimo.y+altura;

    cout << fixed << setprecision(3) << cuatro.x  << " " << setprecision(3) <<  cuatro.y << endl;
}
