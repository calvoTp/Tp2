/*
 * coordenada.h
 *
 *  Created on: Oct 23, 2018
 *      Author: marcos
 */

#ifndef SRC_COORDENADA_H_
#define SRC_COORDENADA_H_

#include <iostream>
#include "juego.hpp"
using namespace std;

class Coordenada {
private:
	  int fila;
	  int columna;

public:
	  //valida que la posicion del tablero exista
	  bool validarCoordenada(int filaASumar, int columnaASumar);

	  //procesa el ingreso de las coordenadas por parte del usuario
	  void ingresarCoordenada();

	  int obtenerFila();

	  int obtenerColumna();
};

#endif /* SRC_COORDENADA_H_ */
