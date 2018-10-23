/*
 * main.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include <iostream>
#include "Juego.h"
#include "tablero.h"
#include "Archivo.h"
#include "jugador.h"
#include "Errors.h"
using namespace std;

int main() {

	Juego juegoDeLaVida("datos/archivo");
	/*ESTA CLASE CAPTURA LOS DIFERENTES ERRORES */
	Errors error = Errors();


	Jugador jugador = Jugador();
	do{
		short int desicionUsuario;
		/* Este bucle repite el juego hasta que el usuario desee salir */
		while(juegoDeLaVida.getEstado() == EN_EJECUCION){

			juegoDeLaVida.mostrarTablero(0);
			desicionUsuario = jugador.preguntarDesicion();

			/*Comprueba que no haya error en lo que eligio el usuario */
			if(error.errorDesicionUsuario(desicionUsuario)){
				while(error.errorDesicionUsuario(desicionUsuario)){
					cout<<"Desicion invalida"<<endl;
					desicionUsuario = jugador.preguntarDesicion();
				}
				/*Se setea el estado cuando el usuario introdujo un valor correcto*/
				juegoDeLaVida.setEstado(desicionUsuario);
			}
			/* Si no hay error se lo asigna al estado de juego */
			else{
				juegoDeLaVida.setEstado(desicionUsuario);
			}

		}


	}while(juegoDeLaVida.getEstado() == REINICIO);




















	return 0;
}


