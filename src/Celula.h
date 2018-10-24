
/*
 * Celula.h
 *
 *  Created on: 21 oct. 2018
 *      Author: nicolas
 */

#ifndef SRC_CELULA_H_
#define SRC_CELULA_H_
#include "juego.hpp"
#include "juego.hpp"


class Celula {

private:
	char estado;

public:

	Celula();

	char obtenerEstado();

	void nacer();

	//unsigned int analizarCelulasVivasAdyacentes(Tablero);
	~Celula();
};

#endif /* SRC_CELULA_H_ */

