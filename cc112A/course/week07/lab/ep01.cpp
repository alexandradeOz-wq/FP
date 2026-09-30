#include <iostream>
using namespace std;

void espiralRec(int M[][10],int inicio, int fin, int resultado[], int& k) {
    // Caso base
    if(inicio > fin) return;
    
    if (inicio == fin) resultado[k++] = M[inicio][inicio];

    // Caso recursivo: inicia en la esquina superior izquierda
    for (int i = inicio; i <=fin; ++i) // recorrido arriba  ↓ abajo
        resultado[k++] = M[i][inicio]; // asigna luego actualiza k

    for (int j = inicio + 1; j <=fin; ++j) // recorrido izq --> derecha
        resultado[++k] = M[fin][j];

    for (int i = fin - 1; i >= inicio; --i) // recorrido abajo ↑ arriba
        resultado[k++] = M[i][fin];

    for (int j = fin - 1; j >= inicio + 1; --j) // recorrido derecha <-- izq
        resultado[k++] = M[inicio][j];

    espiralRec(M, inicio + 1, fin - 1, resultado,k);
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n = 4;
    int M[10][10] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10,11,12},
        {13, 14, 15,16}
    };

    int resultado[100], k = 0; 
    espiralRec(M, 0, n-1, resultado,k);
    
    imprimir(resultado,k);

    return 0;
}


