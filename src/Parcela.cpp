/*
 * Parcela.cpp
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */

#include "Parcela.h"

Parcela::Parcela() {
	// TODO Auto-generated constructor stub

}

Parcela::~Parcela() {
	// TODO Auto-generated destructor stub
}

RGBApixel Parcela::obtenerColor(){
	return color;
}
void Parcela::setear(RGBApixel &colorInicial){
	color.Green=colorInicial.Green;
	color.Blue=colorInicial.Blue;
	color.Red=colorInicial.Red;
	colorInicial.Green+=24;
	colorInicial.Blue+=20;
	colorInicial.Red+=0;
}
