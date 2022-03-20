#include "DirectorioFG.h"

using std::endl;

void DirectorioFG::llenarDatosFiguraGeometrica(){
    int ans,lado,radio,base,altura;
    cout << "1. Cuadrado"<<endl;
    cout << "2. Circulo"<<endl;
    cout << "3. Rectangulo"<<endl;
    cin >> ans;
    switch (ans)
    {
    case 1:
    {
        cout<<"Cual es el lado de cuadrado ? ";
        cin >> lado;
        Cuadrado* cuadrado = new Cuadrado(lado);
        agregarFigura(cuadrado);
        break;
    }
    case 2:
    {
        cout << "Cual es el radio del circulo ? ";
        cin >> radio;
        Circulo* circulo = new Circulo(radio);
        agregarFigura(circulo);
        break;
    }
    case 3:
    {
        cout << "Cual es la base del rectangulo ? ";
        cin >> base;
        cout << "Cual es la altura del rectangulo ? ";
        cin >> altura;
        Rectangulo* rectangulo = new Rectangulo(altura,base);
        agregarFigura(rectangulo);
        break;
    }
    default:
        break;
    }
    cout << endl;
}

void DirectorioFG::agregarFigura(FiguraGeometrica *figura){
    figurasGeometricas.push_back(figura);

}
void DirectorioFG::mostrarAreas(){
    cout << "A continuacion se van a mostrar las areas de las figuras\n";
    for (int i = 0; i < figurasGeometricas.size(); ++i) {
        figurasGeometricas[i]->calcularArea();
        cout << "Area " << i+1 << ": " << figurasGeometricas[i]->getArea() << "\n";
    }
    cout << endl;
}

void DirectorioFG::mostrarPerimetros(){
    cout << "A continuacion se van a mostrar los perimetros de las figuras\n";
    for (int i = 0; i < figurasGeometricas.size(); ++i){
        figurasGeometricas[i]->calcularPerimetro();
        cout << "Perimetro " << i+1 << ": " << figurasGeometricas[i]->getPerimetro() << "\n";
    }
    cout << endl;
}

void DirectorioFG::calcularSumasAreas(){
    float sumaAreas = 0;
    for (int i = 0; i < figurasGeometricas.size(); ++i) {
        sumaAreas = sumaAreas + figurasGeometricas[i]->getArea();
    }
    cout << "La suma total de las areas es: " << sumaAreas <<"\n";
    cout << endl;
}

void DirectorioFG::dibujarFiguras(){
    cout << "A continuacion se van a dibujar todas las figuras\n";
    for (int i = 0; i < figurasGeometricas.size(); i++){
        cout << endl;
        cout << "Figura : ";
        cout << endl;
        figurasGeometricas[i]->dibujarFigura();
    }
    cout << endl;
}


