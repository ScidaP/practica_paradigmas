//============================================================================
// Name        : TP5.cpp
// Author      : Patrik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Sucursal.h"
#include "Fecha.h"
#include "Mascota.h"

int main() {
	Sucursal nuevaSucursal(1, "Sucursal Santa Fé");
	Fecha fechaNacimientoMoro(15, 9, 2014);
	Mascota nuevaMascota("Moro", fechaNacimientoMoro, "Boxer");
	nuevaMascota.listarInfo();
	return 0;
}
