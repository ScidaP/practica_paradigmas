//============================================================================
// Name        : repaso-parcial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Empleado.h"
#include "Administrativo.h"
#include "Tecnico.h"

int main() {
	Tecnico nuevoEmpleado(12, "a","a","a", 6, 35000, 28, 11, 2001, 0.11, 0, 0);
	double ret;
	cout << "Elija la ret jub (de 0.11 a 0.80)" << endl;
	cin >> ret;
	nuevoEmpleado.setRetencionJubilatoria(ret);
	nuevoEmpleado.listarInfo();
	cout << "Sueldo Neto del Empleado: " << nuevoEmpleado.calcularSueldoFinal() << endl;
	return 0;
}
