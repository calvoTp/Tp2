/*
* mostrarJuego.cpp
*
*  Created on: Sep 8, 2018
*      Author: marcos
*/

#include "mostrarJuego.hpp"
using namespace std;


void mostrarTablero(Tablero tablero) {
  for (int i = 0; i < FILAS_DEL_TABLERO; i++) {
    for (int j = 0; j < COLUMNAS_DEL_TABLERO; j++) {
      cout << tablero[i][j] << " ";
    }
    cout << endl << endl;
  }
  return;
}

void mostrarEstadisticasCelulas(Juego juego) {
  cout << "Celulas vivas: " << juego.celulasVivas << endl <<
  "Celulas nacidas en el ultimo turno: " << juego.celulasNacidasUltimoTurno << endl <<
  "Celulas muertas en el ultimo turno: " << juego.celulasMuertasUltimoTurno << endl <<
  "Promedio celulas nacidas por turnos: " << juego.promedioCelulasNacidas << endl <<
  "Promedio celulas muertas por turnos: " << juego.promedioCelulasMuertas << endl;
  if (juego.turnosCongelados >= MINIMO_TURNOS_CONGELADOS) {
    cout << "El juego se ha congelado" << endl;
  }
  return;
}

void mostrarJuego(Juego juego) {
  mostrarTablero(juego.tablero);
  mostrarEstadisticasCelulas(juego);
  return;
}
