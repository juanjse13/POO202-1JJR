#include "Rectangulo.h"

using std:: cout;
using std::cin;
using std:: endl;

Rectangulo:: Rectangulo() : Cuadrilatero(){ // Constructor por defecto de la clase cuadrilatero

}

Rectangulo::Rectangulo(float area, float perimetro, float alto, float ancho) : Cuadrilatero(){
    this-> lado1 = alto;
    this-> lado2 = ancho;
    this-> lado3 = alto;
    this -> lado4 = ancho;
    /*Aquí ya se tiene en en cuenta una diferenciación, de manera que, Cuadrilatero::calcularArea() => area = lado1 * lado2 */
    /*No se esta guardando area ni perimetro en ningun lugar, solo estan ingresando como parametro sin realizar nada*/
}

float Rectangulo:: calcularArea(){
    Cuadrilatero::calcularArea(); /*Existe un error, pues al ir a cuadrilatero, se llama a figura y en figura solo retorna el valor
    del area, asi pues no se realiza el calculo y tan solo hay retorno*/
}

float Rectangulo:: calcularPerimetro(){
    Cuadrilatero:: calcularPerimetro();
}

void Rectangulo:: mostrarArea(){
    Cuadrilatero::mostrarArea();
}
void Rectangulo:: mostrarPerimetro(){
    Cuadrilatero::mostrarPerimetro();
}
void Rectangulo:: representacion(){

    for(int i = 0; i < 10; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 0; i <= 6; i++){
        cout<<"*";
        cout<<"        ";
        cout<<"*";
        cout<<endl;
    }
    for(int i = 0; i < 10; i++){
        cout<<"*";
    }
    cout<<endl;


}

float Rectangulo:: getArea(){ 
    Cuadrilatero::getArea();
}
float Rectangulo:: getPerimetro(){ 
    Cuadrilatero::getPerimetro();
}