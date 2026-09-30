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


void quickSort(int arr[], int l, int r) {
    // Caso base
    if (l >= r)
        return;
    
   
    int pi = particion(arr,l,r); // retorna indice del pivote
    
     // Llamadas recursivas
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
    
}

// funciones auxiliares
void imprimir(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;
}



int main(){
    int arr[] = {2,1, 4, 3, 6,7, 8};

    int n = sizeof(arr)/sizeof(arr[0]);

    
    //llamamos a la función mergeSort
    quickSort(arr, 0, n-1);


    cout << "Arrego ordenado mediante quickSort:\n";
    imprimir(arr,n);

    return 0;
}