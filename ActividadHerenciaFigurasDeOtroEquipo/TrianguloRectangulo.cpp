
#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo(float cateto1, float cateto2, float hipotenusa){
    this -> cateto1 = cateto1;
    this -> cateto2 = cateto2;
    this -> hipotenusa = hipotenusa;
}
TrianguloRectangulo::TrianguloRectangulo(){
    this -> cateto1 = 0.0;
    this -> cateto2 = 0.0;
    this -> hipotenusa = 0.0;
}
float TrianguloRectangulo::getArea(){
    Figura::getArea();
    return area;
}
float TrianguloRectangulo::getPerimetro(){
    Figura::getPerimetro();

}
float TrianguloRectangulo::calcularArea(){
    float area;
    area = (cateto1 * cateto2) / 2;
    return area;
}


float TrianguloRectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = cateto1 + cateto2 + hipotenusa;
    return perimetro;

}
void TrianguloRectangulo::mostrarArea(){
    Figura:: mostrarArea();

}
void TrianguloRectangulo::mostrarPerimetro(){
    Figura:: mostrarPerimetro();

}
void TrianguloRectangulo::representacion(){

}
