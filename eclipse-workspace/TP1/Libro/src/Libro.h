/*
 * Libro.h
 *
 *  Created on: 31 ago. 2022
 *      Author: Patrik
 */
#include <iostream>

#ifndef LIBRO_H_
#define LIBRO_H_

using namespace std;

class Libro {
    int codigo;
    string titulo;
    string descripcion;
    string autor;
    string categoria;
    float precioBase;
    static const float IVA;
    protected:
    float getIVA();
    float getPrecioBase();
    public:
    Libro(int, string, string, string, float);
    void listarInformacion();
    float calcularPrecioDeVenta();
};

#endif /* LIBRO_H_ */
