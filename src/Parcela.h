/*
 * Parcela.h
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */
#include "EasyBMP.h"

#ifndef PARCELA_H_
#define PARCELA_H_

class Parcela {
private:
int tasaDeNatalidad;
int tasaDeMortalidad;
bool iniciada;
RGBApixel color;



public:
	Parcela();
	int obtenerTasaMortalidad();
	int ObtenerTasaNatalidad();
	void setear(RGBApixel colorAsignar,int ,int );
	RGBApixel obtenerColor();
	bool estaViva();
	virtual ~Parcela();
};

#endif /* PARCELA_H_ */
