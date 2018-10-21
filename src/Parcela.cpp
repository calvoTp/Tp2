/*
 * Parcela.cpp
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */

#include "Parcela.h"

Parcela::Parcela() {
	// TODO Auto-generated constructor stub
	iniciada=false;
	tasaDeNatalidad=0;
	tasaDeMortalidad=0;
}
Parcela::~Parcela() {
	// TODO Auto-generated destructor stub
}
RGBApixel Parcela::obtenerColor(){
	return color;
}
void Parcela::setear(RGBApixel colorAsignar,int tasaNat,int tasaMor){
	color.Green=colorAsignar.Green;
	color.Blue=colorAsignar.Blue;
	color.Red=colorAsignar.Red;
	iniciada=true;
	tasaDeNatalidad=tasaNat;
	tasaDeMortalidad=tasaMor;
}
