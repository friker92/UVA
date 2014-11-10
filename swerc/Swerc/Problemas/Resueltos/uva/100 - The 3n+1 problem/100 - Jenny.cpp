/*

Author: Jenny Hernández

*/

#include <iostream>

using namespace std;

typedef unsigned long long int uint;

uint contarCiclos (uint a);

int main()
{
	uint a, b;
	int len = 0;

	while (cin >> a && cin >> b)
	{
		len = 0;
		uint aIni = a, bIni = b;

		if (a > b) 
			swap(a, b);
		
		for (int i = a; i <= b; i++){
			int lon = contarCiclos(i);
			if (lon > len) len = lon;
		}

		cout << aIni << " " << bIni << " " << len << endl;
	}

	return 0;
}

uint contarCiclos (uint a)
{
	int longitud = 1;

	while (a != 1) {

		longitud++;
		if (a % 2 == 0) // even   --> divide per 2
			a = a/2;

		else // odd   3n+1
			a = 3 * a + 1;
	}

	return longitud;
}