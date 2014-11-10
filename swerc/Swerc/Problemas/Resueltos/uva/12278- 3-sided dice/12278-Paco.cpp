/*
author: paco criado

Este problema es gracioso, si ignoramos la probabilidad de que salga 3,
tenemos que cada dado es un punto en el cuadrado [0,1]^2 (en realidad,
estan por debajo de la diagonal y=1-x, pero da igual)

El cuarto dado se puede obtener sii pertenece al triangulo formado por 
los otros tres. 

La mejor manera que se me ocurre de poner esto es usando areas.

En el o'rourke recomienda una forma muy chula de encontrar areas:
el area del triangulo a,b,c (en sentido contrario a las agujas del reloj) es
la mitad del determinante de:

		a_x a_y 1
		b_x b_y 1
		c_x c_y 1

Si a,b,c son nuestros tres dados dados (valga la redundancia) y d es el dado 
objetivo, entonces nos interesa que las areas abd, bcd, cad tengan las tres el
mismo sentido que el area abc.

Tambien es un problema puñetero por la enorme cantidad de subcasos que hay.
El hecho de que ninguna probabilidad sea 0 es asqueroso, obliga a considerar
los puntos alineados y tal.

Ni de coña hubiera podido hacer esto en el concurso... Me sirve de consuelo que
solo lo hicieron 3 equipos.

Al tajo:
*/

#include <iostream>
using namespace std;

long int darea(int a[3], int b[3], int c[3]);
//devuelve el doble del area abc en ese orden
//si estan dados en el sentido horario, saldrá negativa

bool equals(int a[3], int b[3]);

bool possible(int a[3], int b[3], int c[3], int d[3]);
//comprobar si d se puede generar con a,b,c

bool isInSegment(int a[3], int b[3], int c[3]);
//true si c esta en ab, pero no en a ni en b.

int abs(int a)
{
	return (a>0)? a: -a;
}
int sign(int a)
{
	return (a>=0)? 1: -1;
}

int main(int argc, char ** argv)
{
	int a[3], b[3], c[3], d[3];

	cin>>a[0]>>a[1]>>a[2];

	while(a[0]+a[1]+a[2]==10000)
	{
		cin>>b[0]>>b[1]>>b[2];
		cin>>c[0]>>c[1]>>c[2];
		cin>>d[0]>>d[1]>>d[2];

		cout<<(possible(a,b,c,d)?"YES":"NO")<<endl;

		cin>>a[0]>>a[1]>>a[2];
	}

	return 0;
}
long int darea(int a[3], int b[3], int c[3])
{
	return
		a[0]*b[1]+
		b[0]*c[1]+
		c[0]*a[1]-
		a[0]*c[1]-
		b[0]*a[1]-
		c[0]*b[1];
}

bool equals(int a[3], int b[3])
{
	return a[0]==b[0] && a[1]==b[1];
}

bool possible(int a[3], int b[3], int c[3], int d[3])
{
	if(darea(a,b,c)>0)
		return(darea(a,b,d)>0 && darea(b,c,d)>0 && darea(c,a,d)>0);

	if(darea(a,b,c)<0)
		return(darea(a,b,d)<0 && darea(b,c,d)<0 && darea(c,a,d)<0);

	if(darea(a,b,c)==0)
	{
		//caso raro: a,b,c alineados.
		//a partir de aqui empieza lo aburrido
		//ojala quitaran la restriccion de que ninguna fuera 0

		if(equals(a,b) && equals(a,c)) return equals(a, d);
		//caso los tres iguales

		if(isInSegment(a,b,d)) return true;
		if(isInSegment(c,b,d)) return true;
		if(isInSegment(c,a,d)) return true;

		return false;
	}
}

bool isInSegment(int a[3], int b[3], int c[3])
{
	//e=b-a
	//f=c-a

	int e[3], f[3];

	if(equals(a,b)) return false;

	for(int i=0; i<3; i++)
	{
		e[i]=b[i]-a[i];
		f[i]=c[i]-a[i];
	}

	if(e[0]*f[1]!=e[1]*f[0])
		//no alineados
		return false;

	if(e[0]!=0)
	{
		if(0<f[0]*sign(e[0]) && f[0]*sign(e[0])<abs(e[0])) return true;
		return false;
	}
	
	if(0<f[1]*sign(e[1]) && f[1]*sign(e[1])<abs(e[1])) return true;
	return false;
}