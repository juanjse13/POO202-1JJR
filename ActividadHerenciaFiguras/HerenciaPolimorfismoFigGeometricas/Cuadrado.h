#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Se crea la clase hija Cuadrado
class Cuadrado : public FiguraGeometrica{
    //Se definen los atributos privados de la clase
    private:
        float lado;

    public:
        //Se definen los constructores
        Cuadrado();
        Cuadrado(float);
        //Se definen las funciones
        void calcularArea();
        void calcularPerimetro();
        void dibujarFigura();

};

#endif