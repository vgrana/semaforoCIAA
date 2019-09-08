/*
 * SemaforoSecuenciado.h
 *
 *  Created on: 6 sep. 2019
 *      Author: valeria
 */

#ifndef SEMAFOROSECUENCIADO_H_
#define SEMAFOROSECUENCIADO_H_
#define tiempoLuzRoja 7000
#define tiempoLuzAmarilla 5000
#define tiempoLuzVerde 2000

typedef struct SemaforoSecuenciado {
	Semaforo sema;
	int TiempoRoja;
	int TiempoAmarilla;
	int TiempoVerde;
} SemaforoSecuenciado;


void EstadoInicial(SemaforoSecuenciado * semSec);
void SemaforoInicializar(SemaforoSecuenciado * semSec, int Roja,
		int AsignarTiempoLuzRoja);
void SemaforoImprimir(SemaforoSecuenciado * semSec);
void SemaforoPrenderLuz(SemaforoSecuenciado * semSec, int colorLuz,
		int tiempoEncendido);
void CambiarLuz(SemaforoSecuenciado * semSec, int colorLuz, int tiempoEncendido);
void cicloSemaforo(SemaforoSecuenciado * semSec);



#endif /* SEMAFOROSECUENCIADO_H_ */
