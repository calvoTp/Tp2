/*
 * Parcela.h
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */
#ifndef PARCELA_H_
#define PARCELA_H_

#include "EasyBMP.h"
#include "iostream"
#include "juego.hpp"
using namespace std;

class Parcela {

private:
	char estado;
	float tasaDeNatalidad;
	float tasaDeMortalidad;
	bool iniciada;
	RGBApixel color;

public:
	Parcela();

	float obtenerTasaMortalidad();
	float obtenerTasaNatalidad();

	void inicializarParcela(float ,float, int, int, int);
	char mostrarEstadoParcela();
	//void setear(RGBApixel colorAsignar,int ,int );
	RGBApixel obtenerColor();
	virtual ~Parcela();
};

#endif /* PARCELA_H_ */
