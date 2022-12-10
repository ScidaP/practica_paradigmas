/*
 * Autor.cpp
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#include "Autor.h"
#include <iostream>
using namespace std;

Autor::Autor(string nombre1, string biografia1, int edad1) {
	nombre = nombre1;
	biografia = biografia1;
	edad = edad1;
}

string Autor::getNombre() {return nombre;}
string Autor::getBiografia() {return biografia;}
int Autor::getEdad() {return edad;}

