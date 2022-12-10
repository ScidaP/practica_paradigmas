/*
 * ProductoAlimenticio.h
 *
 *  Created on: 14 sep. 2022
 *      Author: Patrik
 */
#include <iostream>
#ifndef PRODUCTOALIMENTICIO_H_
#define PRODUCTOALIMENTICIO_H_
using namespace std;
#include "Producto.h"

class Producto_Alimenticio: public Producto {
    private:
        int mes_venc;
        int anio_venc;
        bool apto_celiacos;
    public:
        Producto_Alimenticio();
        Producto_Alimenticio(int, string, double, int, int, bool);
        // a getCodigo() no lo redefino porque uso el de la clase base.
        string getDescripcion();
        bool estaVencido();
        bool getAptoCeliacos();
        // Funciones polimorficas
        void listarInfo();
        double getPrecioFinal();
};

#endif /* PRODUCTOALIMENTICIO_H_ */
