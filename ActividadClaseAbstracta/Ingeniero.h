#ifndef INGENIERO_H
#define INGENIERO_H

#include <iostream>
#include "Profesion.h"

using std::string;
using std::cout;
using std::cin;


class Ingeniero::public Profesion {
    private:
        string Especialidad;

    public:
        Ingeniero(string);
        void mostrarTrabajo();

};


#endif
