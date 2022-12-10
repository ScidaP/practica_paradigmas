/*
 * Producto.cpp
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#include "Producto.h"

Producto::Producto(int codigo1, string descripcion1, bool esToxico1, float precioBase1) {
	codigo = codigo1;
	descripcion = descripcion1;
	esToxico = esToxico1;
	precioBase = precioBase1;
}

Producto::Producto(Producto & P) {
	codigo = P.codigo;
	descripcion = P.descripcion;
	esToxico = P.esToxico;
	precioBase = P.precioBase;
}

void Producto::mostrarInfo() {
	cout << "Codigo: " << codigo << endl;
	cout << "Descripcion: " << descripcion << endl;
	cout << "Toxico: " << esToxico << endl;
	cout << "Precio Base: " << precioBase << endl;
}

int Producto::getCodigo() {
	return codigo;
}

bool Producto::getToxicidad() {
	return esToxico;
}

float Producto::getPrecioFinal() {
	return precioBase += precioBase*IVA;
}
