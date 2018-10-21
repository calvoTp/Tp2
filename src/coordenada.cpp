/*
 * coordenada.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "coordenada.h"


Coordenada::Coordenada(int fila, int columna) {
	this->fila = fila;
	this->columna = columna;
}

bool Coordenada::validarCoordenada(Coordenada coordenada, int filaASumar, int columnaASumar) {
	  bool valorRetorno = false;
	  if ((coordenada.fila + filaASumar >= 0) && (coordenada.fila + filaASumar < FILAS_DEL_TABLERO)) {
	    if ((coordenada.columna + columnaASumar >= 0) && (coordenada.columna + columnaASumar < COLUMNAS_DEL_TABLERO)) {
	      valorRetorno = true;
	    }
	  }
	  return valorRetorno;
}

void Coordenada::ingresarCoordenada(Coordenada* coordenada) {
  bool esValida = true;
  do {
    if (!esValida) {
      cout << endl << "Por favor, ingrese coordenadas validas" << endl;
    }
    cout << "\n\nIngrese la fila (1 a 20): ";
    cin >> coordenada->fila;
    (coordenada->fila) -= 1;
    cout << "Ingrese la columna (1 a 80): ";
    cin >> coordenada->columna;
    (coordenada->columna) -= 1;
    esValida = validarCoordenada(*coordenada, 0, 0);
  } while(!esValida);
}

