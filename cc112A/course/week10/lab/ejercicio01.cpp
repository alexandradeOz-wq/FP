#include <iostream>
using namespace std;

// Funcion generarMatriz dinamica (Nicolas Sanchez Alfaro)
int** crearMatriz( int n , int m){
    int** M =nullptr;
    M = new int*[n];
    for (int i = 0; i < n; i++) {
        M[i] = new int[m];
    }
    return M;
}

// función imprimirMatriz (Flavio Lopez)
void imprimirMatriz(int** M, int n, int m){
    for(int filas=0;filas<n;filas++){
        for(int col=0;col<m;col++){
            cout<<M[filas][col]<<" ";
        }cout<<endl;
    }
}

// Liberar memoria (Fred Camacho)
void deleteMatriz(int** M, int n){
    for(int i = 0; i < n; ++i){
        delete [] M[i];
        M[i] = nullptr;
    }
    delete[] M;
    M = nullptr;
}

// Funcion auxiliar
bool fueEliminado(int arr[], int n, int elemento) {
    for (int i = 0; i < n; ++i) {
        if(arr[i] == elemento) {
            return true;
        }
    }
    return false;
}

// Funcion generarB()
int** generarB(int ** A, 
              int n, int m,
              int FIL[], int tamFIL,
              int COL[], int tamCOL,
              int &filasB, int &colsB) {
    filasB = n - tamFIL; // Silva
    colsB = m - tamCOL;
    int **B = crearMatriz(filasB,colsB);

    int filaB = 0;
    
    for(int i = 0; i < n; ++i) { // recorremos las filas de A
        int colB = 0;
        if (!fueEliminado(FIL, tamFIL, FIL[i])) {
            for (int j = 0; j < m; ++j) { // recoremos la col de A
                if(!fueEliminado(COL, tamCOL, COL[j])) {
                    B[filaB][colB] = A[i][j];
                    colB++;
                }       
            }
            filaB++;
        }
    }

    return B;
}

int main(){
    int n = 6;
    int m = 7;

    int **A = crearMatriz(n,m);

    int data[6][7] = {
        {0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0},
        {0,0,0,1,0,0,0},
        {0,0,0,0,0,0,0},
        {0,1,0,0,1,0,0},
        {0,0,0,0,0,0,0}
    };

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            A[i][j] = data[i][j];
        }
    }

    int nuevafila, nuevaCol;

    int FIL[] = { 0, 5};
    int COL[] = {0, 5, 6};

    // Llamar a las funciones
    // Liberar memoria dinámica


    return 0;
}