/*
 * Imagen.h
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */
#include <string>
#include "Parcela.h"

using namespace std;


unsigned int const ANCHO = 640;     // ANCHO del mapa
unsigned int const ALTO  = 800;     // ALTO  del mapa
unsigned int const DEPTH = 32;      // Profundidad del color
unsigned int const PIXEL=20;

#ifndef SRC_IMAGEN_H_
#define SRC_IMAGEN_H_

class Imagen {
private:
	Parcela* celulas;
	BMP mapa;
	int totalFilas;
	int totalColumnas;
public:
	/*Inicializa La Imagen
	 * pre:-
	 * post:Crea un mapa(imagen BMP) vacío
	 */
	Imagen(Parcela*,int,int);
	/* Actualiza el estado del mapa
	 * pre:-
	 * post:el mapa queda actualizado segun las parcelas
	 */
	void actualizar();
	/*Imprime el estado del BMP
	 * pre:-
	 * post:crea o reescribe un archivo .BMP con la imagen
	 */
	void imprimir(const char[]);
	virtual ~Imagen();
};

#endif /* SRC_IMAGEN_H_ */
