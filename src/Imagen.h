/*
* coordenada.hpp
*
*  Created on: Sep 2, 2018
*      Author: marcos
*/

#ifndef COORDENADA_HPP_
#define COORDENADA_HPP_

#include <iostream>

#include "Constantes.hpp"

struct Coordenada {
  int fila;
  int columna;
};

//valida que la posicion del tablero exista
bool validarCoordenada(Coordenada coordenadaCelula, int filaASumar, int columnaASumar);

//procesa el ingreso de las coordenadas por parte del usuario
void ingresarCoordenada(Coordenada* coordenada);


#endif /* COORDENADA_HPP_ */
