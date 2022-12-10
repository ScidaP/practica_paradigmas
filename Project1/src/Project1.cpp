//============================================================================
// Name        : Project1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Libro.h"
#include "Fecha.h"
#include "Venta.h"
#include "Sistema.h"

int main() {
	Sistema * sistema = new Sistema;
	Fecha * fechaActual = new Fecha;
	string decisionVenta;
	cout << "Desea crear una venta? S/N " << endl;
	cin >> decisionVenta;
	if (decisionVenta == "S") {
		int codigo; string cliente; int cantLibrosVendidos;
		cout << "Ingrese el codigo de la venta" << endl;
		cin >> codigo;
		cout << "Ingrese el nombre del cliente" << endl;
		cin >> cliente;
		Venta * nuevaVenta = new Venta(codigo, fechaActual, cliente);
		cout << "Cuantos libros compro el cliente?" << endl;
		cin >> cantLibrosVendidos;
		while (cantLibrosVendidos--) { // Creo libros con los mismos datos todo el tiempo para que no se haga tan denso el programa
			Libro *libroVendido = new Libro(1234, "El Principito", "Ejem descripcion", "Saint Exupery", "Infantil", 10.60, "Patricio Scida", "Ejemplo biografia", 20);
			nuevaVenta->agregarLibro(libroVendido);
		}
		//Agrego la venta al sistema
		sistema->agregarVenta(nuevaVenta);
		cout << "Total venta: " << nuevaVenta->calcularMonto() << endl;
		// Intento imprimir las ventas de una fecha determinada:
		sistema->listarVentasFecha(fechaActual);
	}
	return 0;
}
