/*
Reservar/liberar memoria dinámica para almecenar
una matriz dinámica NO CONTIGUA
*/

#include <iostream>
using namespace std;

int main(){

    int filas, columnas;
    // Solicitar filas y columnas
    cout << "Ingrese el numero de filas y columnas: ";
    cin >> filas >> columnas;


    
    // LO QUE DEBES ENTENDER EN ESTE EJERCICIO 
    // Asignar memoria dinámica no contigua
    int **M = new int*[filas];    // memoria dinamica para un arreglo de punteros
                                  // podemos tratarlo como M[i][j]
    for(int i = 0; i < filas; ++i) {
        M[i] = new int[columnas];
    }



    // Inicializar y mostrar matriz
    for(int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            M[i][j] = i * j;
        }
    }

    // LO QUE DEBES ENTENDER EN ESTE EJERCICIO 
    // Liberar memoria
    for (int i = 0; i < filas; ++i) {
        delete[] M[i];
        M[i] = nullptr;
    }
    delete[] M;
    M = nullptr;

    //delete[] M[1];

    return 0;
}
