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

template <class x>
int contarElementos(Arreglo<x> arr, x item);

int main() {
	Arreglo<int> arregloInt(5, 999);
	Arreglo<char> arregloChar(5, 999);
	arregloInt[0] = 2;
	arregloInt[1] = 4;
	arregloInt[2] = 1;
	arregloInt[3] = 8;
	arregloInt[4] = 9;
	arregloChar[1] = 'a';
	arregloChar[2] = 'a';
	arregloChar[3] = 'a';
	arregloChar[4] = 'b';
	arregloChar[0] = 'e';
	int contadora = contarElementos(arregloChar, 'a');
	int contador2 = contarElementos(arregloInt, 2);
	cout << "Cantidad de letras 'a': " << contadora << endl;
	cout << "Cantidad de numeros 2: " << contador2 << endl;
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
