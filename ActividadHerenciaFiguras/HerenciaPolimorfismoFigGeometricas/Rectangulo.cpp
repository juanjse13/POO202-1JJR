#include "Rectangulo.h"

using std::endl;

Rectangulo::Rectangulo(){
    this->altura = 0.0;
    this->lado = 0.0;
}

Rectangulo::Rectangulo(float altura, float lado){
    this->altura = altura;
    this->lado = lado;
}

void Rectangulo::calcularArea(){
    this->area = lado * altura;
}

void Rectangulo::calcularPerimetro(){
    this->perimetro = (2 * lado) + (2 * altura);
}

void Rectangulo::dibujarFigura(){ // Ciclos anidados para las filas y columnas de la figura (rectangulo)
    for(int b = 0; b < lado; b++){
        for(int h = 0; h < altura; h++){
            if(b == 0 || h == 0 || b == lado - 1 || h == altura - 1){
                cout << "o";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}