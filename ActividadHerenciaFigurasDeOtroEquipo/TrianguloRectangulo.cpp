#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo(float area, float perimetro, float cateto1, float cateto2): Figura(area, perimetro){
    this -> cateto1 = cateto1;
    this -> cateto2 = cateto2;
    this -> hipotenusa = pow((pow(cateto1, 2), pow(cateto2, 2)), 1/2);
}
TrianguloRectangulo::TrianguloRectangulo(): Figura(){
    this -> cateto1 = 0.0;
    this -> cateto2 = 0.0;
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
    //La ecuacion de un triangulo rectangulo se basa en pitagoras...se pensaba considerar dibujar en base a los valores que tengan los atributos
    //No obstante, el equipo que habia hecho este codigo, muestra es las figuras que hacen parte del sistema, mas no su representacion real
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < i; ++j) {
                cout << "*";
        }
        cout << "\n";

    }

}