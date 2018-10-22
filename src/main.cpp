#include "juego.hpp"
#include "coordenada.hpp"
#include "inicializarJuego.hpp"
#include "actualizarJuego.hpp"
#include "decidirJuego.hpp"
#include "mostrarJuego.hpp"

using namespace std;


int main() {

  Juego juegoDeLaVida;
  char tableroActualizado[FILAS_DEL_TABLERO][COLUMNAS_DEL_TABLERO];
  char decisionAvanzarTurno;


  do {
    decisionAvanzarTurno = CONTINUAR;
    inicializarJuego(&juegoDeLaVida);
    mostrarJuego(juegoDeLaVida);
    consultarAvanceDeTurno(&decisionAvanzarTurno);
    actualizarEstadoDeJuego(&juegoDeLaVida.estado, decisionAvanzarTurno);

    while (juegoDeLaVida.estado == EN_EJECUCION) {
      actualizarJuego(&juegoDeLaVida, tableroActualizado);
      mostrarJuego(juegoDeLaVida);
      consultarAvanceDeTurno(&decisionAvanzarTurno);
      actualizarEstadoDeJuego(&juegoDeLaVida.estado, decisionAvanzarTurno);
    }
  } while(juegoDeLaVida.estado == REINICIO);


  cout << endl << "Gracias por haber jugado! :-)";

  return 0;
}
