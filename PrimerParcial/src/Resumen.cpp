/*
 * Resumen.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */

#include "Resumen.h"

int Resumen::indiceEventos = 0;

Resumen::Resumen() {
	this->cantEventos = 0;
}

void Resumen::mostrarResumen(int mes, int anio) {
	double totalAPagar = 0;
	for (int i = 0; i < this->cantEventos; i++) {
		if (this->eventos[i]->getFecha().getMes() == mes && this->eventos[i]->getFecha().getAnio() == anio) {
			cout << "Codigo evento: " << this->eventos[i]->getCodigo() << endl;
			cout << "Fecha: " << this->eventos[i]->getFecha().toString() << endl;
			cout << "Cantidad servicios: " << this->eventos[i]->getCantServicios() << endl;
			cout << "Monto a pagar: " << this->eventos[i]->montoAPagar() << endl;
			totalAPagar += this->eventos[i]->montoAPagar();
		}
	}
	cout << "Recaudado mes: " << totalAPagar << endl;
}

void Resumen::cargarEventos(Evento evento) {
	this->eventos[this->indiceEventos] = &evento;
	this->indiceEventos++;
	this->cantEventos++;
}

Resumen::~Resumen() {
	// TODO Auto-generated destructor stub
}

