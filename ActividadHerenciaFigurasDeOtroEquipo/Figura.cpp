#include "Figura.h"

using std:: cout;
using std:: endl;

Figura:: Figura(){
    this-> area = 0;
    this-> perimetro = 0;
}

Figura:: Figura(float area, float perimetro){
    this-> area = area;
    this-> perimetro = perimetro;
}

float Figura:: calcularArea(){ // Realiza el mismo proceso que getArea, solo retorna el valor del área
    return area;
}

float Figura:: calcularPerimetro(){ // Realiza el mismo proceso que getPerimetro, solo retorna el valor del perimetro
    return perimetro;
}

void Figura:: mostrarArea(){
    cout<<"El area de la figura es: ";
    cout<<area;
    cout<<endl;
}

void Figura:: mostrarPerimetro(){
    cout<<"El perimetro de la figura es: ";
    cout<<perimetro;
    cout<<endl;
}

float Figura:: getArea(){ // Si su funcionalidad es la misma que calcularArea() es redundante esta función
    return area;
}
float Figura:: getPerimetro(){ // Si su funcionalidad es la misma que calcularPerimetro() es redundante esta función
    return perimetro;
}

void Figura::dibujarFiguraConColor(int number1 /*number1 = 7*/){
    HANDLE outputColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(outputColor,1); // Para Cuadrado
    // Definimos ciclos anidados para filas y columnas del cuadrado
    for(int i = 0; i < number1; i++){
        for(int j = 0; j < number1; j++){
            if(i == 0 || j == 0 || i == number1 - 1 || j == number1 - 1){ // Extremos del cuadrado
                cout << "o";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    SetConsoleTextAttribute(outputColor,0); // pone la letra en el color por defecto
}




void Figura::dibujarFiguraConColor(float radio/*radio = 8*/){
    HANDLE outputColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(outputColor,2); // Para Ciruclo

    float r = radio;

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
    SetConsoleTextAttribute(outputColor,0); // pone la letra en el color por defectos
}

void Figura::dibujarFiguraConColor(float number1 /*number1 = 10*/, float number2/*number2 = 6*/){
    HANDLE outputColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(outputColor,3); // Para Rectangulo
    for(int i = 0; i < number1; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 0; i <= number2; i++){
        cout<<"*";
        cout<<"        ";
        cout<<"*";
        cout<<endl;
    }
    for(int i = 0; i < number1; i++){
        cout<<"*";
    }
    cout<<endl;
    SetConsoleTextAttribute(outputColor,0); // pone la letra en el color por defecto
}

void Figura::dibujarFiguraConColor(){
    HANDLE outputColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(outputColor,4); // Para Triangulo Rectangulo
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < i; ++j) {
                cout << "*";
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(outputColor,0); // pone la letra en el color por defecto
}