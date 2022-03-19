#ifndef DIRECTORIOFG_H
#define DIRECTORIOFG_H

#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"

using std::string;
using std::cout;
using std::cin;


class DirectorioFG {
    //Se crea el vector que contiene a las figuras geometricas
    private:
        vector <FiguraGeometrica*> figurasGeometricas;

    public:
        void dibujarFiguras();
        void agregarFigura(FiguraGeometrica);
        void mostrarAreas();
        void mostrarPerimetros();
        void calcularSumasAreas();



};


#endif DIRECTORIOFG_H
