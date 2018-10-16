/*
* actualizarJuego.hpp
*
*  Created on: Sep 8, 2018
*      Author: marcos
*/

#ifndef ACTUALIZARJUEGO_HPP_
#define ACTUALIZARJUEGO_HPP_

#include "juego.hpp"
#include "coordenada.hpp"
#include "decidirJuego.hpp"
#include "mostrarJuego.hpp"
#include "inicializarJuego.hpp"

//copia los valores del tablero actualizado al tablero principal de juego
void actualizarTablero(Tablero tablero, Tablero tableroActualizado, int fila, int columna);

//actualiza la cantidad de celulas que muerieron y nacieron en el ultimo turno jugado (no el total)
void actualizarUltimosNacimientosYMuertes(Juego* juego, Tablero tableroActualizado, int fila, int columna);

//actualiza la cantidad total de celulas vivas presentes en el tablero
void actualizarCelulasVivas(Juego* juego, int fila, int columna);

//actualiza el total de celulas muertas y nacidas en la partida, a la vez que el promedio de estas y si el juego se ha congelado
void actualizarEstadisticasCelulas(Juego* juego);

//se encarga de analizar cual sera el estado de la celula en el siguiente turno mediante el conteo de las celulas vivas adyacentes
int analizarCelulasVivasAdyacentes(Tablero tablero, Coordenada coordenadaCelula);

//en base al resultado de analizarEstadoDeCelula, actualiza en los datos del juego el estado correspondiente de cada celula
void actualizarEstadoDeCelula(Tablero tablero, Tablero tableroActualizado, Coordenada coordenadaCelula, int celulasVivasAdyacentes);

//analiza el estado que deberan tener todas las celulas del juego en el siguiente turno
void analizarEstadoDeCelula(Tablero tablero, Tablero tableroActualizado);

//se encarga de la la actualizacion general de la partida, mediante el llamado a otras funciones
void actualizarJuego(Juego* juego, Tablero tableroActualizado);

//actualiza, en base a la previa decision del usuario, el estado del juego (si continuara, se reiniciara o finalizara)
void actualizarEstadoDeJuego(short int* estadoDelJuego, char decisionAvanzarTurno);


#endif /* ACTUALIZARJUEGO_HPP_ */
