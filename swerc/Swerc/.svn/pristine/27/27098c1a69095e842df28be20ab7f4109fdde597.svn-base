//============================================================================
// Ejercicio   : Generating fast (uva 10098)
// Autor       : Marco Antonio Gomez, marcoa@fdi.ucm.es
// Enunciado   : http://uva.onlinejudge.org/external/100/10098.pdf
// Categorías  : next_permutation
//============================================================================
// NO DISTRIBUIR
//============================================================================

/*

 Este ejercicio se resuelve haciendo trampa... en realidad basta con
 llamar al next_permutation de C++ y ya está.

 En cualquier caso la implementación del next_permutation puede ser interesante
 conocerla. Hay una explicación en el 146-IDCodes.

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

	string line;
	getline(cin, line);

	sort(line.begin(), line.end());
	do {
		copy(line.begin(), line.end(), ostream_iterator<char>(cout));
		cout << endl;
	} while (next_permutation(line.begin(), line.end()));

	return true;
}

int main() {

	int nCasos;
	cin >> nCasos;
	cin.ignore();

	while (nCasos--) {
		resuelve();
		cout << endl;
	}

	return 0;
}
