/*
 * Producto.h
 *
 *  Created on: 14 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef PRODUCTO_H_
#define PRODUCTO_H_
using namespace std;

class Producto {
protected:
    int codigo;
    string descripcion;
    double precioBase;
public:
    Producto();
	Producto(int, string, double);
	int getCodigo();
	virtual void listarInfo();
	virtual double getPrecioFinal();
	virtual ~Producto();
};

#endif /* PRODUCTO_H_ */
