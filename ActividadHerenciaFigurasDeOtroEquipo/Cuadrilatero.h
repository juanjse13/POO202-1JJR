#ifndef EJERCICIOHERENCIA_CUADRILATERO_H
#define EJERCICIOHERENCIA_CUADRILATERO_H

#include "Figura.h"


class Cuadrilatero : public Figura {
    protected:
        float lado1, lado2, lado3, lado4; /* Debe existir una minima diferenciación con respecto a las subclases,
        pues la fórmula para calcular el área de un cuadrado solo necesita de un lado, pues todos miden lo mismo, 
        pero en el caso del rectangulo ne necesita base y altura, asi pues pueden presentarse inconvenientes calculando
        el area de las figuras*/
    public:
        Cuadrilatero();

        float getArea() override;
        float getPerimetro() override;
        float calcularPerimetro() override;
        float calcularArea() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;

};


#endif //EJERCICIOHERENCIA_CUADRILATERO_H