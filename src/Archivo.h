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
	bool existeArray = false;

	unsigned int totalTableros;

	void leerDatosDelArchivo();
	void leerTableros();
	void leerPortales();
	void leerParcelas();

public:
	Archivo(string);

	unsigned int cantidadDeTableros();

	string nombreDelTablero(int);

	unsigned int filasDelTablero(int);

	unsigned int columnasDelTablero(int);

	~Archivo();
};

#endif /* SRC_ARCHIVO_H_ */
