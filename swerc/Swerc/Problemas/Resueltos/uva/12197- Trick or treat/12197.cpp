/*
	author: paco criado

	El algoritmo es el de Ruiz, con un cambio in situ que se me habia
	olvidado. El algorimo Ruiz-Cabeza-Criado no termina necesariamente,
	pero este pequeño cambio si.

	Manda narices que un problema dificil me lo acepta y los faciles no...
*/

#include <iostream>
#include <cmath>


using namespace std;

class point
{
public:
	double x,y;

	void inline get();
};

double inline dist(point a, double b);

int inline maxDistance(point houses[50000], int n, double aprox);
//devuelve el indice del elemento con la mayor distancia

int main(int argc, void **argv)
{
	int n;

	point houses[50000];

	double inf, sup, aprox;

	int maxDist;

	cin>>n;

	while(n!=0)
	{
		for(int i=0; i<n; i++) houses[i].get();

		inf=-200000; 
		sup=200000;
		
		aprox=0;

		while(sup-inf>=0.000001)
		{
			maxDist=maxDistance(houses, n, aprox);
			if(houses[maxDist].x==aprox)// "he ganao"
			{
				inf=aprox;
				sup=aprox;
			}
			else if(houses[maxDist].x>aprox)
			{
				sup=(sup>houses[maxDist].x)?houses[maxDist].x:sup;
				inf=(inf<aprox)?aprox:inf;
			}
			else
			{
				sup=(sup>aprox)?aprox:sup;
				inf=(inf<houses[maxDist].x)?houses[maxDist].x:inf;
			}

			aprox=(inf+sup)/2;
		}
		maxDist=maxDistance(houses, n, aprox);
	
		cout<<aprox<<" "<<sqrt(dist(houses[maxDist],aprox))<<endl;
	
		cin>>n;
	}
	return 0;
}

void inline point::get()
{
	cin>>x>>y;
}

double inline dist(point a, double b)
	//devuelvo la distancia al cuadrado, porque me da pereza
{
	return((a.x-b)*(a.x-b) + (a.y)*(a.y));
}

int inline maxDistance(point houses[50000], int n, double aprox)
{
	int result;
	double max=0;

	for(int i=0; i<n; i++) if(dist(houses[i], aprox)>=max)
	{
		max=dist(houses[i],aprox);
		result=i;
	}

	return result;
}