#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    int nota;
};


int main(){
    Estudiante* e = new Estudiante;

    e->nombre = "Luis";
    e->edad = 21;
    (*e).nota = 18.2; // Notación alternativa

    cout << e->nombre;
    delete e;

    /*
    Supongamos que estamos construyendo un sistema de matrícula.
    No sabemos cuántos estudiantes ingresarán. 
    ¿Cómo los almacenamos sin límites fijos?”
    */
   int n;
   cout << "Cuantos estudiantes ingresará: ";
   cin >>n;
   Estudiante* e1 = new Estudiante[n];






  

    return 0;
}
