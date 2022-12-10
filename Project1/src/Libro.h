/*
 * Libro.h
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <iostream>
#include "Autor.h"
using namespace std;

class Libro {
	int codigo;
	string titulo;
	string descripcion;
	string categoria;
	float precioBase;
	Autor *autor;
	static double IVA;
	void pushLibrosArreglo();
protected:
	float getIVA();
	float getPrecioBase();
public:
	Libro(int, string, string, string, string, float, string, string, int);
	void listarInformacion();
	float calcularPrecioVenta();
	void getBiografiaAutor();
};

#endif /* LIBRO_H_ */
