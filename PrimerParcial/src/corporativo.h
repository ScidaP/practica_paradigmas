/*
 * Corporativo.h
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef CORPORATIVO_H_
#define CORPORATIVO_H_
using namespace std;
#include "Evento.h"

class Corporativo: public Evento {
private:
	string nombreInstitucion;
	bool esBeneficiencia;
public:
	Corporativo(string, int, int, int, int, string, bool);
	bool getBeneficiencia();
	double montoAPagar();
	virtual ~Corporativo();
};

#endif /* CORPORATIVO_H_ */
