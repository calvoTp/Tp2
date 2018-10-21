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
	char tablero[FILAS_DEL_TABLERO][COLUMNAS_DEL_TABLERO];
	char tableroActualizado[FILAS_DEL_TABLERO][COLUMNAS_DEL_TABLERO];
	int filas, columnas;

public:
	//inicializa el valor de todas las celulas como muertas
	Tablero(int, int);

	void actualizarTablero(int, int);

	void mostrarTablero();
};
#endif /* TABLERO_H_ */
