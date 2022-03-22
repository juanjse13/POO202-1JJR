#ifndef PROFESOR_H
#define PROFESOR_H

#include <iostream>
#include "Profesion.h"

using std::string;
using std::cout;
using std::cin;



class Profesor::public Profesion{
    private:
        string Departamento;
        string Facultad;

    public:
        Profesor(string,string);
        void mostrarTrabajo();



};


#endif
