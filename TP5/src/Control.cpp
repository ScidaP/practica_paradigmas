/*
 * Control.cpp
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */

#include "Control.h"

Control::Control(string desc, double montoAbonado, Fecha fechaProxControl): fecha() {
	this->descripcion = desc;
	this->montoAbonado = montoAbonado;
	this->fechaProxControl = fechaProxControl;
}

double Control::getMontoAbonado() {
	return this->montoAbonado;
}

Fecha Control::getFecha() {
	return this->fecha;
}

Control::~Control() {
	// TODO Auto-generated destructor stub
}

