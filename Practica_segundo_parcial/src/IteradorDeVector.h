/*
 * IteradorDeVector.h
 *
 *  Created on: 6 dic. 2022
 *      Author: Patrik
 */

#ifndef ITERADORDEVECTOR_H_
#define ITERADORDEVECTOR_H_
#include <iostream>
using namespace std;
#include "Vector.h"

template <class X>
class IteradorDeVector {
private:
	const Vector<X> &vec;
	int pos;
public:
	IteradorDeVector(const Vector<X> &v):vec(v), pos(0){};
	bool hayMasElementos() {
		return pos != vec.max;
	}

	X elementoActual() {
		return vec[pos];
	}

	void avanzar() {
		pos += 1;
	}
	virtual ~IteradorDeVector();
};

#endif /* ITERADORDEVECTOR_H_ */
