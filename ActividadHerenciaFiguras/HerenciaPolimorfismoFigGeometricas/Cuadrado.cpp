#include "Cuadrado.h"

Cuadrado::Cuadrado(){
    this->lado = 0.0;
}

Cuadrado::Cuadrado(float lado){
    this->lado = lado;
}


void Cuadrado::calcularArea(){
    this->area = lado*lado;
}

void Cuadrado::calcularPerimetro(){
    this->perimetro = 4*lado;
}


void Cuadrado::dibujarFigura(){
    // Definimos ciclos anidados para filas y columnas del cuadrado
    for(int i = 0; i < lado; i++){
        for(int j = 0; j < lado; j++){
            if(i == 0 || j == 0 || i == lado - 1 || j == lado - 1){ // Extremos del cuadrado
                cout << "o";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}