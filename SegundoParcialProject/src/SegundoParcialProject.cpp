//============================================================================
// Name        : SegundoParcialProject.cpp
// Author      : Patrik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Arreglo.h"

int main() {
	Arreglo<int> arregloInt;
	Arreglo<char> arregloChar(5, 999);
	arregloChar[1] = 'a';
	arregloChar[2] = 'a';
	arregloChar[3] = 'a';
	arregloChar[4] = 'b';
	arregloChar[0] = 'e';
	return 0;
}

template <class x>
int contarElementos(Arreglo<x> arr, x item) {
	int contador = 0;
	for (int i = 0; i < arr.capacidad(); i++) {
		if (arr[i] == item) {
			contador++;
		}
	}
	return contador;
}
