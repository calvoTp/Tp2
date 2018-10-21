#include <iostream>
#include "EasyBMP.h"
#include "Parcela.h"


using namespace std;


unsigned int const ANCHO = 100;     // ANCHO del mapa
unsigned int const ALTO  = 200;     // ALTO  del mapa
unsigned int const DEPTH = 32;      // Profundidad del color








int main()
{
    // Se crea un BMP
    BMP mapa;
    // Se setean las medidas
    mapa.SetSize(ANCHO, ALTO);
    // Se setea la profundidad del color
    mapa.SetBitDepth(DEPTH);
    // Pixel con el que vamos a ir poniendo el color en el mapa


    int columnaActual=0;
    int	filaActual=0;
    RGBApixel color;
    Parcela* nueva=new Parcela[10];
    for(int i=0;i<10;i++){
    	nueva[i].setear(color);
    }
    int parcela=0;
    do{
    	for(int i=columnaActual;i<columnaActual+10;i++){
    		for(int j=filaActual;j<filaActual+10;j++){
    			mapa.SetPixel(i,j,nueva[parcela].obtenerColor());
    		}
    	}
    	columnaActual+=10;
    	parcela++;
    }while(parcela<10);


    char nombre[] = "imagen.bmp";

    cout << "Generando archivo, espere por favor..." << endl;

    // se guarda en el archivo
    mapa.WriteToFile(nombre);
    delete[] nueva;

    return 0;
}
