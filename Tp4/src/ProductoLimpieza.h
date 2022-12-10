/*
 * ProductoLimpieza.h
 *
 *  Created on: 21 sep. 2022
 *      Author: patri
 */

#include <iostream>
#ifndef PRODUCTOLIMPIEZA_H_
#define PRODUCTOLIMPIEZA_H_
using namespace std;
#include "Producto.h"

class Producto_Limpieza: public Producto {
	private:
        bool esToxico;
    public:
        Producto_Limpieza();
        Producto_Limpieza(int, string, double, bool);
        void listarInfo();
        // a getCodigo() no lo redefino porque uso el de la clase base.
        bool getToxicidad();
        double getPrecioFinal();
};

#endif /* PRODUCTOLIMPIEZA_H_ */
