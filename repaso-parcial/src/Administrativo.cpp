/*
 * Administrativo.cpp
 *
 *  Created on: 10 oct. 2022
 *      Author: patri
 */
#include <iostream>
#include "Administrativo.h"
using namespace std;

Administrativo::Administrativo(int dni, string nombre, string direccion, string tarea, string categoria, int antiguedad, double sueldo, int dia, int mes, int anio, int comp_sal, double sueldoF):Empleado(dni, nombre, direccion, antiguedad, sueldo, dia, mes, anio, comp_sal, sueldoF) {
	this->retencion_jubilatoria = 0.11;
	this->tarea_principal = tarea;
	this->categoria = "Administrativo";
}

double Administrativo::calcularSueldoFinal() {
	double compensacion_salarial = this->getSueldoBase() * 0.02 * this->getAntiguedad();
	double concepto_obra_social = this->getSueldoBase() * 0.03;
	double sueldoNeto = this->getSueldoBase() * (1-this->retencion_jubilatoria) - concepto_obra_social + compensacion_salarial;
	return sueldoNeto;
}

Administrativo::~Administrativo() {

}
