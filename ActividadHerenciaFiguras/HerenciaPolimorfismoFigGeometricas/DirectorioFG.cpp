#include "DirectorioFG.h"


void DirectorioFG::dibujarFiguras(){

}
void DirectorioFG::agregarFigura(FiguraGeometrica figura){
    figurasGeometricas.push(figura);

}
void DirectorioFG::mostrarAreas(){
    cout << "A continuacion se van a mostrar las areas de las figuras\n";
    for (int i = 0; i < figurasGeometricas.size(); ++i) {
        cout << "Area " << i+1 << < ": " << figurasGeometricas[i] -> getArea() << "\n";
    }
}

void DirectorioFG::mostrarPerimetros(){
    cout << "A continuacion se van a mostrar los perimetros de las figuras\n";
    for (int i = 0; i < figurasGeometricas.size(); ++i) {
        cout << "Perimetro " << i+1 << < ": " << figurasGeometricas[i] -> getPerimetro() << "\n";
    }
}

void DirectorioFG::calcularSumasAreas(){
    float sumaAreas = 0;
    for (int i = 0; i < figurasGeometricas.size(); ++i) {
        sumaAreas = sumaAreas + figurasGeometricas[i] -> getArea();
    }
    cout << "La suma total de las areas es: " << sumaAreas <<"\n";
}

