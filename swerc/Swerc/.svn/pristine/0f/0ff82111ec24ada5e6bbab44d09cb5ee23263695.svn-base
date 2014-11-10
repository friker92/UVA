//============================================================================
// Ejercicio   : ID Codes (uva 146)
// Autor       : Marco Antonio Gomez, marcoa@fdi.ucm.es
// Enunciado   : http://uva.onlinejudge.org/external/1/146.pdf
// Categorías  : Backtraking, next_permutation
//============================================================================
// NO DISTRIBUIR
//============================================================================

/*

 Este ejercicio se resuelve haciendo trampa... en realidad basta con
 llamar al next_permutation de C++ y ya está, porque el next_permutation
 te devuelve la siguiente permutación en orden lexicográfico del array que
 le pasas.

 En cualquier caso la implementación del next_permutation puede ser interesante
 conocerla. Para eso lo mejor es un ejemplo. Tenemos

 1 2 7 9 8 6 5 4 3

 lo que se hace es buscar cuál es la cola (en el sentido de "tail"...)
 del vector en orden decreciente más grande, en este caso 9 8 6 5 4 3.

 Si consideráramos esta sección sola ya no tendríamos otro next_permutation,
 pues no hay ninguna cadena mayor en orden lexicográfico que esta, así que
 toda introducir el siguiente número (el 7) para avanzar.

 Eso significa que el 7 debe ser sustituido por alguno de los números
 que tenemos en esa "cola". Evidentemente no pueden ser ninguno de los que
 son _menores_ que el 7, pues en ese caso la permutación sería menor
 lexicográficamente. Utilizamos el más cercano que supere al 7, que es el 8
 (observa que para eso basta con hacer un reverse iterator y el primero
 que te encuentras, ese es). Una vez que se tiene, se intercambian
 (7<->8), lo que nos deja con

 1 2 8 9 7 6 5 4 3

 ya solo queda dar la vuelta por completo a la cola, para que quede en
 orden creciente de nuevo, pues esa es la permutación más pequeña
 desde el punto de vista lexicográfico:

 1 2 8 3 4 5 6 7 9

 En los casos pequeños, la cola puede ser de un sólo número y todo
 funciona igual. Por ejemplo, si tenemos 1 2 3 4, la cola de números
 decreciente más grande es simplemente el 4, que se intercambia con
 el 3, se invierte y queda 1 2 4 3.

 Para terminar de comprobar que funciona, esta es la secuencia completa
 con 1 2 3 4; puedes comprobar que con el procedimiento anterior
 van saliendo precisamente esos números...

 1 2 3 4 -> 1 2 4 3 -> 1 4 2 3 -> 1 4 3 2 ->
 2 1 3 4 -> 2 1 4 3 -> 2 3 1 4 -> 2 3 4 1 ->
 2 4 1 3 -> 2 4 3 1 -> 3 1 2 4 -> 3 1 4 2 ->
 3 2 1 4 -> 3 2 4 1 -> 3 4 1 2 -> 3 4 2 1 ->
 4 1 2 3 -> 4 1 3 2 -> 4 3 1 2 -> 4 3 2 1

 Evidentemente el procedimiento tiene que tener el cuidado suficiente
 para que si el array está vacío o tiene sólo un elemento no se haga
 nada etc.

 Una explicación detallada, aquí http://wordaligned.org/articles/next-permutation

 Y una implementación del next_permutation:

 template<typename Iter>
bool next_permutation(Iter first, Iter last)
{
    if (first == last)
        return false;
    Iter i = first;
    ++i;
    if (i == last)
        return false;
    i = last;
    --i;

    for(;;)
    {
        Iter ii = i;
        --i;
        if (*i < *ii)
        {
            Iter j = last;
            while (!(*i < *--j))
            {}
            std::iter_swap(i, j);
            std::reverse(ii, last);
            return true;
        }
        if (i == first)
        {
            std::reverse(first, last);
            return false;
        }
    }
}



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
	if (line == "#")
		return false;

	if (next_permutation(line.begin(), line.end()))
		copy(line.begin(), line.end(), ostream_iterator<char>(cout));
	else
		cout << "No Successor";

	cout << endl;
	return true;

}

int main() {
  /*
	int v[] = { 1, 2, 7, 9, 8, 6, 5, 4, 3 };
	next_permutation(v, v + sizeof(v)/sizeof(int));
	copy(v, v + sizeof(v)/sizeof(int), ostream_iterator<int>(cout, " "));

	return 0;
  */
	while (resuelve())
		;

	return 0;
}
