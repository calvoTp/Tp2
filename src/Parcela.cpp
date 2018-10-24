/*
 * Parcela.cpp
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */

#include "Parcela.h"

Parcela::Parcela() {
	iniciada=false;
	tasaDeNatalidad=0;
	tasaDeMortalidad=0;

}

void Parcela::inicializarParcela(float natalidad, float mortalidad, int rojo, int verde, int azul) {

	tasaDeNatalidad = natalidad;
	tasaDeMortalidad = mortalidad;
	color.Red = rojo;
	color.Green = verde;
	color.Blue = azul;

}

float Parcela::obtenerTasaNatalidad() {
	return tasaDeNatalidad;
}

char Parcela::mostrarEstadoParcela() {
	return celula.obtenerEstado();
}

RGBApixel Parcela::obtenerColor() {
	return color;
}


void Parcela::naceCelula() {
	celula.nacer();
}

Parcela::~Parcela() {
	// TODO Auto-generated destructor stub
}
/*
RGBApixel Parcela::obtenerColor() {
	return color;
}

void Parcela::setear(RGBApixel colorAsignar,int tasaNat,int tasaMor) {
	color.Green=colorAsignar.Green;
	color.Blue=colorAsignar.Blue;
	color.Red=colorAsignar.Red;
	iniciada=true;
	tasaDeNatalidad=tasaNat;
	tasaDeMortalidad=tasaMor;
}
*/
