#include <iostream>
using namespace std;

// void merge(); // Ejericicio adaptar la implementacion de la funcion merge

/*
Mezcla 2 subarreglos de arr[]
Primer subarreglo: arr[l...m]
Segundo subarreglo: arr[m+1...r]
*/
void merge(int arr[], int l, int m, int r){

    int n1 = m - l + 1;
    int n2 = r - m;

    int L[100], R[100];  // crea arreglos ESTATICOS, temporales

    // copiamos datos a L y R
    for (int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; // desde l hasta  m

    for (int i = 0; i < n2; i++) 
        R[i] = arr[m + 1 + i]; // desde m + 1 hasta r
    

    
    int i=0, j = 0, k = l;

    // fusiona los arreglos temporales de nuevo en arr[l...r]
    while (i < n1 && j < n2) {
        if (L[i] < R[j]) 
            arr[k++] = L[i++];
        else 
            arr[k++] = R[j++];
    }

    // Copia elentos restantes de L (si existen)
    while(i < n1) {
        arr[k++] = L[i++];
    }

    // Copia elementos restantes de R (si existen)
    while(j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    // Caso base
    if (l == r)
        return;
    
    //Caso recursivo
    int m = (l + r) /2;

    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);  

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
    mergeSort(arr, 0, n-1);


    cout << "Arrego ordenado mediante mergeSort:\n";
    imprimir(arr,n);

    return 0;
}