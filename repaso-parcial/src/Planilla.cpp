/*
 * Planilla.cpp
 *
 *  Created on: 12 oct. 2022
 *      Author: patri
 */

#include "Planilla.h"
#include <array>

Planilla::Planilla(int mes, int anio) {
	this->mes = mes;
	this->anio = anio;
	this->indicePlanilla = 0;
}

void Planilla::getEmpleadosPlanilla(Empleado * TotalEmpleados[]) {
	for (int i = 0; i < sizeof(TotalEmpleados)/sizeof(Empleado*); i++) {
		if (TotalEmpleados[i]->)
	}
}

Planilla::~Planilla() {
	// TODO Auto-generated destructor stub
}

