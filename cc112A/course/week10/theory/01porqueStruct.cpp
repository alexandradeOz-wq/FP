/*
¿Cómo manejo un Registro de estudiantes (nombres, edad, nota ...)?
Un jugador en un videojuego?
Los datos que regista un sensor?
*/

#include <iostream>
using namespace std;

int main(){

    // EL PROBLEMA
    // string nombre1 = "Ana";
    // int edad1 = 20;
    // float nota1 = 13.5;

    // string nombre2 = "Juan";
    // int edad1 = 19;
    // float nota2 = 15.6;
    // // .....


    // LA SOLUCIÓN struct
    struct Estudiante{
        string nombre;
        int edad;
        int nota;
    };

    Estudiante est[100];


    return 0;
}
