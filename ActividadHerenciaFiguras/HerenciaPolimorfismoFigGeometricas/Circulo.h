#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "FiguraGeometrica.h"

using std::string;
using std::cout;
using std::cin;

//Se crea la clase hija Circulo
class Circulo : public FiguraGeometrica{
    //Se definen los atributos privados de la clase
    private:
        float radio;
    public:
        //Se definen los constructores
        Circulo();
        Circulo(float);
        //Se definen las funciones que van a permitir la sobreescritura y el poliformismo
        void calcularArea();
        void calcularPerimetro();
        void dibujarFigura();

};

#endif