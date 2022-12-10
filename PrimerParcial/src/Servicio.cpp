/*
 * Servicio.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */

#include "Servicio.h"

Servicio::Servicio(int cod, string desc, double montoB) {
	this->cod = cod;
	this->descripcion = desc;
	this->montoBase = montoB;
}

double Servicio::getMontoBase() {
	return this->montoBase;
}

Servicio::~Servicio() {
	// TODO Auto-generated destructor stub
}

