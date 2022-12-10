/*
 * Planilla.h
 *
 *  Created on: 12 oct. 2022
 *      Author: patri
 */
#include <iostream>
#ifndef PLANILLA_H_
#define PLANILLA_H_
using namespace std;
#include "Empleado.h"

class Planilla {
private:
	int mes;
	int anio;
	Empleado * empleadosPlanilla[50];
	int indicePlanilla;
public:
	Planilla(int, int);
	void getEmpleadosPlanilla(Empleado*[]);
	void mostrarPlanilla();
	virtual ~Planilla();
};

#endif /* PLANILLA_H_ */
