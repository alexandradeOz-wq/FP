#include <iostream>
using namespace std;

int particion(int arr[], int l, int r) {
    int pivote = arr[r]; // elegimos pivote (derecho)
    int i = l - 1; // posicion correcta actual del pivote 
    for(int j = 0; j < r; ++j) { // recorre arr[l...r-1] y pone los arr[j] < pivote a la izquierda
        if (arr[j] < pivote) {
            i++; // elementos desde l...i son menores que el pivote despues de cada iteracion
            swap(arr[i],arr[j]);
        }
    }

    //paso mas importante: colocar el pivote en su posicion correcta
    swap(arr[i+1], arr[r]);
    return i+1; // y retorna su posicion
}

int main(){
    

    return 0;
}