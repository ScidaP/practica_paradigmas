/*
 * Mascota.h
 *
 *  Created on: 28 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef MASCOTA_H_
#define MASCOTA_H_
using namespace std;
#include "Control.h"

class Mascota {
private:
	string nombre;
	Fecha fechaNacimiento;
	string raza;
	int indiceUltimoControl;
	int cantControles;
	Control * ControlesRealizados[15];
public:
	Mascota();
	Mascota(string, Fecha, string);
	void listarInfo();
	void agregarControl(string, double, Fecha);
	bool controlProximo();
	int getCantidadControles();
	Control * getControl(int); // en el parametro se pone el numero de control que se quierea cceder
	virtual ~Mascota();
};

#endif /* MASCOTA_H_ */
