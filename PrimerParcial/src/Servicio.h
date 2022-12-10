/*
 * Servicio.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef SERVICIO_H_
#define SERVICIO_H_
using namespace std;

class Servicio {
private:
	int cod;
	string descripcion;
	double montoBase;
public:
	Servicio(int, string, double);
	double getMontoBase();
	virtual ~Servicio();
};

#endif /* SERVICIO_H_ */
