#include "View.h"

using std:: vector;
using std:: endl;
using std:: cout;
using std:: cin;

View:: View(){
    contador = -1;
}

int View::menu(){

    int opcion;

    cout << "Menu\n"
         <<endl;
    cout << "1. Agregar una figura" <<endl;
    cout << "2. Dibujar las figuras disponibles" <<endl;
    cout << "3. Mostrar el area de las figuras" <<endl;
    cout << "4. Mostrar el perimetro de las figuras" <<endl;
    cout << "5. Calcular la suma de las areas de las figuras"<<endl;
    cout << "6. Dibujar figuras con colores"<<endl;
    cout << "0. Salir\n"
         <<endl;
    cout << "Ingrese la opcion que desea realizar: ";
    cin >> opcion;

    return opcion;
}

void View:: ejecutar(){

    int opcion;
    vector<Figura *> figuras;

    do{
        opcion = menu();
        switch (opcion){

            case 0:
                break;

            case 1:
                agregarFigura(figuras);
                break;

            case 2:
                dibujarFiguras();
                break;

            case 3:
                mostrarAreas(figuras);
                break;

            case 4:
                mostrarPerimetros(figuras);
                break;

            case 5:
                sumaAreas(figuras);
                break;

            case 6:
                dibujarFigurasColores();
                break;

            default:
                cout << "No es una opcion valida, por favor intentelo de nuevo"<<endl;
                break;
        }
    } while (opcion != 0);
}

void View::agregarFigura(vector<Figura *> figuras){

    int opc;
    float radio;


    cout<<"Figuras disponibles:"<<endl;
    cout<<"1 - Circulo"<<endl;
    cout<<"2 - Rectangulo"<<endl;
    cout<<"3 - Cuadrado"<<endl;
    cout<<"4 - Triangulo rectangulo"<<endl;
    cout<<"Seleccione la figura que desea anadir:"<<endl;

    cin>>opc;

    switch(opc){
        case 1:{

            Circulo *obj;
            cout<<"Ingrese el radio del circulo: ";
            cin>>radio;
            obj = new Circulo(0, 0, radio);
            float area = obj->calcularArea(); /* Existe un input dentro de la función calcularPerimetro(),
            por lo que me pedira dos entradas por consola, lo correcto seria que la variable "radio" entrara como un parametro
            al metodo y así mismo hacer el calculo especifico, de esta manera solo habria un input por consola*/
            float perimetro = obj->calcularPerimetro();
            obj = new Circulo(area, perimetro, radio);

            figuras.push_back(obj);
            contador++;
            cout<<"Has creado la figura:"<<endl;
            figuras[contador]->representacion();
            figuras[contador]->mostrarArea(); // El calculo del área es incorrecto, muestra el doble del valor área del circulo
            figuras[contador]->mostrarPerimetro();

            delete obj;

            break;

        }
        case 2: {

            float ancho, alto;
            Rectangulo *obj;
            cout << "Ingrese el ancho del rectangulo: ";
            cin >> ancho;
            cout << "Ingrese el alto del rectangulo: ";
            cin >> alto;
            obj = new Rectangulo(0, 0, alto, ancho);
            float area = obj->calcularArea(); // retorna nan
            float perimetro = obj->calcularPerimetro(); // retorna nan
            obj = new Rectangulo(area, perimetro, alto, ancho); // estan ingresando valores nan al constructor

            figuras.push_back(obj);
            contador++;
            cout << "Has creado la figura:" << endl;
            /*Esta generando error al imprimir(No imprime y se deja de compilar el programa), pues la posición contador esta dada 
            erroneamente, se podria simplemente hacer obj->representacion() y así con nada una*/
            figuras[contador]->representacion(); 
            figuras[contador]->mostrarArea();
            figuras[contador]->mostrarPerimetro();

            delete obj;

            break;
        }
        case 3: {
            float lado;
            Cuadrado *obj;
            cout << "Ingrese el lado del rectangulo: ";
            cin >> lado;
            obj = new Cuadrado(0, 0, lado);
            float area = obj->calcularArea();
            float perimetro = obj->calcularPerimetro();
            obj = new Cuadrado(area, perimetro, lado); /*El ejecutar calcularArea() y calcularPerimetro() deberia realizar
            el respectivo calculo, sin embargo despues de calcular se ingresan los valores de nuevo al constructor*/

            figuras.push_back(obj);
            contador++;
            cout << "Has creado la figura:" << endl;
             /*Esta generando error al imprimir(No imprime y se deja de compilar el programa), pues la posición contador esta dada 
            erroneamente, se podria simplemente hacer obj->representacion() y así con nada una*/
            figuras[contador]->representacion();
            figuras[contador]->mostrarArea();
            figuras[contador]->mostrarPerimetro();
            delete obj;
            break;
        }
        case 4: {
            float cateto1, cateto2;
            TrianguloRectangulo *obj;
            cout << "Ingrese el primer cateto del triangulo: ";
            cin >> cateto1;
            cout << "Ingrese el segundo cateto del triangulo: ";
            cin >> cateto2;
            obj = new TrianguloRectangulo(0, 0, cateto1, cateto2);
            float area = obj->calcularArea();
            float perimetro = obj->calcularPerimetro();
            obj = new TrianguloRectangulo(area, perimetro, cateto1, cateto2);
            figuras.push_back(obj);
            contador++;
            cout << "Has creado la figura" << endl;
             /*Esta generando error al imprimir(No imprime y se deja de compilar el programa), pues la posición contador esta dada 
            erroneamente, se podria simplemente hacer obj->representacion() y así con nada una*/
            figuras[contador]->representacion();
            figuras[contador]->mostrarArea();
            figuras[contador]->mostrarPerimetro();








        }
        default: break;
    }

}

