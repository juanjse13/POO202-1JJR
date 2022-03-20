#include "Circulo.h"
#include <math.h>

using std::endl;

Circulo::Circulo(){
    this->radio = 0.0;
}

Circulo::Circulo(float radio){
    this->radio = radio;
}

void Circulo::calcularArea(){
    //double pi = M_PI; //Se obtiene el valor de Pi
    this->area = M_PI  * (radio * radio);
}

void Circulo::calcularPerimetro(){
    //double pi = M_PI; //Se obtiene el valor de Pi
    this->perimetro = 2 * M_PI * radio;
}

void Circulo::dibujarFigura(){
    // Ejecutamos la función que describe un circulo en geometria analitica
    // pow(x - h, 2) + (y - k, 2) = pow(r,2)
    for(int x = 0; x <= radio * 2; x++){
        for(int y = 0; y <= radio * 2; y++){
            if(pow(y - radio , 2) + pow(x - radio, 2)<= pow(radio , 2))    
                cout << "o";
            else
                cout << " ";
        }
        cout << endl;
    }
}
