#include "Rectangulo.h"


Rectangulo::Rectangulo(){
    altura = 0.0;
    lado = 0.0;
}

Rectangulo::Rectangulo(float altura, float lado){
    this -> altura = altura;
    this -> lado = lado;
}

void Rectangulo::calcularArea(){
    this -> area = lado * altura;
}

void Rectangulo::calcularPerimetro(){
    this -> perimetro = (2 * lado) + (2 * altura);
}

float Rectangulo::mostrarArea(){
    return this -> area;
}

float Rectangulo::mostrarPerimetro(){
    return this -> perimetro;
}

void Rectangulo::dibujarFigura(){

}
