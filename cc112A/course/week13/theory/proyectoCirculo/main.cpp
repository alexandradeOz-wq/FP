// main.cpp — APLICACIÓN (el "qué")
#include "circulo.h"
#include <iostream>
using namespace std;

int main(){
    Circulo c; // Llama al constructor por defecto que implementamos
    Circulo c1(3); // Llama al constructor de parametros
    //c1.setRadio(-3);

    cout << c1.getArea() << endl;

    Circulo c3 = c1;  // constructor de copia por defecto

    c3.setRadio(3);



    return 0;
}