/*
 * inicializarJuego.hpp
 *
 *  Created on: Sep 8, 2018
 *      Author: marcos
 */

#ifndef INICIALIZARJUEGO_HPP_
#define INICIALIZARJUEGO_HPP_

#include "juego.hpp"
#include "coordenada.hpp"
#include "decidirJuego.hpp"

//altera el valor de la celula en el tablero, cambiando su estado de muerta a viva
void activarCelula(Tablero tablero, Coordenada coordenadaCelula);

//inicializa el valor de todas las celulas como muertas
void inicializarTablero(Tablero tablero);

//le permite al usuario determinar cuales celulas estaran vivas al comienzo de la partida
void inicializarCelulasVivas(Juego* juego);

//inicializa los datos de la partida, tanto de las estadisticas como del tablero
void inicializarJuego(Juego* juego);



#endif /* INICIALIZARJUEGO_HPP_ */
