#include <iostream>
using namespace std;

void espiralRec(int M[][10],int inicio, int fin, int resultado[], int& k) {
    // Caso base
    if(inicio > fin) {
        return;
    }

    if (inicio == fin) {
        resultado[k] = M[inicio][inicio];
        k++;
    }

    // Caso recursivo
    for (int j = inicio; j <=fin; ++j) { // recorrido izq --> derecha
        resultado[k] = M[inicio][j];
        k++;
    }

    for (int i = inicio + 1; i <=fin; ++i) { // recorrido arriba  ↓ abajo
        resultado[k] = M[i][fin];
        k++;
    }

    for (int j = fin - 1; j >= inicio; --j) { // recorrido derecha <-- izq
        resultado[k] = M[fin][j];
        k++;
    }

    for (int i = fin - 1; i >= inicio + 1; --i) { // recorrido abajo ↑ arriba
        resultado[k] = M[i][inicio];
        k++;
    }

    espiralRec(M, inicio + 1, fin - 1, resultado,k);
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // Datos
    int n = 4;

    int M[10][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10,11,12},
        {13, 14, 15,16}
    };

    int resultado[100];
    int k = 0; // para manejar el índice de resultado

    // Procesamiento
    espiralRec(M, 0, n-1, resultado,k);

    // Salida
    imprimir(resultado,k);

    return 0;
}


