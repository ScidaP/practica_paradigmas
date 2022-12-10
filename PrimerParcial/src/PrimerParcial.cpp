//============================================================================
// Name        : PrimerParcial.cpp
// Author      : Patrik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Personal.h"
#include "corporativo.h"
#include "Resumen.h"

int main() {
	Servicio * nuevoServicio = new Servicio(1, "adasd", 15);
	Personal nuevoEvento("easdj", 28, 11, 2022, 10, 5);
	nuevoEvento.listarInfo();
	nuevoEvento.agregarServicio(nuevoServicio);
	Resumen nuevoResumen;
	nuevoResumen.cargarEventos(nuevoEvento);
	cout << "Monto total a pagar por evento: " << nuevoEvento.montoAPagar() << endl;
	cout << "Resumen mes de julio 2022: " << endl;
	nuevoResumen.mostrarResumen(7, 2022);
	return 0;
}
