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
#include "Parcela.h"
#include "Archivo.h"
#include "EasyBMP.h"
#include "EasyBMP_BMP.h"
#include "EasyBMP_DataStructures.h"
#include "EasyBMP_VariousBMPutilities.h"
using namespace std;


class Tablero {

private:
	Parcela** tablero;
	string nombre;
	int filas, columnas;

public:
	//inicializa el valor de todas las celulas como muertas
	Tablero();

	//void actualizarTablero(int, int);

	void inicializarTablero(string, int, int, string);

	void imagenBMP();

	void mostrarTablero();

	~Tablero();
};

#endif /* TABLERO_H_ */
