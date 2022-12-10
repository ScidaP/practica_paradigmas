/*
 * Corporativo.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */

#include "corporativo.h"

Corporativo::Corporativo(string desc, int dia, int mes, int anio, int cantPersonas, string nombre_inst, bool benef): Evento(desc, dia, mes, anio, cantPersonas) {
	this->nombreInstitucion = nombre_inst;
	this->esBeneficiencia = benef;
}

bool Corporativo::getBeneficiencia() {
	return this->esBeneficiencia;
}

double Corporativo::montoAPagar() {
	double totalAPagar = 0;
	double precioTarjeta = this->calcularPrecioTarjeta();
	if (this->getCantPersonas() < 100) {
		totalAPagar += precioTarjeta * 100;
	} else {
		totalAPagar += precioTarjeta * this->getCantPersonas();
	}
	if (this->getBeneficiencia()) {
		totalAPagar *= 0.85; // Le resto el 15%
	}
	return totalAPagar;

}

Corporativo::~Corporativo() {
	// TODO Auto-generated destructor stub
}

