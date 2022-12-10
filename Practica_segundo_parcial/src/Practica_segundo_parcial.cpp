//============================================================================
// Name        : Practica_segundo_parcial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
#include <list>
#include "Pila.h"
#include <iostream>

int main() {
	list<int> lista;
	vector<int> vectorNuevo;
	Pila<int> nuevaPila;
	vector<int>::iterator it;
	list<int>::iterator it1;
	vectorNuevo.push_back(2);vectorNuevo.push_back(1);vectorNuevo.push_back(8);vectorNuevo.push_back(12);vectorNuevo.push_back(112);
	for (it = vectorNuevo.begin(); it != vectorNuevo.end(); it++) {
		cout << *it << endl;
	}

	for (it1 = lista.begin(); it1 != lista.end(); it1++) {
		cout << * it1 << endl;
	}

	nuevaPila.push(2);
	nuevaPila.push(12);
	nuevaPila.push(22);
	nuevaPila.push(32);
	nuevaPila.push(42);
	nuevaPila.verPila();
	return 0;
}