/*
 * Venta.h
 *
 *  Created on: 22 sep. 2022
 *      Author: patri
 */

#ifndef VENTA_H_
#define VENTA_H_

#include <iostream>
#include "Producto.h"

using namespace std;

class Venta {
	int codigo;
	string cliente;
	int indice;
	Producto* productos[10];
public:
	Venta(int, string);
	void agregarProducto(Producto*);
	int getCodigo();
	void mostrarVenta();
	void calcularMontoTotal();
};

#endif /* VENTA_H_ */
