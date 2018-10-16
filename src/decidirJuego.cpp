/*
* decidirJuego.cpp
*
*  Created on: Sep 8, 2018
*      Author: marcos
*/

#include "decidirJuego.hpp"
using namespace std;


char pedirDecision() {
  char decision;
  cin >> decision;
  return decision;
}

void consultarAvanceDeTurno(char* decisionAvanzarTurno) {
  cout << endl << "Siguiente turno(s), reiniciar (r), finalizar(n): ";
  do {
    if (*decisionAvanzarTurno != CONTINUAR) {
      cout << "Por favor, ingrese 's' para avanzar de turno, 'r' para reiniciar el juego o 'n' para finalizar el juego" << endl;
    }
    *decisionAvanzarTurno = pedirDecision();
  } while(*decisionAvanzarTurno != CONTINUAR && *decisionAvanzarTurno != FINALIZAR && *decisionAvanzarTurno != REINICIAR);
  return;
}

void consultarActivacionDeOtraCelula(char* decisionAgregarCelula) {
  cout << "Desea agregar otra celula viva?(s/n): ";
  do {
    if (*decisionAgregarCelula != CONTINUAR && *decisionAgregarCelula != FINALIZAR) {
      cout << "Por favor, ingrese 's' para agregar otra celula o 'n' para inicializar el juego" << endl;
    }
    *decisionAgregarCelula = pedirDecision();
  } while(*decisionAgregarCelula != CONTINUAR && *decisionAgregarCelula != FINALIZAR);
  return;
}
