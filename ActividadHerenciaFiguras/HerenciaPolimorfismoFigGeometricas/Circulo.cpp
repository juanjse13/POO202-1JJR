#include "Circulo.h"

Circulo::Circulo(){
    radio = 0.0;
}

Circulo::Circulo(float radio){
    this -> radio = radio;
}

void Circulo::calcularArea(){
    double pi = M_PI; //Se obtiene el valor de Pi
    this -> area = pi * (radio * radio);
}

void Circulo::calcularPerimetro(){
    double pi = M_PI; //Se obtiene el valor de Pi
    this -> perimetro = 2 * pi * radio;

}

float Circulo::mostrarArea(){
    return this -> area;

}

float Circulo::mostrarPerimetro(){
    return this -> perimetro;
}

void Circulo::dibujarFigura(){

}

