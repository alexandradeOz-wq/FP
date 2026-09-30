/*
Implementar las siguientes funciones para imprimir una matriz
*/
#include <iostream>
using namespace std;

void imprimirMatriz1(int mat[][3], int filas);

void imprimirMatriz2(int (*mat)[3], int filas);

void imprimirMatriz3(int *mat, int filas, int columnas);

void imprimirMatriz4(int **mat, int filas, int columnas); // ???



int main(){
     int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*a)[3] = mat;

    cout << "Forma 1:\n";
    

    cout << "\nForma 2:\n";
    

    cout << "\nForma 3:\n";
    


    return 0;
}
