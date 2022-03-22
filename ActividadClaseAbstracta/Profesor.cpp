#include "Profesor.h"

Profesor::Profesor(string Departamento,string Facultad){
    this -> Departamento = Departamento;
    this -> Facultad = Facultad;
}

void Profesor::mostrarTrabajo(){
    cout << "Es un profesor";

}
