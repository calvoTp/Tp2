/*
 * Juego.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "Juego.h"

Juego::Juego(string direccionDelArchivo) {

	Archivo archivo(direccionDelArchivo);

	cantidadDeTableros = archivo.cantidadDeTableros();
	estado = EN_EJECUCION;
	celulasVivas = 0;
	celulasNacidasUltimoTurno = 0;
	celulasMuertasUltimoTurno = 0;
	totalCelulasNacidas = 0;
	totalCelulasMuertas = 0;
	promedioCelulasNacidas = 0;
	promedioCelulasMuertas = 0;
	turnosJugados = 0;
	turnosCongelados = 0;

	tablero = new Tablero[cantidadDeTableros];

	for (unsigned int i = 0; i < cantidadDeTableros; i++) {
		tablero[i].inicializarTablero(archivo.nombreDelTablero(i), archivo.filasDelTablero(i), archivo.columnasDelTablero(i));
	}
}

void Juego::mostrarTablero(int posicion) {
	tablero[posicion].mostrarTablero();
}

Juego::~Juego() {
	delete[]tablero;
}

