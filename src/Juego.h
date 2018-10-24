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
#include "coordenada.h"
#include "Celula.h"
#include "Jugador.h"

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

	void consultarActivacionDeOtraCelula(char&);

public:
	Juego(string);

	void agregarCelulasVivas(int);


	void imagenBMP(int);

	void mostrarTablero(int);

	void setEstado(short int);

	short int getEstado();

	~Juego();

};

#endif /* SRC_JUEGO_H_ */
