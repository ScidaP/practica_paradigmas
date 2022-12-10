/*
 * Vector.h
 *
 *  Created on: 6 dic. 2022
 *      Author: Patrik
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
using namespace std;

class IteradorDeVector;

template <class item>
class Vector {
private:
	item *arreglo;
	int max;
	bool reservarMemoria(int dim);
public:
	Vector();
	int getCapacidad();
	item &operator[](int pos)const;
	friend class IteradorDeVector;
	virtual ~Vector();
};

#endif /* VECTOR_H_ */
