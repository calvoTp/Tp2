/*
 * tablero.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "tablero.h"

/*
void Tablero::actualizarTablero(int fila, int columna) {
  tablero[fila][columna] = tableroActualizado[fila][columna];
}*/
Tablero::Tablero() {
	tablero = NULL;
	filas = 0;
	columnas = 0;
}

void Tablero::inicializarTablero(string nombre, int filas, int columnas, string direccionDelArchivo) {
	this->nombre = nombre;
	this->filas = filas;
	this->columnas = columnas;
	int n = 0;
	Archivo archivo(direccionDelArchivo);

	tablero = new Parcela*[filas];
	for (int i = 0; i < filas; i++) {
		tablero[i] = new Parcela[columnas];
	}

	archivo.obtenerParcelas(nombre, filas*columnas);//procesa y almacena los datos de las parcelas que pertenecen al tablero

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			tablero[i][j].inicializarParcela(archivo.natalidadParcela(n), archivo.mortalidadParcela(n),
											archivo.rojoParcela(n), archivo.verdeParcela(n), archivo.azulParcela(n));
			n++;
		}
	}
}

void Tablero::naceCelula(Coordenada coordenadaCelula) {
	  tablero[coordenadaCelula.obtenerFila()][coordenadaCelula.obtenerColumna()].naceCelula();
}

void Tablero::imagenBMP() {
	int i, j, x, y;
	BMP Imagen;
	RGBApixel color;

	Imagen.SetSize(columnas*20, filas*20);

	cout << Imagen.TellWidth() << " x " << Imagen.TellHeight() << " at "
	<< Imagen.TellBitDepth() << " bpp" << endl;

	for (i = 0; i < filas; i++) {
		for (j = 0; j < columnas; j++) {

			for (x = 0; x < 20; x++) {
				for (y = 0; y < 20; y++) {
					color = tablero[i][j].obtenerColor();
					Imagen(20*j + y, 20*i + x) -> Red = color.Red;
					Imagen(20*j + y, 20*i + x) -> Green = color.Green;
					Imagen(20*j + y, 20*i + x) -> Blue = color.Blue;
				}
			}

		}
	}

	Imagen.WriteToFile( "/home/marcos/Desktop/prueba.bmp" );

}

void Tablero::mostrarTablero() {
  for (int i = 0; i < filas; i++) {
	  for (int j = 0; j < columnas; j++) {
    	cout << tablero[i][j].mostrarEstadoParcela() << " ";
	  }
    cout << endl << endl;
  }
  cout << nombre;
}

Tablero::~Tablero() {
	for (int i = 0; i < this->filas; i++) {
		delete[]tablero[i];
	}
	delete[]tablero;
}
