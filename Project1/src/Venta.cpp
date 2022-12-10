/*
 * Venta.cpp
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#include "Venta.h"
#include <iostream>
using namespace std;

Venta::Venta(int codigo1, Fecha *fecha1, string cliente1) {
	codigo = codigo1;
	fecha = fecha1;
	cliente = cliente1;
	indice = 0;
}

void Venta::agregarLibro(Libro *libro1) {
	librosVendidos[indice] = libro1;
	indice++;
}

float Venta::calcularMonto() {
	float suma = 0;
	for (int i = 0; i < indice; i++) {
		suma += librosVendidos[i]->calcularPrecioVenta();
	}
	return suma;
}

Fecha* Venta::getFecha() {
	return fecha;
}

int Venta::getCodigo() {
	return codigo;
}
