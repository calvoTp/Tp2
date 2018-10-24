/*
 * coordenada.cpp
 *
 *  Created on: Oct 23, 2018
 *      Author: marcos
 */

#include "coordenada.h"

bool Coordenada::validarCoordenada(int filaASumar, int columnaASumar) {
  bool valorRetorno = false;
  if ((fila + filaASumar >= 0) && (fila + filaASumar < FILAS_DEL_TABLERO)) {
    if ((columna + columnaASumar >= 0) && (columna + columnaASumar < COLUMNAS_DEL_TABLERO)) {
      valorRetorno = true;
    }
  }
  return valorRetorno;
}

void Coordenada::ingresarCoordenada() {
	bool esValida = true;
    do {
		cout << "\n\nIngrese la fila (1 a 20): ";
		cin >> fila;
		fila -= 1;
		cout << "Ingrese la columna (1 a 80): ";
		cin >> columna;
		columna -= 1;
		esValida = validarCoordenada(0, 0);
    } while(!esValida);
}

int Coordenada::obtenerFila() {
	return fila;
}

int Coordenada::obtenerColumna() {
	return columna;
}

