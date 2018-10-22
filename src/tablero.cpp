/*
 * tablero.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "tablero.h"

/*
void Tablero::actualizarTablero(int fila, int columna) {
  tablero[fila][columna] = tableroActualizado[fila][columna];
}*/
Tablero::Tablero() {
	tablero = NULL;
	filas = 0;
	columnas = 0;
}

void Tablero::inicializarTablero(string nombre, int filas, int columnas) {
	this->nombre = nombre;
	this->filas = filas;
	this->columnas = columnas;

	tablero = new char*[filas];
	for (int i = 0; i < filas; i++) {
		tablero[i] = new char[columnas];
		for (int j = 0; j < columnas; j++) {
			tablero[i][j] = CELULA_MUERTA;
		}
	}
}

void Tablero::mostrarTablero() {
  for (int i = 0; i < filas; i++) {
	  for (int j = 0; j < columnas; j++) {
    	cout << tablero[i][j] << " ";
	  }
    cout << endl << endl;
  }
  cout << nombre;
}

Tablero::~Tablero() {
	for (int i = 0; i < this->filas; i++) {
		delete[]tablero[i];
	}
	delete[]tablero;
}
