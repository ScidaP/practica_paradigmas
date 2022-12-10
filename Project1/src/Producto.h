/*
 * Producto.h
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <iostream>
using namespace std;

class Producto {
	int codigo;
	string descripcion;
	bool esToxico;
	float precioBase;
	const double IVA = 0.21;
public:
	Producto();
	Producto(int, string, bool, float);
	Producto(Producto&);
	void mostrarInfo();
	int getCodigo();
	bool getToxicidad();
	float getPrecioFinal();
};

#endif /* PRODUCTO_H_ */
