/*
 * Archivo.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "Archivo.h"

Archivo::Archivo(string direccionDelArchivo) {
	direccion = direccionDelArchivo;
	totalTableros = 0;
}

void Archivo::leerTableros() {
	string nombreTablero;
	int filas;
	int columnas;

	while (queLeo == "Tablero" && !archivo.eof()) {
		totalTableros++;
		archivo >> nombreTablero;
		archivo >> filas;
		archivo >> columnas;
		archivo >> queLeo;
	}
}

void Archivo::leerPortales() {
	string tableroPertenecePortal;
	int xCoordenadaPortal;
	int yCoordenadaPortal;
	string tipoPortal;

	while (queLeo == "Portal" && !archivo.eof()) {
		archivo >> tableroPertenecePortal;
		archivo >> xCoordenadaPortal;
		archivo >> yCoordenadaPortal;
		archivo >> tipoPortal;
		archivo >> queLeo;
	}
}

void Archivo::leerParcelas() {
	string tableroPerteneceParcela;
	int xCoordenadaParcela;
	int yCoordenadaParcela;
	int rojo, verde, azul;
	float natalidad, mortalidad;

	while (queLeo == "Parcela" && !archivo.eof()) {
		archivo >> tableroPerteneceParcela;
		archivo >> xCoordenadaParcela;
		archivo >> yCoordenadaParcela;
		archivo >> rojo;
		archivo >> verde;
		archivo >> azul;
		archivo >> natalidad;
		archivo >> mortalidad;
		archivo >> queLeo;
	}
}

void Archivo::leerDatosDelArchivo() {
		archivo.open(direccion.c_str());
		archivo >> queLeo;
		leerTableros();
		leerPortales();
		leerParcelas();
		archivo.close();

}

unsigned int Archivo::cantidadDeTableros(){
	return totalTableros;
}
