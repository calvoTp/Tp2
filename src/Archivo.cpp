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
	mortalidadesParcelas = NULL;
	natalidadesParcelas = NULL;
	columnasTableros = NULL;
	filasTableros = NULL;
	nombresTableros = NULL;
	rojo = NULL;
	verde = NULL;
	azul = NULL;
}


void Archivo::obtenerTableros() {
	int i = 0;
	archivo.open(direccion.c_str());
	archivo >> queLeo;

	while (queLeo == "Tablero" && !archivo.eof()) {
		totalTableros++;
		getline(archivo, queLeo);
		archivo >> queLeo;
	}

	archivo.clear(); //sin esto falla todo, tiene que ver con el eof
	archivo.seekg(0, ios::beg); //vuelvo al principio del archivo

	nombresTableros = new string[totalTableros];
	filasTableros = new int[totalTableros];
	columnasTableros = new int[totalTableros];
	archivo >> queLeo;

	while (queLeo == "Tablero" && !archivo.eof()) {
		archivo >> nombresTableros[i];
		archivo >> filasTableros[i];
		archivo >> columnasTableros[i];
		archivo >> queLeo;
		i++;
	}
	archivo.close();
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
		archivo >> queLeo;
		obtenerTableros();
		leerPortales();
		leerParcelas();
}


void Archivo::obtenerParcelas(string nombreDelTablero, int totalParcelas) {

	string tableroPerteneceParcela;
	int xCoordenadaParcela;
	int yCoordenadaParcela;
	int i = 0;

	archivo.open(direccion.c_str());

	natalidadesParcelas = new float[totalParcelas];
	mortalidadesParcelas = new float[totalParcelas];
	rojo = new int[totalParcelas];
	verde = new int[totalParcelas];
	azul = new int[totalParcelas];

	archivo >> queLeo;

	while (!archivo.eof()) {
		if (queLeo == "Parcela") {
			archivo >> tableroPerteneceParcela;
			archivo >> xCoordenadaParcela;
			archivo >> yCoordenadaParcela;
			if (tableroPerteneceParcela == nombreDelTablero) {
				archivo >> rojo[i];
				archivo >> verde[i];
				archivo >> azul[i];
				archivo >> natalidadesParcelas[i];
				archivo >> mortalidadesParcelas[i];
				i++;
			}
		}
		archivo >> queLeo;
	}

	archivo.close();
}



float Archivo::natalidadParcela(int posicion) {
	return natalidadesParcelas[posicion];
}

float Archivo::mortalidadParcela(int posicion) {
	return mortalidadesParcelas[posicion];
}

int Archivo::rojoParcela(int posicion) {
	return rojo[posicion];
}

int Archivo::verdeParcela(int posicion) {
	return verde[posicion];
}

int Archivo::azulParcela(int posicion) {
	return azul[posicion];
}



unsigned int Archivo::cantidadDeTableros(){
	return totalTableros;
}

string Archivo::nombreDelTablero(int posicion) {
	return nombresTableros[posicion];
}

unsigned int Archivo::filasDelTablero(int posicion) {
	return filasTableros[posicion];
}

unsigned int Archivo::columnasDelTablero(int posicion) {
	return columnasTableros[posicion];
}

Archivo::~Archivo() {
	delete[]nombresTableros;
	delete[]filasTableros;
	delete[]columnasTableros;
	delete[]natalidadesParcelas;
	delete[]mortalidadesParcelas;
	delete[]rojo;
	delete[]verde;
	delete[]azul;
}
