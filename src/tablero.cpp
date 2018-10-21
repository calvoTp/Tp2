/*
 * tablero.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "tablero.h"

Tablero::Tablero(int filas, int columnas) {
	this->filas = filas;
	this->columnas = columnas;

	for (int i = 0; i < this->filas; i++) {
    for (int j = 0; j < this->columnas; j++) {
      tablero[i][j] = CELULA_MUERTA;
    }
  }
}

void Tablero::actualizarTablero(int fila, int columna) {
  tablero[fila][columna] = tableroActualizado[fila][columna];
}

void Tablero::mostrarTablero() {
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cout << tablero[i][j] << " ";
    }
    cout << endl << endl;
  }
}
