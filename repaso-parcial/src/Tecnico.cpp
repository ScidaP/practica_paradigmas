/*
 * Tecnico.cpp
 *
 *  Created on: 11 oct. 2022
 *      Author: patri
 */

#include "Tecnico.h"

Tecnico::Tecnico(int dni, string nombre, string direccion, string categoria, int antiguedad, double sueldo, int dia, int mes, int anio, double ret, int comp_sal, double sueldoF):Empleado(dni, nombre, direccion, antiguedad, sueldo, dia, mes, anio, comp_sal, sueldoF) {
	this->categoria = "Tecnico";
	this->retencion_jubilatoria = 0;
	this->sueldoFinal = this->calcularSueldoFinal();
}

void Tecnico::setRetencionJubilatoria(double porcentaje) {
	if (porcentaje > 0.11) {
		this->retencion_jubilatoria = porcentaje;
	} else if (porcentaje > 0.80) {
		cout << "Error: no se puede cargar una retencion jubilatoria mayor al 80%" << endl;
	} else {
		cout << "Error: no se puede cargar una retencion jubilatoria menor al 11%" << endl;
	}
}

double Tecnico::calcularSueldoFinal() {
	double bonusAntiguedad = 0;
	if (this->getAntiguedad() >= 5) {
		bonusAntiguedad = 7500; // $7500 si tiene más de 5 años de antiguedad
	}
	double conceptoObraSocial = this->getSueldoBase() * 0.03; // 3% del sueldo base
	double sueldoNeto = (this->getSueldoBase() * (1-this->retencion_jubilatoria) + bonusAntiguedad - conceptoObraSocial);
	return sueldoNeto;
}

Tecnico::~Tecnico() {
	// TODO Auto-generated destructor stub
}

