#include <iostream>
#include "EasyBMP.h"
#include "Parcela.h"
#include "Imagen.h"


using namespace std;


int main(){
RGBApixel color;
    color.Red=100;
    color.Green=0;
    color.Blue=0;
    int numeroDeFilas=9;
    int numeroDeColumnas=9;
    Parcela* nueva=new Parcela[numeroDeFilas*numeroDeColumnas];
    Imagen bitmap(nueva,numeroDeFilas,numeroDeColumnas);
    for(int i=0;i<numeroDeFilas*numeroDeColumnas;i++){
    	nueva[i].setear(color,6,6);
    }
      bitmap.actualizar();
      bitmap.imprimir("prueba.BMP");
      delete[] nueva;

    return 0;
}
