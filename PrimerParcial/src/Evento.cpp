/*
 * Evento.cpp
 *
 *  Created on: 17 oct. 2022
 *      Author: Patrik
 */
#include <iostream>
#include "Evento.h"
using namespace std;

int Evento::incremental = 0;
int Evento::indiceServicios = 0;

Evento::Evento(string desc, int dia, int mes, int anio, int cantPersonas): fecha(dia, mes, anio) {
	this->cod = incremental;
	this->cantPersonas = cantPersonas;
	this->desc = desc;
	this->precioTarjeta = this->calcularPrecioTarjeta();
	this->cantServicios = 0;
	incremental++;
}

void Evento::agregarServicio(Servicio * serv) {
	this->serviciosContratados[this->indiceServicios] = serv;
	this->indiceServicios++;
	this->cantServicios++;
}

int Evento::getCantPersonas() {
	return this->cantPersonas;
}

double Evento::montoAPagar() {
	return 0; // Esta funcion no se usa pero igual tengo que implementarla en la clase base
}

double Evento::calcularPrecioTarjeta() {
	double total = 0;
	for (int i = 0; i < this->getCantServicios(); i++) {
		total += this->serviciosContratados[i]->getMontoBase();
	}
	total *= 1.10; // Le sumo el 10%
	return total;
}

void Evento::listarInfo() {
	cout << "Codigo: " << this->cod << endl;
	cout << "Descripcion: " << this->desc << endl;
	cout << "Fecha: " << this->fecha.toString() << endl;
}

Fecha Evento::getFecha() {
	return this->fecha;
}

int Evento::getCantServicios() {
	return this->cantServicios;
}

int Evento::getCodigo() {
	return this->cod;
}

Evento::~Evento() {
	// TODO Auto-generated destructor stub
}

