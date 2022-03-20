#include <iostream>
#include<cmath>
#include "DirectorioFG.h"

using std::endl;

void despliegue(){
    cout << "1. Agregar una figura"<<endl;
    cout << "2. Mostrar el area de las figuras"<<endl;
    cout << "3. Mostrar perimetros de las figuras"<<endl;
    cout << "4. Calcular suma de todas las areas de las figuras"<<endl;
    cout << "5. Dibujar forma de las figuras geometricas"<<endl;
}

void menu(DirectorioFG directorioFigurasGeometricas){
    int opc, lado, radio, base, altura;
    do
    {
        despliegue();
        cin >> opc;
        switch (opc)
        {
            case 1:
            {
                directorioFigurasGeometricas.llenarDatosFiguraGeometrica();
                break;
            }
            case 2:
            {
                directorioFigurasGeometricas.mostrarAreas();
                break;
            }
            case 3:
            {
                directorioFigurasGeometricas.mostrarPerimetros();
                break;
            }
            case 4:
            {
                directorioFigurasGeometricas.calcularSumasAreas();
                break;
            }
            case 5:
            {
                directorioFigurasGeometricas.dibujarFiguras();
                break;
            }
            default:
                cout << "Opcion seleccionada no valida";
                break;
        }

    } while (opc != 0);
    
}

int main() {
    DirectorioFG directorioDeFigurasGeometricas;
    menu(directorioDeFigurasGeometricas);
    return 0;
    
}
