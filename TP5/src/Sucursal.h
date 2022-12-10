/*
 * Sucursal.h
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef SUCURSAL_H_
#define SUCURSAL_H_
using namespace std;
#include "Cliente.h"

class Sucursal {
private:
	int cod;
	string direccion;
	int cantClientes;
	Cliente totalClientes[100];
public:
	Sucursal(int, string);
	void resumen(int, int); // mes, anio
	void agregarCliente(Cliente);
	virtual ~Sucursal();
};

#endif /* SUCURSAL_H_ */
