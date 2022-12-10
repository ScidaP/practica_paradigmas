/*
 * Producto.cpp
 *
 *  Created on: 14 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
using namespace std;
#include "Producto.h"

Producto::Producto(int cod, string desc, double precio) {
	codigo = cod;
	descripcion = desc;
	precioBase = precio;
}

void Producto::listarInfo() {
	cout << "ejemplo" << endl;
}

double Producto::getPrecioFinal() {
	return 123.23;
}

Producto::~Producto() {

}

int Producto::getCodigo() {
    return codigo;
}
