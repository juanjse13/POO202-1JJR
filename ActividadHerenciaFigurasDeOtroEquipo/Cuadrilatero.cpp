#include "Cuadrilatero.h"


Cuadrilatero:: Cuadrilatero() : Figura(){
    this-> lado1 = 0;
    this-> lado2 = 0;
    this-> lado3 = 0;
    this-> lado4 = 0;
}

float Cuadrilatero::calcularPerimetro() {
    float perimetro;
    perimetro = (this-> lado1 + this-> lado2 + this-> lado3 + this-> lado4);
    return perimetro; /* El metodo calcularPerimetro() no guarda en la clase el valor del perimetro como atributo,
    solo crea una variable local y la retorna, así no mostrara el perimetro de la subclase cuadrilatero para la clase padre figura */
}

float Cuadrilatero::calcularArea() {
    Figura:: calcularArea(); /*Esta función dentro de la clase figura solamente retorna el valor del área,
    así que su llamado no va a calcular el area del cuadilatero*/
    return area; // No hace falta pues ya se retorna en figura::calcularArea()
}

void Cuadrilatero:: mostrarArea(){
    Figura::mostrarArea();
}
void Cuadrilatero:: mostrarPerimetro(){
    Figura::mostrarPerimetro();
}

float Cuadrilatero:: getArea(){ // Hay dos retornos, hay redundancia en este metodo
    Figura::getArea();
    return area;
}
float Cuadrilatero:: getPerimetro(){ // Hay dos retornos, hay redundancia en este metodo
    Figura::getPerimetro();
    return perimetro;
}