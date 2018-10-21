/*
 * decidirJuego.hpp
 *
 *  Created on: Sep 8, 2018
 *      Author: marcos
 */

//yyyyy

#ifndef DECIDIRJUEGO_HPP_
#define DECIDIRJUEGO_HPP_

#include "juego.hpp"
#include "coordenada.hpp"
#include "actualizarJuego.hpp"
#include "mostrarJuego.hpp"
#include "inicializarJuego.hpp"

//recibe la decision del usuario
char pedirDecision();

//procesa la decision del usuario (continuar el juego, reiniciar o finalizar)
void consultarAvanceDeTurno(char* decisionAvanzarTurno);

//procesa la decision del usuario de agregar otra celula
void consultarActivacionDeOtraCelula(char* decisionAgregarCelula);


#endif /* DECIDIRJUEGO_HPP_ */
