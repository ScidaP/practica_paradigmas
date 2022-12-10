/*
 * Evento.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef EVENTO_H_
#define EVENTO_H_
using namespace std;
#include "Fecha.h"
#include "Servicio.h"

class Evento {
private:
	int cod;
	string desc;
	Fecha fecha;
	int cantPersonas; //Cantidad de personas que asisten
	double precioTarjeta;
	int cantServicios;
	Servicio * serviciosContratados[15];
public:
	static int indiceServicios;
	static int incremental;
	Evento(string, int, int, int, int);
	double calcularPrecioTarjeta();
	void agregarServicio(Servicio *);
	void listarInfo();
	int getCantServicios();
	int getCantPersonas();
	Fecha getFecha();
	int getCodigo();
	virtual double montoAPagar();
	virtual ~Evento();
};

#endif /* EVENTO_H_ */
