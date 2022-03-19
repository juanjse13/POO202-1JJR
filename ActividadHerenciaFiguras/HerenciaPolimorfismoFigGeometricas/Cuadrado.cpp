#include "Cuadrado.h"

Cuadrado::Cuadrado(){
    lado = 0.0;
}

Cuadrado::Cuadrado(float lado){
    this -> lado = lado;
}


void Cuadrado::calcularArea(){
    this -> area = lado * lado;
}

void Cuadrado::calcularPerimetro(){
    this -> perimetro = 4 * lado;
}

float Cuadrado::mostrarArea(){
    return this -> area;
}

float Cuadrado::mostrarPerimetro(){
    return this -> perimetro;
}

void Cuadrado::dibujarFigura(){

}

