/*
 * Juego.cpp
 *
 *  Created on: Oct 21, 2018
 *      Author: marcos
 */

#include "Juego.h"

Juego::Juego(string direccionDelArchivo) {

	Archivo archivo(direccionDelArchivo);
	archivo.obtenerTableros();

	cantidadDeTableros = archivo.cantidadDeTableros();
	estado = EN_EJECUCION;
	celulasVivas = 0;
	celulasNacidasUltimoTurno = 0;
	celulasMuertasUltimoTurno = 0;
	totalCelulasNacidas = 0;
	totalCelulasMuertas = 0;
	promedioCelulasNacidas = 0;
	promedioCelulasMuertas = 0;
	turnosJugados = 0;
	turnosCongelados = 0;

	tablero = new Tablero[cantidadDeTableros];

	for (unsigned int i = 0; i < cantidadDeTableros; i++) {
		tablero[i].inicializarTablero(archivo.nombreDelTablero(i), archivo.filasDelTablero(i), archivo.columnasDelTablero(i), direccionDelArchivo);
	}
}


void Juego::consultarActivacionDeOtraCelula(char &decisionAgregarCelula) {
   Jugador jugador;

	cout << "Desea agregar otra celula viva?(s/n): ";
    do {
      if (decisionAgregarCelula != CONTINUAR && decisionAgregarCelula != FINALIZAR) {
        cout << "Por favor, ingrese 's' para agregar otra celula o 'n' para inicializar el juego" << endl;
      }
      decisionAgregarCelula = jugador.getDecision();
    } while(decisionAgregarCelula != CONTINUAR && decisionAgregarCelula != FINALIZAR);
}

void Juego::agregarCelulasVivas(int posicionDelTablero) {
  char decisionAgregarCelula = CONTINUAR;
  Coordenada coordenadaCelula;
  while (decisionAgregarCelula == CONTINUAR) {
    celulasVivas++;
    coordenadaCelula.ingresarCoordenada();
    tablero[posicionDelTablero].naceCelula(coordenadaCelula);
    consultarActivacionDeOtraCelula(decisionAgregarCelula);
  }
  return;
}

void Juego::imagenBMP(int posicion) {
	tablero[posicion].imagenBMP();
}

void Juego::mostrarTablero(int posicion) {
	tablero[posicion].mostrarTablero();
}

void Juego::setEstado(short int estado){
	this->estado = estado;
}

short int Juego::getEstado(){
	return estado;
}

Juego::~Juego() {
	delete[]tablero;
}

