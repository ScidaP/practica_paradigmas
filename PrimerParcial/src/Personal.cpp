/*
 * Personal.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#include "Personal.h"
using namespace std;

Personal::Personal(string desc, int dia, int mes, int anio, int cantPersonas, int cantPersonasAdicionales): Evento(desc, dia, mes, anio, cantPersonas) {
	this->cantPersonasAdicionales = cantPersonasAdicionales;
}

int Personal::getCantPersonasAdicionales() {
	return this->cantPersonasAdicionales;
}

double Personal::montoAPagar() {
	double totalAPagar = 0;
	double precioTarjeta = this->calcularPrecioTarjeta();
	int cantPersonasAdicionales = this->getCantPersonasAdicionales();
	totalAPagar += precioTarjeta * this->getCantPersonas();
	if (cantPersonasAdicionales > 0) {
		totalAPagar += precioTarjeta * cantPersonasAdicionales * 0.60;
	}
	return totalAPagar;
}

Personal::~Personal() {
	// TODO Auto-generated destructor stub
}