void View:: dibujarFiguras(){

    Rectangulo obj1 = Rectangulo();
    Cuadrado obj2 = Cuadrado();
    Circulo obj3 = Circulo();
    TrianguloRectangulo obj4 = TrianguloRectangulo();

    cout<<"FIGURAS DISPONIBLES\n";
    cout<<"-------------------\n";
    cout<<endl;

    cout<<"Rectangulo"<<endl;
    obj1.representacion();

    cout<<"Cuadrado"<<endl;
    obj2.representacion();

    cout<<"Cicrulo"<<endl;
    obj3.representacion();

    cout<<"Triangulo Rectangulo"<<endl;
    obj4.representacion();

}
void View:: mostrarAreas(vector <Figura *> figuras){

    for(int i = 0; i < this-> contador; i++){
        cout<<i;
        cout<<". ";
        figuras[i]->mostrarArea();
        cout<<endl;
    }
}

void View:: mostrarPerimetros(vector <Figura *> figuras){
    for(int i = 0; i < this-> contador; i++){
        cout<<i;
        cout<<". ";
        figuras[i]->mostrarPerimetro();
        cout<<endl;
    }
}
void View:: sumaAreas(vector <Figura *> figuras){
    float total;
    for(int i = 0; i < this->contador; i++){
        total += figuras[i]->getArea();
    }
    cout<<"El area acumulada por las figuras es de: "<<total<<"m2"<<endl;

}

void View::dibujarFigurasColores(){

    int opcion;
    cout << "Que quieres graficar? 1. Cuadrado 2. Circulo 3. Rectangulo 4. Triangulo rectangulo" <<endl;
    cin >> opcion;
    Rectangulo obj1 = Rectangulo();
    Cuadrado obj2 = Cuadrado();
    Circulo obj3 = Circulo();
    TrianguloRectangulo obj4 = TrianguloRectangulo();
    switch (opcion) {



        case 1:
            int lado1;
            cout << "Escriba el lado 1" << endl;
            cin >> lado1;
            obj2.dibujarFiguraConColor(lado1); // Cuadrado
            break;

        case 2:
            float radio;
            cout << "Escriba el radio" << endl;
            cin >> radio;
            obj3.dibujarFiguraConColor(radio); // Circulo
            break;

        case 3:
            float number1, number2;
            cout << "Escriba el lado 1" << endl;
            cin >> number1;
            cout << "Escriba el lado 1" << endl;
            cin >> number2;
            obj1.dibujarFiguraConColor(number1, number2); // rectangulo
            break;

        case 4:
            obj4.dibujarFiguraConColor(); // Cuadrado
            break;
    }

}