#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

//Se crea la clase hija Rectangulo
class Rectangulo : public FiguraGeometrica{
    //Se definen los atributos privados de la clase
    private:
        float altura;
        float lado;

    public:
        //Se define el constructor
        Rectangulo();
        Rectangulo(float, float);
        //Se definen las funciones
        void calcularArea();
        void calcularPerimetro();
        void dibujarFigura();

};


#endif