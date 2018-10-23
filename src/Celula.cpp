/*
 * Celula.cpp
 *
 *  Created on: 21 oct. 2018
 *      Author: nicolas
 */

#include "Celula.h"

Celula::Celula(unsigned int fila,unsigned int columna) {
	this->fila = fila;
	this->columna = columna;
	this->estado = CELULA_VIVA;
}


void Celula::posicionarCelula(Tablero tablero){
	tablero[fila][columna] = estado;
}

void Celula::eliminarCelula(Tablero tablero){
	tablero[fila][columna] = CELULA_MUERTA;
}

unsigned int Celula::analizarCelulasVivasAdyacentes(Tablero tablero){

	unsigned int celulasVivasAdyacentes = 0;
	Coordenada coordenadaCelula;
	coordenadaCelula.fila = fila;
	coordenadaCelula.columna = columna;
	  for (int filaASumar = -1; filaASumar < 2; filaASumar++) {
	    for (int columnaASumar = -1; columnaASumar < 2; columnaASumar++) {

	      if (filaASumar != 0 || columnaASumar != 0) { //CONDICION PARA QUE NO SE SUME A SI MISMA
	        if (validarCoordenada(coordenadaCelula, filaASumar, columnaASumar)) {
	          if (tablero[fila + filaASumar][columna + columnaASumar] == CELULA_VIVA) {
	            celulasVivasAdyacentes++;
	          }
	        }
	      }

	    }
	  }
	  return celulasVivasAdyacentes;
}


Celula::~Celula() {
	// TODO Auto-generated destructor stub
}


