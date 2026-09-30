#include <iostream>
#include <string>
using namespace std;


// Definición:
struct Estudiante {
    string nombre;
    int edad;
    float nota;
};

int main(){

    // Declaración
    Estudiante e1;
    
    // Inicialización
    // Forma 1: C-style
    Estudiante e2 = {"Ana", 23,12.3};

    // Forma 2: C++20 en adelante
    Estudiante e3 = {.nombre="Ana",.edad=20, .nota=13};


    // Forma 3: Post-declaración
    e1.nombre = "Andres";
    e1.edad = 23;
    e1.nota = 17;



    // ASIGNACIÓN
    Estudiante copiae3 = e3;



    // ESCRITURA (en memoria)
    Estudiante e4;
    cout << "Ingrese nombre: ";
    getline(cin, e4.nombre);      // Escritura en miembro nombre

    cout << "Ingrese edad: ";
    cin >> e4.edad;               // Escritura en miembro edad

    cout << "Ingrese nota: ";
    cin >> e4.nota;               // Escritura en miembro nota




    // LECTURA 
    cout << "\n--- DATOS DEL ESTUDIANTE ---" << endl;
    cout << "Nombre: " << e4.nombre << endl;   // Lectura de nombre​
    cout << "Edad: " << e4.edad << endl;       // Lectura de edad​
    cout << "Nota: " << e4.nota << endl;       // Lectura de nota



    return 0;
}