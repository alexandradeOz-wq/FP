/*
Reservar/liberar memoria dinámica para almecenar
una matriz dinámica contigua
*/

#include <iostream>
using namespace std;

int main(){

    // Solicitar filas y columnas
    int filas, columnas;
    cout << "Ingresar el numero de filas y columnas respectivamente: ";
    cin >> filas >> columnas;


    // Asignar memoria dinámica contigua
    int *m = new int[filas * columnas];

    // Inicializar y mostrar matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            m[i * columnas + j] = i + j; // PARTE MÁS IMPORTANTE
        }
    }


    // Liberar memoria
    delete[] m;

    return 0;
}