#include "Archivo.h"

Archivo::Archivo(string direccionDelArchivo) {
	direccion = direccionDelArchivo;

	archivo.open(direccion.c_str());
	leerDatosDelArchivo();
	archivo.clear(); //sin esto falla todo, tiene que ver con el eof
	archivo.seekg(0, ios::beg); //vuelvo al principio del archivo

	nombresTableros = new string[totalTableros];
	filasTableros = new int[totalTableros];
	columnasTableros = new int[totalTableros];

	existeArray = true;
	leerDatosDelArchivo();

	archivo.close();
}

void Archivo::leerTableros() {
	string nombreTablero;
	int filas;
	int columnas;
	int i = 0;
	totalTableros = 0;

	while (queLeo == "Tablero" && !archivo.eof()) {

		totalTableros++;
		archivo >> nombreTablero;
		archivo >> filas;
		archivo >> columnas;
		archivo >> queLeo;

		if (existeArray) {
			nombresTableros[i] = nombreTablero;
			filasTableros[i] = filas;
			columnasTableros[i] = columnas;
			i++;
		}
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
		archivo >> queLeo;
		leerTableros();
		leerPortales();
		leerParcelas();
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
}
