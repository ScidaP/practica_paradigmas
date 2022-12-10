/*
 * Resumen.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef RESUMEN_H_
#define RESUMEN_H_
#include "Evento.h"
using namespace std;

class Resumen {
private:
	int cantEventos;
	Evento * eventos[10];
public:
	static int indiceEventos;
	Resumen();
	void cargarEventos(Evento);
	void mostrarResumen(int, int); //mes, anio
	virtual ~Resumen();
};

#endif /* RESUMEN_H_ */
