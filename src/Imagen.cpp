/*
 * Imagen.cpp
 *
 *  Created on: 21 oct. 2018
 *      Author: lucas
 */

#include "Imagen.h"

Imagen::Imagen(Parcela* parcela,int filas,int columnas) {
	// TODO Auto-generated constructor stub
	celulas=parcela;
    // Se setean las medidas
    mapa.SetSize(ANCHO, ALTO);
    // Se setea la profundidad del color
    mapa.SetBitDepth(DEPTH);
    // Pixel con el que vamos a ir poniendo el color en el mapa
	totalFilas=filas;
	totalColumnas=columnas;
}

void Imagen::actualizar(){
	int columnaActual=0;
	int filaActual=0;
	int columna=0;
	RGBApixel predeterminado;
	predeterminado.Green=0;
	predeterminado.Blue=0;
	predeterminado.Red=0;


	for(int i=0;i<totalColumnas;i++){
		for(int j=0;j<totalFilas;j++){
			if(celulas[i*j].estaViva()){
				for(int x=columnaActual;x<(columnaActual+20);x++){
					for(int y=filaActual;y<(filaActual+20);y++){
						mapa.SetPixel(x,y,celulas[i*j].obtenerColor());
					}
				}
			}
			else{
				for(int x=columnaActual;x<(columnaActual+20);x++){
					for(int y=filaActual;y<(filaActual+20);y++){
						mapa.SetPixel(x,y,predeterminado);
					}
				}
			}
			columna++;
			columnaActual+=20;
			if(columna==totalColumnas){
				filaActual+=PIXEL;
				columnaActual=0;
				columna=0;
			}
		}
	}
}



void Imagen::imprimir(const char nombre[]){
	mapa.WriteToFile(nombre);
}
Imagen::~Imagen() {
	// TODO Auto-generated destructor stub
}

