/*
 * Empleado.h
 *
 *  Created on: 10 oct. 2022
 *      Author: patri
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include <iostream>

using namespace std;

#include "Fecha.h"

class Empleado {
private:
	int DNI;
	string nombre;
	string direccion;
	int antiguedad_anios;
	double sueldo;
	Fecha fecha_nac;
protected:
	string categoria;
	double retencion_jubilatoria;
	int compensacion_salarial;
	double sueldoFinal;
public:
	Empleado();
	Empleado(int, string, string, int, double, int, int, int, int, double);
	int getAntiguedad();
	double getSueldoBase();
	void listarInfo();
	virtual double calcularSueldoFinal();
	virtual ~Empleado();
};

#endif /* EMPLEADO_H_ */
