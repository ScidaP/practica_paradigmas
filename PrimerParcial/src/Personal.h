/*
 * Personal.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef PERSONAL_H_
#define PERSONAL_H_
using namespace std;
#include "Evento.h"

class Personal: public Evento {
private:
	int cantPersonasAdicionales;
public:
	Personal(string, int, int, int, int, int);
	double montoAPagar();
	int getCantPersonasAdicionales();
	virtual ~Personal();
};

#endif /* PERSONAL_H_ */
