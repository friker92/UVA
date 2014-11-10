/*
author: paco criado

Este problema en realidad pide ver si un poligono es convexo.
Un poligono simple es convexo sii todos sus angulos son menores que Pi.
O sea, todas las areas de cada triangulo formado por tres vertices consecutivos
tienen el mismo signo.

Otra vez la todopoderosa formula del area de O'Rourke que uso en el 12278 
ayuda bastante.
*/

#include <iostream>

using namespace std;

int darea(int a[2], int b[2], int c[2]);
//2*area de abc (positiva si estan en sentido antihorario)

bool sameSign(int a, int b)
{
	return (a>=0)? b>=0 : b<0;
}

int main(int argc, char**argv)
{
	int N;
	int polygon[50][2];

	bool result;
	//true mientras tenga pinta convexa

	int firstDarea;
	// area del triangulo 0,1,2

	cin>>N;

	while(N!=0)
	{
		for(int i=0; i<N; i++) cin>>polygon[i][0]>>polygon[i][1];

		result=true;
		firstDarea=darea(polygon[0], polygon[1], polygon[2]);

		for(int i=0; i<N && result ; i++)
		{
			if(!sameSign(firstDarea, darea(polygon[i%N], polygon[(i+1)%N], polygon[(i+2)%N])))
				result=false;
		}
		cout<<(result?"No":"Yes")<<endl;
	
		cin>>N;
	}

	return 0;
}
int darea(int a[2], int b[2], int c[2])
{
	return
		a[0]*b[1]+
		b[0]*c[1]+
		c[0]*a[1]-
		a[0]*c[1]-
		b[0]*a[1]-
		c[0]*b[1];
}