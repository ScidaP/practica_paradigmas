/*
 * ProductoLimpieza.cpp
 *
 *  Created on: 21 sep. 2022
 *      Author: patri
 */

#include <iostream>
using namespace std;

#include "ProductoLimpieza.h"

Producto_Limpieza::Producto_Limpieza(int cod, string desc, double precioB, bool toxicidad):Producto(cod, desc, precioB) {
	esToxico = toxicidad;
}

double Producto_Limpieza::getPrecioFinal() {
	return precioBase*1.21;
}

bool Producto_Limpieza::getToxicidad() {
	return esToxico;
}

void Producto_Limpieza::listarInfo() {
	cout << "Codigo: " << codigo << endl;
	cout << "Descripción: " << descripcion << endl;
	cout << "Precio base: " << precioBase << endl;
	cout << "Toxicidad: " << getToxicidad() << endl;
	cout << "Precio Final: " << getPrecioFinal() << endl;
}
