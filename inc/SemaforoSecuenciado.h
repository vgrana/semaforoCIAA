/*
 * SemaforoSecuenciado.h
 *
 *  Created on: 6 sep. 2019
 *      Author: valeria
 */

#ifndef SEMAFOROSECUENCIADO_H_
#define SEMAFOROSECUENCIADO_H_
#define tiempoLuzRoja 4000
#define tiempoLuzAmarilla 3000
#define tiempoLuzVerde 2000
//enum con estados del semaforo
//render es la interface de usuario q seria los led. la logica
enum estadoSemaforo{
	R,.....
};
typedef struct SemaforoSecuenciado {
	Semaforo sema;
	int TiempoRoja;
	int TiempoAmarilla;
	int TiempoVerde;
	///////agregue
	estadoSemaforo estado
	int ultimoCambioEstado;
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
