/*
 * Administrativo.h
 *
 *  Created on: 10 oct. 2022
 *      Author: patri
 */

#ifndef ADMINISTRATIVO_H_
#define ADMINISTRATIVO_H_
#include <iostream>
using namespace std;

#include "Empleado.h"

class Administrativo: public Empleado {
private:
	string tarea_principal;
public:
	Administrativo(int, string, string, string, string, int, double, int, int, int, int, double);
	double calcularSueldoFinal();
	virtual ~Administrativo();
};

#endif /* ADMINISTRATIVO_H_ */
