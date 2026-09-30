/*
1. Implementar una funcion utilizando exclusivamente punteros
para imprimir un arreglo de enteros y la direccion de sus elementos

2. Tarea: Repetir el ejercicio anterior pero considerando un arreglo de caracteres
*/

#include <iostream>
using namespace std;

void imprimir(int *p, int n) {
    for (int i = 0; i < n; ++i) {
        cout << *(p+i) << "  Direccion: " << (p+i) <<endl;
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int *p = arr;

    imprimir(p,n);


    return 0;
}