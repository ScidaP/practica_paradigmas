//============================================================================
// Name        : Tp4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "ProductoLimpieza.h"
#include "ProductoAlimenticio.h"
#include "Producto.h"
#include "Venta.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Producto_Limpieza * producto1 = new Producto_Limpieza(123, "Desc ejemplo", 38.9, false);
	Producto_Alimenticio * producto2 = new Producto_Alimenticio(444, "Dasdasdmplo", 98.9, 1, 2, true);
	Venta nuevaVenta(901, "Patricio");
	nuevaVenta.agregarProducto(producto1);
	nuevaVenta.agregarProducto(producto2);
	nuevaVenta.mostrarVenta();
	nuevaVenta.calcularMontoTotal();
	return 0;
	/* EJERCICIO 2:
	         * libros: codigo, titulo, descripcion, autor, tipoDeLibro(impreso, digital), fechaPublicacion, precioBase, categoria. listarInfo(), calcularPrecioVenta()
	Libro impreso: deBolsillo, listarInfo()
	Libro digital:
	Venta: fecha, infoCliente, librosVendidos[], calcularMontoVenta()
	*/
}
