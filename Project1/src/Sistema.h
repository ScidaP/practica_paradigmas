/*
 * Sistema.h
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include "Venta.h"

class Sistema {
	Venta* ventasTotales[50];
	int indice;
public:
	Sistema();
	virtual ~Sistema();
	void agregarVenta(Venta*);
	void listarVentasFecha(Fecha*);
};

#endif /* SISTEMA_H_ */
