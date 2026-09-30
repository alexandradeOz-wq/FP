/*
Redimensionar un arreglo dinámico
*/

#include <iostream>
using namespace std;

int main(){
    // 1. Preguntar cuántos estudiantes hay
    int n;
    cout << "Ingrese la cancidad de estudiantes";
    cin >> n;

    // 2. Reservar memoria justo para esa cantidad
    int *notas = new int[n];



    // Asumiendo que se retiraron 10 estudiantes REDIMENSIONAMOS el arreglo notas
    //paso 1
    int *notas1 = new int [20];

    // Paso2 Copiamos
    for(int i = 0; i < 20; ++i) {
        notas1[i] = notas[i];
    }

    // Paso 3
    delete[] notas;
    notas = notas1;

    return 0;
}