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
    int parcela=0;
    do{
    	for(int i=columnaActual;i<(columnaActual+20);i++){
    		for(int j=filaActual;j<(filaActual+20);j++){
    			mapa.SetPixel(i,j,celulas[parcela].obtenerColor());
    		}
    	}
    	columna++;
    	columnaActual+=20;
    	parcela++;
    	if(columna==totalColumnas){
    		filaActual+=PIXEL;
    		columnaActual=0;
    		columna=0;
    	}
    }while(parcela<totalFilas*totalColumnas);
}

void Imagen::imprimir(const char nombre[]){
	mapa.WriteToFile(nombre);
}
Imagen::~Imagen() {
	// TODO Auto-generated destructor stub
}

