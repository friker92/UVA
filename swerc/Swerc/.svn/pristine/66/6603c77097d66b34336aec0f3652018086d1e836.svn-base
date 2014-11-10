//============================================================================
// Ejercicio   : KTV (uva 11218)
// Autor       : Marco Antonio Gomez, marcoa@fdi.ucm.es
// Enunciado   : http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=112&page=show_problem&problem=2159
// Categorías  : Backtraking
//============================================================================
// NO DISTRIBUIR
//============================================================================

/*

 La solución es por fuerza bruta/backtraking, haciendo recursión directamente.

 Como las distintas alternativas son conjuntos de personas numeradas del 1 al 9,
 la solución implementada guarda cada caso (parcial) como un entero con algunos bits
 a uno (los de las personas que aparecen) para mejorar la eficiencia.

 Además se hace un poco de poda: si hemos metido ya dos combinaciones y no tenemos
 6 bits a uno, cortamos. De esta forma se consigue entrar sin TLE (1.3segs < 3segs).
 Por una pequeña prueba realizada antes del envío, un caso de prueba grande
 (con el máximo número de combinaciones, 81, donde se recorren todas) repetido
 menos de 200 veces (el enunciado dice que podrían llegar a 1000), tardaba ya cosa de
 segundo y medio...

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


// Combinaciones. Cada combinación es un vector de bits, con el
// bit i-ésimo a 1 si está el personaje 1.
vector<int> combinaciones;
vector<int> valor;


int bitsAUno(int n) {

	int ret = 0;

	n >>= 1;

	while (n != 0) {
		if ((n % 2) == 1)
			ret++;
		n >>= 1;
	}
	return ret;
}

int backtrack(int yapuestos, int combinacion, int pesoAcumulado) {

	assert(yapuestos < 3);

	int ret = -1;

	// Vamos probando con todas las posibilidades...
	for (int i = 0; i < combinaciones.size(); ++i) {
		int aux = combinacion | combinaciones[i];
		if (bitsAUno(aux) != 3*(yapuestos+1))
			continue;
		int nuevoPeso = pesoAcumulado + valor[i];
		if (aux == 0x3FE) { // Todos los bits a uno
			if ( nuevoPeso > ret)
				ret = pesoAcumulado + valor[i];
		} else if (yapuestos < 2) {
			int rb = backtrack(yapuestos+1, aux, nuevoPeso);
			if ( rb > ret )
				ret = rb;
		}
	}

	return ret;
}

bool resuelve(int caso) {

	int nComb;

	cin >> nComb;

	if (nComb == 0)
		return false;

	combinaciones.clear(); combinaciones.reserve(nComb);
	valor.clear(); valor.reserve(nComb);

	// Las leemos...
	for (int i = 0; i < nComb; ++i) {
		int a, b, c, v;
		cin >> a >> b >> c >> v;
		int combi = 0;
		combi |= (1 << a);
		combi |= (1 << b);
		combi |= (1 << c);
		combinaciones.push_back(combi);
		valor.push_back(v);
	}

	// Y lanzamos el proceso..
	int mejor = backtrack(0, 0, 0);

	cout << "Case " << caso << ": " << mejor << endl;
	return true;
}

int main() {

	int caso = 1;

	while (resuelve(caso++))
		;

	return 0;
}
