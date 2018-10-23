/*
 * jugador.h
 *
 *  Created on: 22 oct. 2018
 *      Author: nicolas
 */

#ifndef SRC_JUGADOR_H_
#define SRC_JUGADOR_H_
#include "juego.hpp"

#include <iostream>
using namespace std;

class Jugador{
	private:
		char desicionUsuario;
	public:
		short int preguntarDesicion();
		void SetDesicionUsuario(short int);
		short int GetDesicionUsuario();
};



#endif /* SRC_JUGADOR_H_ */
