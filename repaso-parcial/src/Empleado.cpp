/*
 * Empleado.cpp
 *
 *  Created on: 10 oct. 2022
 *      Author: patri
 */
#include <iostream>
#include "Empleado.h"
using namespace std;

Empleado::Empleado(): fecha_nac(0, 0, 0) {
	this->DNI = 0;
	this->nombre = "";
	this->direccion = "";
	this->antiguedad_anios = 0;
	this->sueldo = 0;
	this->categoria = "";
	this->retencion_jubilatoria = 0;
	this->compensacion_salarial = 0;
	this->sueldoFinal = 0;
}

Empleado::Empleado(int dni, string nombre, string direccion, int antiguedad, double sueldo, int dia, int mes, int anio, int comp_sal, double sueldoF): fecha_nac(dia, mes, anio) {
	this->DNI = dni;
	this->nombre = nombre;
	this->direccion = direccion;
	this->antiguedad_anios = antiguedad;
	this->sueldo = sueldo;
	this->categoria = "";
	this->retencion_jubilatoria = 0;
	this->compensacion_salarial = comp_sal;
	this->sueldoFinal = sueldoF;
}

void Empleado::listarInfo() {
	cout << "DNI: " << this->DNI << endl;
	cout << "Nombre: " << this->nombre << endl;
	cout << "Direccion: " << this->direccion << endl;
	cout << "Antiguedad: " << this->antiguedad_anios << endl;
	cout << "Categoria: " << this->categoria << endl;
	cout << "Sueldo: " << this->sueldo << endl;
	cout << "Fecha nac: " << this->fecha_nac.toString() << endl;
}

double Empleado::calcularSueldoFinal(){
	return 0.2;
}

double Empleado::getSueldoBase() {
	return this->sueldo;
}

int Empleado::getAntiguedad(){
	return this->antiguedad_anios;
}

Empleado::~Empleado() {
}

