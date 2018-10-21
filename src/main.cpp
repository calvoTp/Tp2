/*
 * main.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include <iostream>
#include "Juego.h"
#include "tablero.h"
#include "Archivo.h"
using namespace std;

int main() {

	Juego juegoDeLaVida("datos/archivo");

	Tablero tablero(5,5);

	juegoDeLaVida.mostrarTablero();


	return 0;
}


