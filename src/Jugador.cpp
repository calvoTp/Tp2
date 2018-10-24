
/*
 * jugador.cpp
 *
 *  Created on: 22 oct. 2018
 *      Author: nicolas
 */

#include "Jugador.h"

/*short int Jugador::preguntarDesicion(){
	short int desicion;
	cout<<endl;
	cout<<EN_EJECUCION<<")Iniciar Juego"<<endl;
	cout<<REINICIO<<")Reiniciar Juego"<<endl;
	cout<<FINALIZO<<")Salir"<<endl;
	cout<<"Ingrese una opcion: "; cin>>desicion;
	return desicion;
}
*/

char Jugador::getDecision() {
	  cin >> decisionUsuario;
	  return decisionUsuario;
}
