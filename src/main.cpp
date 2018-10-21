/*
 * main.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include <iostream>
#include "tablero.h"
#include <fstream>
using namespace std;

int main() {

	ifstream archivo;
	string direccion = "datos/archivo";
	string queLeo;

	archivo.open(direccion.c_str());

	archivo >> queLeo;

	while (queLeo == "Tablero") {
		string nombreTablero;
		int filas;
		int columnas;

		archivo >> nombreTablero;
		archivo >> filas;
		archivo >> columnas;
		archivo >> queLeo;

		cout << nombreTablero << "  " << filas << " " << columnas << endl;
	}

	while (queLeo == "Portal") {

		string tableroPertenecePortal;
		int xCoordenadaPortal;
		int yCoordenadaPortal;
		string tipoPortal;

		archivo >> tableroPertenecePortal;
		archivo >> xCoordenadaPortal;
		archivo >> yCoordenadaPortal;
		archivo >> tipoPortal;
		archivo >> queLeo;

		cout << tableroPertenecePortal << "  " << xCoordenadaPortal << " " << yCoordenadaPortal << " " << tipoPortal << endl;
	}


	while (queLeo == "Parcela" && !archivo.eof()) {
		string tableroPerteneceParcela;
		int xCoordenadaParcela;
		int yCoordenadaParcela;
		int rojo, verde, azul;
		float natalidad, mortalidad;

		archivo >> tableroPerteneceParcela;
		archivo >> xCoordenadaParcela;
		archivo >> yCoordenadaParcela;
		archivo >> rojo;
		archivo >> verde;
		archivo >> azul;
		archivo >> natalidad;
		archivo >> mortalidad;
		archivo >> queLeo;

		cout << tableroPerteneceParcela << "  " << xCoordenadaParcela << " " << yCoordenadaParcela << rojo << verde << azul << natalidad << mortalidad << endl;
	}

	return 0;
}


