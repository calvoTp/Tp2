/*
* inicializarJuego.cpp
*
*  Created on: Sep 8, 2018
*      Author: marcos
*/

#include "inicializarJuego.hpp"
using namespace std;

void activarCelula(Tablero tablero, Coordenada coordenadaCelula) {
  tablero[coordenadaCelula.fila][coordenadaCelula.columna] = CELULA_VIVA;
  return;
}

void inicializarTablero(Tablero tablero) {
  for (int i = 0; i < FILAS_DEL_TABLERO; i++) {
    for (int j = 0; j < COLUMNAS_DEL_TABLERO; j++) {
      tablero[i][j] = CELULA_MUERTA;
    }
  }
  return;
}

void inicializarCelulasVivas(Juego* juego) {
  char decisionAgregarCelula = CONTINUAR;
  Coordenada coordenadaCelula;
  while (decisionAgregarCelula == CONTINUAR) {
    (juego->celulasVivas)++;
    ingresarCoordenada(&coordenadaCelula);
    activarCelula(juego->tablero, coordenadaCelula);
    consultarActivacionDeOtraCelula(&decisionAgregarCelula);
  }
  return;
}

void inicializarJuego(Juego* juego) {
  juego->estado = EN_EJECUCION;
  juego->celulasVivas = 0;
  juego->celulasNacidasUltimoTurno = 0;
  juego->celulasMuertasUltimoTurno = 0;
  juego->totalCelulasNacidas = 0;
  juego->totalCelulasMuertas = 0;
  juego->promedioCelulasNacidas = 0;
  juego->promedioCelulasMuertas = 0;
  juego->turnosJugados = 0;
  juego->turnosCongelados = 0;
  inicializarTablero(juego->tablero);
  inicializarCelulasVivas(juego);
  return;
}
