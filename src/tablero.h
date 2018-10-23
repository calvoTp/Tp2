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
	string nombre;
	int filas, columnas;

public:
	//inicializa el valor de todas las celulas como muertas
	Tablero();

	//void actualizarTablero(int, int);

	void inicializarTablero(string, int, int);

	void mostrarTablero();

	void inicializarPortal();

	~Tablero();
};

#endif /* TABLERO_H_ */
