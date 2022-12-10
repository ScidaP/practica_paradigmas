/*
 * Control.h
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef CONTROL_H_
#define CONTROL_H_
using namespace std;
#include "Fecha.h"

class Control {
private:
	Fecha fecha;
	string descripcion;
	double montoAbonado;
	Fecha fechaProxControl;
public:
	Control(string, double, Fecha);
	double getMontoAbonado();
	Fecha getFecha();
	virtual ~Control();
};

#endif /* CONTROL_H_ */
