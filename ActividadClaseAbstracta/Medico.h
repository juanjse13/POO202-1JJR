#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>
#include "Profesion.h"

using std::string;
using std::cout;
using std::cin;

class Medico::public Profesion {
    private:
        string Especializacion;


    public:
        Medico(string);
        void mostrarTrabajo();

};


#endif MEDICO_H
