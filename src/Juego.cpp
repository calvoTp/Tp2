/*
 * Juego.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "Juego.h"

Juego::Juego(string direccionDelArchivo) {
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

	Archivo archivo(direccionDelArchivo);
	archivo.leerDatosDelArchivo();

	tablero = new Tablero[archivo.cantidadDeTableros()];
}

void Juego::mostrarTablero() {
	tablero[1].mostrarTablero();
}

Juego::~Juego() {
	delete[]tablero;
}

