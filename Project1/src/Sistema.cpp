/*
 * Sistema.cpp
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#include "Sistema.h"

Sistema::Sistema() {
	indice = 0;
}

void Sistema::agregarVenta(Venta* venta) {
	ventasTotales[indice] = venta;
	indice++;
}

void Sistema::listarVentasFecha(Fecha* fechaBuscada) {
	for(int i = 0; i < indice; i++) {
		if (ventasTotales[i]->getFecha() == fechaBuscada) {
			ventasTotales[i]->getFecha()->listarFechaFormato();
			cout << "Codigo: " << ventasTotales[i]->getCodigo() << endl;
			cout << "Recaudado: $" << ventasTotales[i]->calcularMonto() << endl;
		}
	}
}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}
