/*
 * Cliente.cpp
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */

#include "Cliente.h"

Cliente::Cliente(int cod, string nom, string email) {
	this->id = cod;
	this->nombre = nom;
	this->mail = email;
	this->cantMascotas = 0;
}

void Cliente::ListarMascotasConControlProximo() {
	for (int i = 0; i < this->cantMascotas; i++) {
		if (this->MascotasACargo[i]->controlProximo()) {
			this->MascotasACargo[i]->listarInfo();
		}
	}
}

int Cliente::getCantMascotas() {
	return this->cantMascotas;
}

int Cliente::getId() {
	return this->id;
}

double Cliente::MontoAbonado(int dia, int mes) {
	double montoAbonado = 0;
	Fecha * fechaBuscada = new Fecha(1, dia, mes);
	for (int i = 0; i < this->getCantMascotas(); i++) {
		for (int k = 0; k < this->MascotasACargo[i]->getCantidadControles(); k++) {
			if (this->MascotasACargo[i]->getControl(k)->getFecha() == *fechaBuscada) {
				montoAbonado += this->MascotasACargo[i]->getControl(k)->getMontoAbonado();
			}
		}
	}
	return montoAbonado;
}
Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}

