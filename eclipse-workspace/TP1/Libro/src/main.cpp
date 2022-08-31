#include <iostream>
#include "Libro.h"
#include <stdlib.h>

using namespace std;

int main() {
	Libro nuevoLibro(48714, "El Principito", "Jasdojsaodhado aojda ndjadonas mado", "Antoine de Saint Exupery", 1450);
	nuevoLibro.listarInformacion();
	float precioVenta = nuevoLibro.calcularPrecioDeVenta();
	cout << "Precio de venta: " << precioVenta << endl;
	return 0;
}
