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
	string direccion;
	string queLeo;

	void leerTableros();
	void leerPortales();
	void leerParcelas();

public:
	Archivo(string);

	void leerDatosDelArchivo();
};

#endif /* SRC_ARCHIVO_H_ */
