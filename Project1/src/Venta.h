/*
 * Venta.h
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#ifndef VENTA_H_
#define VENTA_H_
#include <iostream>
#include <list>
#include "Libro.h"
#include "Fecha.h"

using namespace std;

class Venta {
	int codigo;
	Fecha *fecha;
	string cliente;
	Libro *librosVendidos[10];
	int indice;
public:
	Venta(int, Fecha*, string);
	void agregarLibro(Libro*);
	float calcularMonto();
	Fecha * getFecha();
	int getCodigo();
};

#endif /* VENTA_H_ */
