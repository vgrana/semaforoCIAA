/*
 * Main.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
///gpio salida
#include "Semaforo1.h"
#include "SemaforoSecuenciado.h"
#include "sapi.h"
//
int main(void) {
	boardConfig();
//
//	Semaforo inicializar;
//
//	SemaforoInicializar1(&inicializar, Roja);
//	SemaforoImprimir1(&inicializar);
//
//	SemaforoPrenderLuz1(&inicializar, Amarilla);
//	SemaforoImprimir1(&inicializar);
//
//	ApagarUnaLuz1(&inicializar, Amarilla);
//	SemaforoImprimir1(&inicializar);
//
//	CambiarLuz1(&inicializar, Verde);
//	SemaforoImprimir1(&inicializar);
//
//	CambiarLuz1(&inicializar, Amarilla);
//	SemaforoImprimir1(&inicializar);
//
//	CambiarLuz1(&inicializar, Roja);
//	SemaforoImprimir1(&inicializar);

////////////////////////////////////////////////////////////////////////////////////////////
////                                 P   A   R  T  E    2                                //
//////////////////////////////////////////////////////////////////////////////////////////
//
//cuando llamo al ciclo q no maneje un delay, le marco un tic relojito
	SemaforoSecuenciado semaforo;

	EstadoInicial(&semaforo);
	while (1) {
		cicloSemaforo(&semaforo);
		delay(1000);
	}
	return 0;

}
