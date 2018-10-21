/*
 * tablero.h
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#ifndef TABLERO_H_
#define TABLERO_H_

#include <iostream>
#include "juego.hpp"
using namespace std;


class Tablero {

private:
	char** tablero;
	int filas, columnas;

public:
	//inicializa el valor de todas las celulas como muertas
	Tablero(int, int);

	//void actualizarTablero(int, int);

	void mostrarTablero();

	~Tablero();
};

#endif /* TABLERO_H_ */
