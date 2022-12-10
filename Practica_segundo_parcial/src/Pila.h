/*
 * Pila.h
 *
 *  Created on: 4 dic. 2022
 *      Author: patri
 */

#ifndef PILA_H_
#define PILA_H_

template <class X>
class Pila {
private:
	X arr[10];
	int tamanio;
public:
	Pila<X>(); // El constructor vacío va a ser el que crea mi pila
	Pila<X>(int);
	bool esPilaVacia();
	X top();
	void push(X);
	void pop();
	void verPila();
	virtual ~Pila();
};

template <class X>
Pila<X>::Pila() {
	this->tamanio = 0;
}

template <class X>
Pila<X>::Pila(int i) {
	this->tamanio = i;
}

template <class X>
void Pila<X>::verPila() {
	cout << "Tamanio pila: " << this->tamanio << endl;
	int aux = this->tamanio;
	while (aux--) {
		cout << "Elemento N°" << aux << ": " << this->arr[aux] << endl;
	}
}

template <class X>
bool Pila<X>::esPilaVacia() {
	if (this->tamanio == 0) {
		return true;
	} else {
		return false;
	}
}

template <class X>
X Pila<X>::top() {
	return this->arr[this->tamanio];
}

template <class X>
void Pila<X>::push(X item) {
	this->arr[tamanio++] = item;
}

template <class X>
void Pila<X>::pop() {
	this->tamanio--;
}

template <class X>
Pila<X>::~Pila(){}

#endif /* PILA_H_ */
