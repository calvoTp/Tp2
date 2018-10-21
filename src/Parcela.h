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
RGBApixel color;

public:
	Parcela();
	void setear(RGBApixel &colorInicial);
	RGBApixel obtenerColor();
	virtual ~Parcela();
};

#endif /* PARCELA_H_ */
