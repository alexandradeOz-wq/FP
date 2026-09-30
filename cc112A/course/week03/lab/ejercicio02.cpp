#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

/*
Algoritmo 1
*/
int contarInconsistencias(int arr[], int n) {
    int contador = 0;
    for(int i = 0; i < n; ++i) {
        for( int j = i+1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                contador++;
            }
        }
    }
    return contador;
}



/*
Algoritmo 2
*/
int merge(int arr[], int l, int m, int r){

    int inconsistencias = 0;

    int n1 = m - l + 1;
    int n2 = r - m;

    int L[10000], R[10000];  // crea arreglos ESTATICOS, temporales

    // copiamos datos a L y R
    for (int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; // desde l hasta  m

    for (int i = 0; i < n2; i++) 
        R[i] = arr[m + 1 + i]; // desde m + 1 hasta r
    

    
    int i=0, j = 0, k = l;

    // fusiona los arreglos temporales de nuevo en arr[l...r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            inconsistencias += n1 - i;
            arr[k++] = R[j++];
        }
    }

    // Copia elentos restantes de L (si existen)
    while(i < n1) {
        arr[k++] = L[i++];
    }

    // Copia elementos restantes de R (si existen)
    while(j < n2) {
        arr[k++] = R[j++];
    }

    return inconsistencias;
}

int mergeSort(int arr[], int l, int r) {
    int inconsistencias = 0;
    // Caso base
    if (l == r)
        return  0;
    
    //Caso recursivo
    int m = (l + r) /2;

    inconsistencias += mergeSort(arr,l,m);
    inconsistencias += mergeSort(arr,m+1,r);
    inconsistencias += merge(arr,l,m,r);
    
    return inconsistencias;

}




int main(){
    const int n1 = 10000;
    int arr[n1];

    for(int i = 0; i < n1; ++i) {
        arr[i] = n1 - i;
    }
    // int arr[] = {10, 12, 15, 11, 18, 17};

    // int n = sizeof(arr)/sizeof(arr[0]);



    auto inicio = high_resolution_clock::now();
    int resultado = contarInconsistencias(arr, n1);// mergeSort(arr, 0, n1-1);//contarInconsistencias(arr, n);
    auto fin = high_resolution_clock::now();
    auto duracion = duration_cast<microseconds>(fin - inicio);
    cout<< "tiempo: " << duracion.count() << " microsegundos " << endl;
    
    cout << "Numero de inconsistencias: " << resultado <<endl;


    return 0;
}