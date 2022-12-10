/*
 * Cliente.h
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef CLIENTE_H_
#define CLIENTE_H_
using namespace std;
#include "Mascota.h"
#include "Fecha.h"

class Cliente {
private:
	int id;
	string nombre;
	string mail;
	int cantMascotas;
	Mascota * MascotasACargo[20];
public:
	Cliente(int, string, string);
	int getId();
	double MontoAbonado(int, int); //mes, anio
	int getCantMascotas();
	void ListarMascotasConControlProximo();
	virtual ~Cliente();
};

#endif /* CLIENTE_H_ */
