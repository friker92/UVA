//Plantilla generada automaticamente
/****************************************************
* File: 11496_2.cpp
* Autor: Luisma Costero
* Fecha: 23-dic-2011
* Nº Problema: 11496.-Musical Loop
* URL: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2491
* Breve descripcion: Te dan una grafica con N puntos, y tienes que calcular
* 		el numero de 'picos' de esta, considerandola como circular, es decir, a la hora de
* 		calcular los picos, despues del ultimo punto, hay que considerar el primero
***************************************************/

#include <iostream>
#include <limits.h>
using namespace std;

typedef unsigned short int usint;
typedef unsigned int uint;
typedef unsigned long int ulint;
typedef unsigned long long int ullint;

void solve(uint N);

int main()
{
	usint N;
	cin >> N;

	while(N!=0)
	{
		solve(N);
		//Preparamos la siguiente ronda
		cin >> N;
	}

	return 0;
}
 void solve(uint N)
 {
	 int n1,n2,n3;
	 cin >> n1 >> n2;
	 uint picos=0;

	 if(N==2 && n1!=n2)
		 picos=2;
	 else
	 {
		 int original=n1;
		 int original2=n2;

		 for(uint i=0; i<N-2; i++)
		 {
			 cin >> n3;
			 if(n1<n2 && n2>n3)
				 picos++;
			 else if(n1>n2 && n2<n3)
				 picos++;

			 n1=n2;
			 n2=n3;
		 }

		 //Esto es una gran chapuza pero funciona

		 //Contamos el primero
		 n3=original;

		 if(n1<n2 && n2>n3)
			 picos++;
		 else if(n1>n2 && n2<n3)
			 picos++;

		 //Contamos el segundo
		 n1=n2;
		 n2=n3;
		 n3=original2;

		 if(n1<n2 && n2>n3)
			 picos++;
		 else if(n1>n2 && n2<n3)
			 picos++;
	 }

	 cout << picos << endl;
 }
