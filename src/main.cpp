/*
 * main.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include <iostream>
#include "tablero.h"
#include "Archivo.h"
using namespace std;

int main() {

	Archivo archivo("datos/archivo");
	Tablero tablero(50,50);

	tablero.mostrarTablero();

	archivo.leerDatosDelArchivo();


	return 0;
}


