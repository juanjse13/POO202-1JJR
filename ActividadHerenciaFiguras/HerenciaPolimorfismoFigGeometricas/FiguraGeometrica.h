
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <iostream>

using std::string;
using std::cout;
using std::cin;

class FiguraGeometrica {
    //Se definen los atributos que van a heredar las otras clases
    protected:
        float area;
        float perimetro;

    public:
        //Se define el constructor
        FiguraGeometrica();
        //Se definen las funciones que van a permitir la sobreescritura y el poliformismo
        virtual void calcularArea();
        virtual void calcularPerimetro();
        virtual float mostrarArea();
        virtual float mostrarPerimetro();
        virtual void dibujarFigura();

        //Se definen los gets
        float getArea();
        float getPerimetro();

};


#endif
