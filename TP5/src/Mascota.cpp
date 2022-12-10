/*
 * Mascota.cpp
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
using namespace std;

#include "Mascota.h"

Mascota::Mascota() {
	this->nombre = "";
	this->fechaNacimiento = Fecha();
	this->indiceUltimoControl = 0;
	this->cantControles = 0;
	this->raza = "";
}

Mascota::Mascota(string nombre, Fecha fecha_nac, string raza) {
	this->nombre = nombre;
	this->fechaNacimiento = fecha_nac;
	this->raza = raza;
	this->indiceUltimoControl = 0;
	this->cantControles = 0;
}

void Mascota::listarInfo() {
	cout << "Nombre: " << this->nombre << endl;
	cout << "Fecha Nacimiento: " << this->fechaNacimiento.toString() << endl;
	cout << "Raza: " << this->raza << endl;
	cout << "Cantidad de controles realizaedos: " << this->cantControles << endl;
}

bool Mascota::controlProximo() { // En lugar de devolver si corresponde un control en menos de 5 días, lo hice de 5 años.
	Fecha * hoy = new Fecha;
	if (this->ControlesRealizados[this->indiceUltimoControl]->getFecha() - *hoy > 5) {
		return false;
	} else {
		return true;
	}
}

Control * Mascota::getControl(int n) {
	return this->ControlesRealizados[n];
}

int Mascota::getCantidadControles() {
	return this->cantControles;
}

Mascota::~Mascota() {
	for (int i = 0; i < this->cantControles; i++) {
		delete this->ControlesRealizados[i];
	}
}

