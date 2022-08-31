//============================================================================
// Name        : Libro.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Libro.h"
#include <time.h>
using namespace std;

const float Libro::IVA = 0.21;
string tiposDeLibros[3] = {"Clásico", "Policial", "Novela"};

int seedRand(){
	srand(time(0));
	return 0;
}

Libro::Libro(int cod, string tit, string desc, string aut, float precio) {
    codigo = cod;
    titulo = tit;
    descripcion = desc;
    autor = aut;
	categoria = tiposDeLibros[rand() % 3];
    precioBase = precio;
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
    cout << "Autor: " << autor << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Precio Base: " << precioBase << endl;
}

float Libro::calcularPrecioDeVenta() {
    return getPrecioBase()*(1+getIVA());
}

