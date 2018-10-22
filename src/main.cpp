#include "juego.hpp"
#include "coordenada.hpp"
#include "inicializarJuego.hpp"
#include "actualizarJuego.hpp"
#include "decidirJuego.hpp"
#include "mostrarJuego.hpp"

using namespace std;


#include <iostream>
#include "Juego.h"
#include "tablero.h"
#include "Archivo.h"
using namespace std;

int main() {

	Juego juegoDeLaVida("datos/archivo");

	juegoDeLaVida.mostrarTablero(0);

	return 0;
}
