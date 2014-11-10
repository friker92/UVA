/*
Author: luisma
Date: 23/09/12
ID-title: 10189 - Minesweeper
*/
#include <iostream>
using namespace std;

//definiciones y estructuras

typedef unsigned short int usint;

/* Struct que representa el tablero del juego. Está compuesto por una matriz
de alto y ancho dos entradas más grandes para evitar salir del rango.
El metodo ponMina se encarga de sumar un punto a sus celdas de alrededor.
Una casila vacía está representada por 0 y una mina por 9 o más(ya que como mucho una
celda puede tener 8 puntos) */
struct matriz {
	matriz(int alto, int ancho){
		this->alto=alto+2;
		this->ancho=ancho+2;
		
		this->tablero = new usint* [this->alto];
		for(int i=0; i<this->alto; i++) {
			(this->tablero)[i] = new usint[this->ancho];
		}

		for(int i=0; i<this->alto; i++) {
			for(int j=0; j<this->ancho; j++) {
				(this->tablero)[i][j]=0;
			}
		}
	} //constructora

	~matriz(){
		for(int i=0; i<this->alto; i++){
				delete[] (this->tablero)[i];
		}

		delete [] this->tablero;
	} //destructor

	void ponMina(int fila, int columna){
		(this->tablero)[fila+1][columna+1]=9; //marcamos la mina
	
		//sumamos 1 a los adyacentes
		this->tablero[fila][columna+1]++; //N
		this->tablero[fila+2][columna+1]++; //S
		this->tablero[fila+1][columna+2]++; //E
		this->tablero[fila+1][columna]++; //O
		
		this->tablero[fila][columna]++; //NO
		this->tablero[fila][columna+2]++; //NE

		this->tablero[fila+2][columna]++; //SO
		this->tablero[fila+2][columna+2]++; //SE

	} //pon mina

	void imprimeTablero(){
		for(int i=1; i<this->alto-1; i++){
			for(int j=1; j<this->ancho-1; j++) {
				if(this->tablero[i][j]>=9)
					cout << "*";
				else
					cout << this->tablero[i][j];
			}
			cout << endl;
		}
	} //imprimeTablero

	usint** tablero;
	usint ancho;
	usint alto;
}; //struct matriz

//variables globales
int numcasos=0;

/*
Todo el trabajo lo hace el struct.
Main solo se dedica a leer y rellenar el struct.
Luego lo manda imprimir y lo elimina
*/
int main(){
	int n,m;
	cin >> n >> m;
	while(n!=0 && m!=0){
		if(numcasos!=0) //OJO, esto es la culpa del WA
			cout << endl;
		numcasos++;

		matriz* tab =new matriz(n,m);
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				char aux;
				cin >> aux;

				if(aux=='*')
					tab->ponMina(i,j);
			}
		}

		cout << "Field #" << numcasos << ":" << endl;
		tab->imprimeTablero();

		delete tab;

		cin >> n >> m;
	}
	return 0;
} 




