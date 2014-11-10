/*

#### Jenny Hernández ####

*/
#include <iostream>

using namespace std;

void leerLinea(int n, char ar[]);
void soloAbajo(char array1[], char array2[], int n);
void arribaYAbajo(char array1[], char array2[], char array3[], int n);
void soloArriba(char array1[], char array2[], int n);
void inicializar (char array1[], char array2[], char array3[]);

int main()
{
	int n, m;
	const int TAM = 101;
	char array1[TAM], array2[TAM], array3[TAM];
	int cont = 0;

	int contadorTotal = 1;

	cin >> n >> m;

	while (n != 0 && m != 0)
	{
		inicializar(array1, array2, array3);

		cout << "Field #" << contadorTotal << ":" << endl;
		cont = 0;
		cont++;
		leerLinea(m, array3); // lee la primera línea del juego
		
		if (cont == 1 && n > 1) {
			cont++;
			leerLinea(m, array2);
			
			// tratamos la línea #sóloAbajo
			soloArriba(array2, array3, m); // de esta forma sacamos la primera línea del juego ya descubierta
		}

		else if (cont == 1 && n == 1) // sólo hay una línea en el juego
		{
			for (int i = 0; i < m; i++) {
				int minas = 0;
				if (array3[i] == '*') cout << "*";
				else if (array3[i] == '.') {
					// contamos las minas
					if (array3[i-1] == '*') minas++; 
					if (array3[i+1] == '*') minas++;
		
					cout << minas;
				}
			} 
			cout << endl;
		}

		if (cont > 1 && cont < n) // está por el medio, no ha llegado a la última fila
		{
			while (cont < n) {
				cont++;
				if (cont % 3 == 0) {
					leerLinea(m, array1); // si estamos en la fila 3, 6, 9,...
					arribaYAbajo(array3, array2, array1, m);
				}

				else if ((cont - 1) % 3 == 0) {
					leerLinea(m, array3);
					arribaYAbajo(array2, array1, array3, m);
				}

				else if ((cont + 1) % 3 == 0) {
					leerLinea(m, array2);
					arribaYAbajo(array1, array3, array2, m);
				}
			}
		}

		if (cont > 1 && cont == n) // última fila de todas
		{
			cont++;
			if ((cont - 1) % 3 == 0) 
				soloArriba(array2, array1, m);

			else if ((cont + 1) % 3 == 0)
				soloArriba(array1, array3, m);
			

			else if (cont % 3 == 0)
				soloArriba(array3, array2, m);
		}

		cin >> n >> m;
		if (n != 0 && m != 0) cout << endl;
		contadorTotal++;
	}

	return 0;
}

void leerLinea(int n, char ar[]) {
	char a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ar[i] = a;
	}
}

void inicializar (char array1[], char array2[], char array3[]) {
	for (int i = 0; i < 101; i++) {
		array1[i] = 0; array2[i] = 0; array3[i] = 0;
	}

}

void soloAbajo(char array1[], char array2[], int n) // válido para la primera fila del juego
{
	for (int i = 0; i < n; i++) {
		int minas = 0;
		if (array1[i] == '*') cout << "*";
		else if (array1[i] == '.') {
			// contamos las minas
			if (array1[i-1] == '*') minas++; if (array1[i+1] == '*') minas++;
			if (array2[i-1] == '*') minas++; if (array2[i] == '*') minas++;
			if (array2[i+1] == '*') minas++;
		
			cout << minas;
		}
	}

	cout << endl;
}

void arribaYAbajo(char array1[], char array2[], char array3[], int n) // válido para las filas intermedias del juego
{
	for (int i = 0; i < n; i++) {
		int minas = 0;
		if (array2[i] == '*') cout << "*";
		else if (array2[i] == '.') {
			// contamos las minas 
			if (array1[i-1] == '*') minas++; if (array1[i+1] == '*') minas++; if (array1[i] == '*') minas++;
			if (array2[i-1] == '*') minas++; if (array2[i+1] == '*') minas++;
			if (array3[i-1] == '*') minas++; if (array3[i+1] == '*') minas++; if (array3[i] == '*') minas++;
		
			cout << minas;
		}
	}
	cout << endl;
}

void soloArriba(char array1[], char array2[], int n) // válido para la última fila del juego
	// array1 es la fila 1 y array2 es la fila 2
{
	for (int i = 0; i < n; i++) {
		int minas = 0;
		if (array2[i] == '*') cout << "*";
		else if (array2[i] == '.') {
			// contamos las minas
		
			if (array2[i-1] == '*') minas++; if (array2[i+1] == '*') minas++;
			if (array1[i-1] == '*') minas++; if (array1[i] == '*') minas++; if (array1[i+1] == '*') minas++;
		
			cout << minas;
		}
	}

	cout << endl;
}