/*
 * Errors.cpp
 *
 *  Created on: 23 oct. 2018
 *      Author: nicolas
 */

#include "Errores.h"


bool Errores::errorDesicionUsuario(short int desicionUsuario){
	if(desicionUsuario == REINICIO || desicionUsuario == EN_EJECUCION || desicionUsuario == FINALIZO){
		return false;
	}
	else{
		return true;
	}
}