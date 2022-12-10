/*
 * Libro.cpp
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#include "Libro.h"
#include <iostream>
using namespace std;

double Libro::IVA = 0.21;

Libro::Libro(int codigo1, string titulo1, string descripcion1, string autor1, string categoria1, float precioBase1, string nombre, string biografia, int edad){
	codigo = codigo1;
	titulo = titulo1;
	descripcion = descripcion1;
	categoria = categoria1;
	precioBase = precioBase1;
	autor = new Autor(nombre, biografia, edad);
}

float Libro::getIVA() {
	return IVA;
}

float Libro::getPrecioBase() {
	return precioBase;
}

void Libro::listarInformacion() {
	cout << "Codigo: " << codigo << endl;
	cout << "Titulo: " << titulo << endl;
	cout << "Descripcion: " << descripcion << endl;
	cout << "Categoria: " << categoria<< endl;
	cout << "Precio Base: " << precioBase << endl;
	cout << "Nombre autor: " << autor->getNombre() << endl;
	cout << "Biografia autor: " << autor->getBiografia() << endl;
	cout << "Edad autor: " << autor->getEdad() << endl;
}

float Libro::calcularPrecioVenta() {
	return getPrecioBase()*(1+getIVA());
}

void Libro::getBiografiaAutor() {
	cout << "Nombre: " << this->autor->getNombre() << ".Biografia: " << this->autor->getBiografia() << endl;

}
