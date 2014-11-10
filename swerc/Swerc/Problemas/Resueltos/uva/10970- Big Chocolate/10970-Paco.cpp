/*
author: paco criado

Este problema es muy muy gracioso. El minimo numero de cortes 
es el maximo numero de cortes, o sea, es el UNICO numero posible de cortes.

*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N, M;

	cin>>N>>M;

	while(!cin.eof())
	{
		cout<<N*M-1<<endl;

		cin>>N>>M;
	}

	return 0;
}