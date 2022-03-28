#ifndef EJERCICIOHERENCIA_FIGURA_H
#define EJERCICIOHERENCIA_FIGURA_H

#include <iostream>
#include <windows.h>

class Figura {

    protected:
        float area;
        float perimetro;

    public:
        //Se definen los constructores
        Figura();
        Figura(float area, float perimetro);

        //Se definen las otras funciones
        virtual float getArea();
        virtual float getPerimetro();
        virtual float calcularArea();
        virtual float calcularPerimetro();
        virtual void mostrarArea();
        virtual void mostrarPerimetro();
        virtual void representacion() = 0; //Se define como virtualmente pura
        void dibujarFiguraConColor(int number1, int number2); // Cuadrado 
        void dibujarFiguraConColor(float radio); // Circulo
        void dibujarFiguraConColor(float number1,float number2); // Rectangulo
        void dibujarFiguraConColor(); //Triangulo Rectangulo
};


#endif //EJERCICIOHERENCIA_FIGURA_H