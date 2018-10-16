/*
* actualizarJuego.cpp
*
*  Created on: Sep 8, 2018
*      Author: marcos
*/

#include "actualizarJuego.hpp"
using namespace std;


void actualizarTablero(Tablero tablero, Tablero tableroActualizado, int fila, int columna) {
  tablero[fila][columna] = tableroActualizado[fila][columna];
  return;
}

void actualizarUltimosNacimientosYMuertes(Juego* juego, Tablero tableroActualizado, int fila, int columna) {
  if (juego->tablero[fila][columna] == CELULA_MUERTA && tableroActualizado[fila][columna] == CELULA_VIVA) {
    (juego->celulasNacidasUltimoTurno)++;
  } else if (juego->tablero[fila][columna] == CELULA_VIVA && tableroActualizado[fila][columna] == CELULA_MUERTA) {
    (juego->celulasMuertasUltimoTurno)++;
  }
  return;
}

void actualizarCelulasVivas(Juego* juego, int fila, int columna) {
  if (juego->tablero[fila][columna] == CELULA_VIVA) {
    (juego->celulasVivas)++;
  }
  return;
}

void actualizarEstadisticasCelulas(Juego* juego) {
  (juego->totalCelulasNacidas) += juego->celulasNacidasUltimoTurno;
  (juego->totalCelulasMuertas) += juego->celulasMuertasUltimoTurno;
  if (juego->celulasNacidasUltimoTurno == 0 && juego->celulasMuertasUltimoTurno == 0) {
    (juego->turnosCongelados)++;
  } else {
    juego->turnosCongelados = 0;
  }
  (juego->turnosJugados)++;
  juego->promedioCelulasNacidas = (float)(juego->totalCelulasNacidas)/(float)(juego->turnosJugados);
  juego->promedioCelulasMuertas = (float)(juego->totalCelulasMuertas)/(float)(juego->turnosJugados);
  return;
}

int analizarCelulasVivasAdyacentes(Tablero tablero, Coordenada coordenadaCelula) {
  int celulasVivasAdyacentes = 0;

  for (int filaASumar = -1; filaASumar < 2; filaASumar++) {
    for (int columnaASumar = -1; columnaASumar < 2; columnaASumar++) {

      if (filaASumar != 0 || columnaASumar != 0) { //CONDICION PARA QUE NO SE SUME A SI MISMA
        if (validarCoordenada(coordenadaCelula, filaASumar, columnaASumar)) {
          if (tablero[coordenadaCelula.fila + filaASumar][coordenadaCelula.columna + columnaASumar] == CELULA_VIVA) {
            celulasVivasAdyacentes++;
          }
        }
      }

    }
  }
  return celulasVivasAdyacentes;
}

void actualizarEstadoDeCelula(Tablero tablero, Tablero tableroActualizado, Coordenada coordenadaCelula, int celulasVivasAdyacentes) {
  if (tablero[coordenadaCelula.fila][coordenadaCelula.columna] == CELULA_VIVA) {
    if (celulasVivasAdyacentes == MINIMO_CELULAS_PARA_PERMANECER_VIVA || celulasVivasAdyacentes == MAXIMO_CELULAS_PARA_PERMANECER_VIVA) {
      tableroActualizado[coordenadaCelula.fila][coordenadaCelula.columna] = CELULA_VIVA;
    } else {
      tableroActualizado[coordenadaCelula.fila][coordenadaCelula.columna] = CELULA_MUERTA;
    }
  }else {
    if (celulasVivasAdyacentes == CELULAS_PARA_NACER) {
      tableroActualizado[coordenadaCelula.fila][coordenadaCelula.columna] = CELULA_VIVA;
    }else {
      tableroActualizado[coordenadaCelula.fila][coordenadaCelula.columna] = CELULA_MUERTA;
    }
  }
  return;
}

void analizarEstadoDeCelula(Tablero tablero, Tablero tableroActualizado) {
  Coordenada coordenadaCelula;
  int celulasVivasAdyacentes;
  for (coordenadaCelula.fila = 0; coordenadaCelula.fila < FILAS_DEL_TABLERO; coordenadaCelula.fila++) {
    for (coordenadaCelula.columna = 0; coordenadaCelula.columna < COLUMNAS_DEL_TABLERO; coordenadaCelula.columna++) {
      celulasVivasAdyacentes =  analizarCelulasVivasAdyacentes(tablero, coordenadaCelula);
      actualizarEstadoDeCelula(tablero, tableroActualizado, coordenadaCelula, celulasVivasAdyacentes);
    }
  }
  return;
}

void actualizarJuego(Juego* juego, Tablero tableroActualizado) {
  juego->celulasVivas = 0;
  juego->celulasNacidasUltimoTurno = 0;
  juego->celulasMuertasUltimoTurno = 0;
  analizarEstadoDeCelula(juego->tablero, tableroActualizado);
  for (int i = 0; i < FILAS_DEL_TABLERO; i++) {
    for (int j = 0; j < COLUMNAS_DEL_TABLERO; j++) {
      actualizarUltimosNacimientosYMuertes(juego, tableroActualizado, i, j);
      actualizarTablero(juego->tablero, tableroActualizado, i, j);
      actualizarCelulasVivas(juego, i, j);
    }
  }
  actualizarEstadisticasCelulas(juego);
  return;
}

void actualizarEstadoDeJuego(short int* estadoDelJuego, char decisionAvanzarTurno) {
  if (decisionAvanzarTurno == FINALIZAR) {
    *estadoDelJuego = FINALIZO;
  } else if (decisionAvanzarTurno == REINICIAR) {
    *estadoDelJuego = REINICIO;
  }
  return;
}
