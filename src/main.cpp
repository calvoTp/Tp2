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

	juegoDeLaVida.mostrarTablero(0);

	return 0;
}


