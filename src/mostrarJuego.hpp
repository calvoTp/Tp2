/*
 * mostrarJuego.hpp
 *
 *  Created on: Sep 8, 2018
 *      Author: marcos
 */

#ifndef MOSTRARJUEGO_HPP_
#define MOSTRARJUEGO_HPP_

#include <iostream>
#include "juego.hpp"

//muestra por pantalla el tablero de juego, que esta compuesto por las celulas
void mostrarTablero(Tablero tablero);

//muestra por pantalla las estadisticas generales de las celulas a lo largo de la partida
void mostrarEstadisticasCelulas(Juego juego);

//muestra por pantalla todos los datos del juego mediante el llamado a las otras funciones
void mostrarJuego(Juego juego);


#endif /* MOSTRARJUEGO_HPP_ */
