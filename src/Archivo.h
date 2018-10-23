/*
 * Archivo.h
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#ifndef SRC_ARCHIVO_H_
#define SRC_ARCHIVO_H_

#include <fstream>
#include <iostream>
using namespace std;

class Archivo {

private:
	ifstream archivo;
	string direccion,queLeo;

	string* nombresTableros;
	int* filasTableros;
	int* columnasTableros;

	int* rojo;
	int* verde;
	int* azul;

	float* natalidadesParcelas;
	float* mortalidadesParcelas;

	unsigned int totalTableros;

	void leerDatosDelArchivo();
	void leerTableros();
	void leerPortales();
	void leerParcelas();

public:
	Archivo(string);

	void obtenerTableros();
	void obtenerParcelas(string, int);

	int rojoParcela(int);
	int verdeParcela(int);
	int azulParcela(int);

	float natalidadParcela(int);
	float mortalidadParcela(int);


	unsigned int cantidadDeTableros();

	string nombreDelTablero(int);

	unsigned int filasDelTablero(int);

	unsigned int columnasDelTablero(int);

	~Archivo();
};

#endif /* SRC_ARCHIVO_H_ */
