#ifndef TABLERO_H_
#define TABLERO_H_

#include <iostream>

#include "Constantes.hpp"
using namespace std;


class Tablero {

private:
	char** tablero;
	string nombre;
	int filas, columnas;

public:
	//inicializa el valor de todas las celulas como muertas
	Tablero();

	//void actualizarTablero(int, int);

	void inicializarTablero(string, int, int);

	void mostrarTablero();

	~Tablero();
};

#endif
