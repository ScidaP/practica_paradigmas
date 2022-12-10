/*
 * ProductoAlimenticio.cpp
 *
 *  Created on: 14 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
using namespace std;

#include "ProductoAlimenticio.h"

Producto_Alimenticio::Producto_Alimenticio(int cod, string desc, double precio, int mes, int anio, bool celiaco):Producto(cod, desc, precio) {
	mes_venc = mes;
	anio_venc = anio;
	apto_celiacos = celiaco;
}

void Producto_Alimenticio::listarInfo() {
	cout << "Codigo: " << codigo << endl;
	cout << "Descripción: " << descripcion << endl;
	cout << "Precio base: " << precioBase << endl;
	cout << "Mes vencimiento: " << mes_venc << endl;
	cout << "Año vencimiento: " << anio_venc << endl;
	cout << "Apto celiacos: " << apto_celiacos << endl;
	cout << "Precio final: " << this->getPrecioFinal() << endl;
}

string Producto_Alimenticio::getDescripcion() {
	return descripcion;
}

bool Producto_Alimenticio::estaVencido() {
	return false;
}

bool Producto_Alimenticio::getAptoCeliacos() {
	return apto_celiacos;
}

double Producto_Alimenticio::getPrecioFinal() {
	return precioBase*1.105;
}
