/*
 * coordenada.h
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#ifndef COORDENADA_H_
#define COORDENADA_H_

#include <iostream>
#include <juego.hpp>
using namespace std;

class Coordenada {

private:
	  int fila;
	  int columna;

public:
	  Coordenada(int, int);

	  //valida que la posicion del tablero exista
	  bool validarCoordenada(Coordenada, int, int);

	  //procesa el ingreso de las coordenadas por parte del usuario
	  void ingresarCoordenada(Coordenada*);
};

#endif /* COORDENADA_H_ */
