#ifndef TRIANGULORECTANGULO_H
#define TRIANGULORECTANGULO_H

#include "Figura.h"

class TrianguloRectangulo: public Figura {
    private:
        float cateto1;
        float cateto2;
        float hipotenusa;

    public:
        //Se definen los constructores
        TrianguloRectangulo(float, float, float);
        TrianguloRectangulo();
        //Se definen las otras funciones
        float getArea() override;
        float getPerimetro() override;
        float calcularArea() override;
        float calcularPerimetro() override;
        void mostrarArea() override;
        void mostrarPerimetro() override;
        void representacion() override;
};


#endif
