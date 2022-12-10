/*
 * Tecnico.h
 *
 *  Created on: 11 oct. 2022
 *      Author: patri
 */
#include <iostream>
#ifndef TECNICO_H_
#define TECNICO_H_
using namespace std;
#include "Empleado.h"

class Tecnico: public Empleado {
public:
	Tecnico(int, string, string, string, int, double, int, int, int, double, int, double);
	void setRetencionJubilatoria(double);
	double calcularSueldoFinal();
	virtual ~Tecnico();
};

#endif /* TECNICO_H_ */
