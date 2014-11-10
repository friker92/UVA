//============================================================================
// Ejercicio   : The Hamming Distance Problem (uva 729)
// Autor       : Marco Antonio Gomez, marcoa@fdi.ucm.es
// Enunciado   : http://uva.onlinejudge.org/external/7/729.pdf
// Categorías  : next_permutation, backtracking
//============================================================================
// NO DISTRIBUIR
//============================================================================

/*

 Ejercicio trivial con el next_permutation, igual que el 146 y el 10098.

 Mira el 10098 para una explicación de cómo funciona el next_permutation.

 */
#include <iostream>
#include <vector>
#include <set>
#include <stdio.h>
#include <iterator>
#include <algorithm>
#include <deque>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include <cassert>
#include <cstring>
#include <cmath>
#include <climits>
#include <numeric>
#include <sstream>
#include <string>
#include <sstream>
#include <queue>
#include <map>

//*
#define dcout cout
#define DEB
/*/
 #define dcout if (false) cout
 #define DEB if (false)
 /**/

bool resuelve() {

	int l, n;
	cin >> l;
	cin >> n;

	string cad;
	for (int i = 0; i < l-n; ++i)
		cad += '0';
	for (int i = 0; i < n; ++i)
		cad += '1';

	do {
		cout << cad << endl;
	} while (next_permutation(cad.begin(), cad.end()));

	return true;
}

int main() {

	int nCasos;
	cin >> nCasos;

	for (int i = 0; i < nCasos; ++i) {
		if (i > 0) cout << endl;
		resuelve();
	}

	return 0;
}
