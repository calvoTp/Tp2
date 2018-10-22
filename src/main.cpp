#include "Archivo.h"
#include "Constantes.hpp"
#include "Imagen.h"
#include "Juego.h"
#include "Parcela.h"
#include "tablero.h"

using namespace std;


#include <iostream>
#include "Juego.h"
#include "tablero.h"
#include "Archivo.h"
using namespace std;

int main() {

	/*COMENTARIOS:
		 *
		 * El TDA Juego es la clave. Ahi van a ir la mayoria de las funciones que tengo
		 * implementadas en el TP1 pero pasandolas a metodos, llamando cuando haga falta a otros
		 * TDA como parcela o celula. Habria que ya empezar a hacer que funcione el juego,
		 * aunque sea en un solo tablero, despues hacer varios no deberia ser dificil
		 * porque seria trabajar con un vector de tableros nomas, que ya esta implementado y funciona.
		 *
		 * EJEMPLO:
		 *
		 * Declaran el objeto juegoDeLaVida poniendo Juego juegoDeLaVida
		 * ( "direccion del archivo de donde levantara los datos" );
		 * si en el archivo tenian declarados 3 tableros, cada uno con su correspondiente
		 * nombre y dimensiones (ver en la carpeta "datos" un ejemplo del archivo)
		 * pueden ver el tablero deseado escribiendo
		 * juegoDeLaVida.mostrarTablero( numero del tablero, del 0 a cantidad-1).
		 * Se imprimira el tablero y su nombre debajo, como para saber que anda todo bien
		 *
		 * Dentro de la clase Juego, para llamar al tablero deseado escriben
		 * tablero[ numero del vector ].mostrarTablero();
		 * Traten de no definir a mano un tablero, sino de escribirlo en el archivo
		 * y el programa por si mismo lo cargara.
		 * En cualquier caso, si son unos rompehuevos y quieren definirlo a mano porque
		 * les da paja en el archivo, hacen:
		 *
		 * tablero.inicializarTablero( nombreDelTablero(es un dato string), filasDelTablero(nro), columnasDelTablero (nro));
    */

	Juego juegoDeLaVida("datos/archivo");

	juegoDeLaVida.mostrarTablero(0);

	return 0;
}
