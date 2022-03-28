#include "Circulo.h"
#include "Figura.h"
#define _USE_MATH_DEFINES
#include <math.h>
#define PI M_PI

using std:: cout;
using std:: cin;
using std:: endl;


Circulo:: Circulo() : Figura(){
    this-> radio = 0;
}

Circulo:: Circulo(float area, float perimetro, float radio) : Figura(area, perimetro){
    this-> radio = radio;
}

float Circulo::calcularArea() {
    float area;
    area = 2 * PI * pow(this -> radio, 2); // El área de un ciculo se calcula como PI*Pow(radio,2), aquí se esta realizando un mal calculo
    return area;
}

float Circulo:: calcularPerimetro(){
    float perimetro;
    cin>>radio; // este input es redundante, pues ya se hace el calculo con el puntero this, mención al atributo radio, sin embargo, este es el radio de la clase. 
    perimetro = 2 * PI * this -> radio;
    return perimetro;
}

void Circulo:: mostrarArea(){
    Figura:: mostrarArea();
}

void Circulo:: mostrarPerimetro(){
    Figura:: mostrarPerimetro();
}

//Profe, muy honestamente tomamos este de internet porque por más que intentamos no nos formaba un círculo

void Circulo:: representacion(){

    float r = 8;

    float pr = 2;

    for (int i = -r; i <= r; i++)
    {
        for (int j = -r; j <= r; j++)
        {
            float d = ((i*pr)/r)*((i*pr)/r) + (j/r)*(j/r);


            if (d >0.95 && d<1.08)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }

}

float Circulo:: getArea(){
    Figura::getArea();
}
float Circulo:: getPerimetro(){
    Figura::getPerimetro();
}