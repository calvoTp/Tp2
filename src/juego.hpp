/*
* juego.hpp
*
*  Created on: Sep 2, 2018
*      Author: marcos
*/

#ifndef JUEGO_HPP_
#define JUEGO_HPP_


#define FILAS_DEL_TABLERO 20
#define COLUMNAS_DEL_TABLERO 80

#define REINICIO 2
#define EN_EJECUCION 1
#define FINALIZO 0

#define CELULA_VIVA 'O'
#define CELULA_MUERTA '~'

#define CONTINUAR 's'
#define FINALIZAR 'n'
#define REINICIAR 'r'

#define MINIMO_TURNOS_CONGELADOS 2
#define MINIMO_CELULAS_PARA_PERMANECER_VIVA 2
#define MAXIMO_CELULAS_PARA_PERMANECER_VIVA 3
#define CELULAS_PARA_NACER 3

typedef char Tablero[FILAS_DEL_TABLERO][COLUMNAS_DEL_TABLERO];

struct Juego {
  char tablero[FILAS_DEL_TABLERO][COLUMNAS_DEL_TABLERO];
  unsigned int celulasVivas;
  unsigned int celulasMuertasUltimoTurno, celulasNacidasUltimoTurno;
  unsigned int totalCelulasMuertas, totalCelulasNacidas;
  float promedioCelulasNacidas, promedioCelulasMuertas;
  unsigned int turnosJugados, turnosCongelados;
  short int estado;
};


#endif /* JUEGO_HPP_ */
