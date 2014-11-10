/*
author: paco criado

Tercer intento! La complejidad de este intento es O(n^3)
*/

#include <cstdio>
#include <climits>
#include <iostream>

using namespace std;

void eval(int cortes[52], int parc[52][52], int n, int i, int j);
// esta funcion asigna a parc[i][j] el valor que le corresponde.

void evalDiag(int cortes[52], int parc[52][52], int n, int tam);
//esta funcion evalua cada elemento de la diagonal de la matriz
//que que empieza en parc[0][i].

void evalMatr(int cortes[52], int parc[52][52], int n);
// evalua la matriz diagonal a diagonal

int main(int argc, char** argv)
{
	int cortes[52], parc[52][52], l, n;

	cin>>l;

	while(l!=0)
	{
		cin>>n;
		cortes[0]=0;
		for(int i=1; i<n+1; i++) cin>>cortes[i];
		cortes[n+1]=l;

		evalMatr(cortes, parc, n+2);

		cout<<"The minimum cutting is "<<parc[0][n+1]<<"."<<endl;
	
		cin>>l;
	}

	return 0;
}

void eval(int cortes[52], int parc[52][52], int n, int i, int j)
{
	int result=INT_MAX;
	if(j-i==1) parc[i][j]=0;
	else
	{
		for(int k=i+1; k<j; k++) 
			result=

				(result<parc[i][k]+parc[k][j])?
				result:
				parc[i][k]+parc[k][j];

		parc[i][j]=result+cortes[j]-cortes[i];
	}
}

void evalDiag(int cortes[52], int parc[52][52], int n, int tam)
{
	for(int k=0; k+tam<n; k++) eval(cortes, parc, n, k, k+tam);
}

void evalMatr(int cortes[52], int parc[52][52], int n)
{
	for(int k=1; k<n; k++) evalDiag(cortes, parc, n, k);
}
