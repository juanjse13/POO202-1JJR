#include "Directorio.h"

Directorio::Directorio(){

}

void Directorio::llenarDatos(){
    int ans;
    int facultad, departamento, especializacion;
    cout << "1. Profesor"<<endl;
    cout << "2. Medico"<<endl;
    cout << "3. Ingeniero"<<endl;
    cin >> ans;
    switch (ans)
    {
        case 1:
        {
            cout<<"Cual es la facultad ? ";
            cin >> facultad;
            cout << "Cual es el departamento ?"
            cin >> departamento;
            Profesor* profesor = new Profesor(departamento,facultad);
            agregarProfesion(profesor);
            break;
        }
        case 2:
        {
            cout << "Cual es la especializacion ? ";
            cin >> especializacion;
            Medico* medico = new Medico(especializacion);
            agregarFigura(medico);
            break;
        }
        case 3:
        {
            cout << "Cual es la especialidad ? ";
            cin >> especializacion;
            Ingeniero* ingeniero = new Ingeniero(especializacion);
            agregarFigura(ingeniero);
            break;
        }
        default:
            break;
    }
    cout << endl;
}


void Directorio::agregarProfesion(Profesion* profesion){
    profesiones.push_back(profesion);
}


Directorio::~Directorio(){
    for (int i = 0; i < profesiones.size(); ++i) {
        Profesion * tempProfesion = profesiones[i];
        delete tempProfesion;
        cout << "Se llama al destructor\n";

    }
}
