/*
 * Juego.h
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#ifndef SRC_JUEGO_H_
#define SRC_JUEGO_H_

#include <iostream>
#include "juego.hpp"
#include "Archivo.h"
#include "tablero.h"
using namespace std;

class Juego {

private:
	Tablero* tablero;
	unsigned int cantidadDeTableros;
	unsigned int celulasVivas;
	unsigned int celulasMuertasUltimoTurno, celulasNacidasUltimoTurno;
	unsigned int totalCelulasMuertas, totalCelulasNacidas;
	float promedioCelulasNacidas, promedioCelulasMuertas;
	unsigned int turnosJugados, turnosCongelados;
	short int estado;

public:
	Juego(string);

	void imagenBMP(int);

	void mostrarTablero(int);

	~Juego();

};

#endif /* SRC_JUEGO_H_ */
