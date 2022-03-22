#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include <vector>
#include "Profesion.h"


using std::string;
using std::cout;
using std::cin;
using std::endl;


class Directorio {
    private:
        vector<Profesion*> profesiones;

    public:
        Directorio();
        ~Directorio();
        void llenarDatos();
        void agregarProfesion(Profesion*);

};


#endif
