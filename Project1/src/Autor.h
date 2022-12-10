/*
 * Autor.h
 *
 *  Created on: 7 sep. 2022
 *      Author: Patrik
 */

#ifndef AUTOR_H_
#define AUTOR_H_
#include <iostream>
using namespace std;

class Autor {
	string nombre;
	string biografia;
	int edad;
public:
	Autor(string, string, int);
	string getNombre();
	string getBiografia();
	int getEdad();
};

#endif /* AUTOR_H_ */
