/*
 * Sucursal.cpp
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */

#include "Sucursal.h"
#include "Fecha.h"

Sucursal::Sucursal(int cod1, string direcc) {
	cod = cod1;
	direccion = direcc;
	cantClientes = 0;
}

void Sucursal::resumen(int mes, int anio) {
	Fecha * fechaBuscada = new Fecha(1, mes, anio);
	double montoGlobal = 0;
	for (int i=0; i < cantClientes; i++) {
		double montoCliente = totalClientes[i].MontoAbonado(mes, anio);
		montoGlobal += montoCliente;
		cout << "Codigo cliente: " << totalClientes[i].getId() << endl;
		cout << "Monto recaudado el mes buscado: " << montoCliente << endl;
	}
	cout << "Total recaudado en el mes: " << montoGlobal << endl;
}

void Sucursal::agregarCliente(Cliente cliente) {
	this->totalClientes[cantClientes] = cliente;
	cantClientes++;
}

Sucursal::~Sucursal() {
	// TODO Auto-generated destructor stub
}

