#ifndef DIRECTORIOFG_H
#define DIRECTORIOFG_H

#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"

using std::string;
using std::cout;
using std::cin;
using std::vector;


class DirectorioFG{
    //Se crea el vector que contiene a las figuras geometricas
    private:
        vector <FiguraGeometrica*> figurasGeometricas;

    public:
        //Se define el constructor
        DirectorioFG();
        void agregarFigura(FiguraGeometrica*);
        void mostrarAreas();
        void mostrarPerimetros();
        void calcularSumasAreas();
        void llenarDatosFiguraGeometrica();
        void dibujarFiguras();
        //Se define el destructor
        ~DirectorioFG();
};


#endif //DIRECTORIOFG_H