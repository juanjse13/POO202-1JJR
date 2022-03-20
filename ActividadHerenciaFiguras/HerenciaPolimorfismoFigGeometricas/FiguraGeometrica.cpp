#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    perimetro = 0.0;
    area = 0.0;
}

float FiguraGeometrica::getArea(){
    return this->area;
}
float FiguraGeometrica::getPerimetro(){
    return this->perimetro;
}

void FiguraGeometrica::calcularArea(){
    cout << "Calculando Area...";
}

void FiguraGeometrica::calcularPerimetro(){
    cout << "Calculando perimetro...";
}

void FiguraGeometrica::dibujarFigura(){
}
