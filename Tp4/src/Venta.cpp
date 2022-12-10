/*
 * Venta.cpp
 *
 *  Created on: 22 sep. 2022
 *      Author: patri
 */
#include <iostream>
#include "Venta.h"
using namespace std;

Venta::Venta(int cod, string client) {
	codigo = cod;
	cliente = client;
	indice = 0;
}

void Venta::mostrarVenta() {
	int indiceAux = this->indice;
	cout << "codigo: " << codigo << endl;
	cout << "cliente " << cliente << endl;
	while (indiceAux--) {
		cout << "-------------------" << endl;
		this->productos[indiceAux]->listarInfo();
	}
}

int Venta::getCodigo() {
	return this->codigo;
}

void Venta::calcularMontoTotal() {
	double montoTotal = 0;
	cout << "----------" << endl;
	for (int i = 0; i < this->indice; i++) {
		montoTotal += this->productos[i]->getPrecioFinal();
	}
	cout << "- - - - - - - -" << endl;
	cout << "Monto total: $" << montoTotal << endl;
}

void Venta::agregarProducto(Producto* product) {
	productos[indice] = product;
	this->indice++;
}

