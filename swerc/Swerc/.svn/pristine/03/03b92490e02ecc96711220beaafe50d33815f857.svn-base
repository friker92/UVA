/**
Autor: Luisma
Problema: 100.-3n+1 problem

Solucion del problema con tablas (map) en el que guardo los resultados para
no tener que calcularlos varias veces en distintos casos de prueba.
*/

#include <iostream>
#include <map>
#include <limits.h>

using namespace std;

typedef unsigned long long int ullint;

//Struct que almacena los tres mejores resultados
struct resultado
{
	ullint _max;

	resultado() : _max(0) {}

	void addTime(ullint a){
		if(a > _max)
			_max=a;
	}

	ullint getMax(){
		return _max;
	}
};

ullint algoritmo(ullint a);
void solve();

//Variables globales
ullint a,b; //limites entre los que calcular
map<ullint, ullint> mapa = map<ullint, ullint>(); //mapa para los resultados parciales
resultado result;

int main()
{
	while(cin >> a >> b)
	{
		result = resultado();
		
		cout << a << " " << b << " " ; //imprimimos ahora para no perder el orden
		if(a>b)
			swap(a,b);
		
		solve();
		
		cout << result.getMax() << endl;
	}
}

void solve()
{
	for(ullint i=a; i<=b; i++)
	{
		map<ullint,ullint>::iterator it = mapa.find(i);

		if(it==mapa.end()) //no esta calculado antes
		{
			ullint time = algoritmo(i);
			mapa.insert(pair<ullint,ullint>(i,time));
			result.addTime(time);
		}
		else
			result.addTime(it->second);
	}
}

ullint algoritmo(ullint a)
{
	ullint time=1;

	while(a!=1)
	{
		if(a%2==0)
			a/=2;
		else
			a=3*a+1;

		time++;
	}

	return time;
}