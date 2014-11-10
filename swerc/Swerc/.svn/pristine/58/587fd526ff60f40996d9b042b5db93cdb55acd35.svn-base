//============================================================================
// Ejercicio   : Pairsumonious Numbers
// Autor       : Marco Antonio Gomez, marcoa@fdi.ucm.es
// Enunciado   : http://uva.onlinejudge.org/external/102/10202.pdf
// Categorías  : aritmética, backtracking (con pinzas...)
//============================================================================
// NO DISTRIBUIR
//============================================================================

/*
 * Si la secuencia de salida es (a1, a2, a3, ..., aN) ordenada de menor a
 * mayor y ordenamos la entrada de valores (v1, v2, v3, .... vM), es claro que
 * v1 = a1 + a2. La solución consiste en probar ("backtracking") con posibles
 * valores de a1 a ver si la cosa tiene sentido.
 *
 * En un paso intermedio de la prueba tenemos una serie de números en la
 * secuencia de salida, pongamos (a1, a2, a3, a4) y hemos quitado de la
 * secuencia de entrada las sumas de todas esas combinaciones de números.
 * Eso hace que el valor más pequeño que nos encontramos en la secuencia de
 * entrada restante sea a1+a5. Añadimos a5 a la secuencia de salida y
 * quitamos todas las combinaciones de sumas a1+a5, a2+a5, a3+a5, a4+a5.
 * Si alguna de ellas no está, la premisa está mal (a1 no era correcto) y
 * probamos con otro.
 *
 * Para hacer esto, se usan multiset, conjunto de valores posiblemente
 * repetidos que están ordenados, para guardar la secuencia de entrada
 * aún sin procesar.
 *
 * Para hacer las apuestas de los posibles a1 se puede coger el intervalo
 * más gordo. a1 será mayor que v1-(vM/2), y menor que (3*vM)/2 - v1. Pero
 * es más rápido sacarlo sabiendo que v1=a1+a2 y v2=a1+a3. Algunos de los
 * vX será a2+a3. Con esas tres podemos sacar una apuesta de a1.
 */

#include <iostream>
#include <vector>
#include <set>
#include <stdio.h>
#include <iterator>
#include <algorithm>
#include <deque>
using namespace std;

/*
#define dcout cout
/*/
#define dcout if (false) cout
/**/

vector<int> prueba(multiset<int> sumas, int valorMasBajo) {

	vector<int> ret;

	dcout << "Probamos asumiendo que el primer elemento es "
			<< valorMasBajo << endl;

	// Esto no debería ocurrir nunca según ...
	if (sumas.empty())
		return ret;

	ret.push_back(valorMasBajo);
	dcout << " Elemento de la secuencia final: " << valorMasBajo << endl;

	// Iteramos...
	while (!sumas.empty()) {

		// El primer elemento es la suma del valor más bajo
		// con el siguiente valor de la salida
		int sig = *sumas.begin();
		int newValue = sig - valorMasBajo;

		dcout << " Elemento de la secuencia final: " << newValue
				<< ". Quitamos: ";

		// Quitamos del conjunto todas la combinaciones
		// de sumas de ret con ese newValue. Si alguna no está
		// no habrá solución
		for (unsigned int i = 0; i < ret.size(); ++i) {
			multiset<int>::iterator it;
			it = sumas.find(ret[i] + newValue);
			if (it == sumas.end()) {
				dcout << "\n  ABORTAMOS la prueba. No aparece la suma "
						<< ret[i] << " + " << newValue
						<< " (" << ret[i] + newValue << ")" << endl;
				return vector<int>();
			} else {
				dcout << ret[i] + newValue << " ";
			}
			sumas.erase(it);
		}
		dcout << endl;
		ret.push_back(newValue);
	}

	dcout << "Secuencia completa.\n";
	return ret;
}

bool resuelve() {

	int tamSal = 0;

	if (!(cin >> tamSal))
		return false;

	int nEnt = tamSal * (tamSal-1) / 2;

	std::vector<int> sumas(nEnt);

	for (int i = 0; i < nEnt; ++i)
		cin >> sumas[i];

	// Ordenamos... (creo que era más rápido ordenar el vector y
	// luego añadirlo al multiset que hacer inserciones sucesivas
	// en él... aunque igual era para n grandes...).
	sort(sumas.begin(), sumas.end());

	multiset<int> sumasOrdenadas(sumas.begin(), sumas.end());

	for (int i = 2; i < nEnt; ++i) {
		vector<int> sol;

		int valorMasBajo = (sumas[0] + sumas[1] - sumas[i]) / 2;
		sol=prueba(sumasOrdenadas, valorMasBajo);
		if (!sol.empty()) {
			for (unsigned int i = 0; i < sol.size(); ++i) {
				if (i > 0) cout << ' ';
				cout << sol[i];
			}
			cout << endl;
			return true;
		}
	}

	cout << "Impossible\n";

	return true;
}

int main() {
	while (resuelve())
		;
	return 0;
}
