/*
Simulando una matriz 3D
*/

#include <iostream>
using namespace std;

int main(){
    int X, Y, Z;
    cout << "Ingrese, capas, filas y columnas: ";
    cin >> X >> Y >> Z;

    // 1. Memoria contigua
    int* M3d = new int[X * Y * Z];


    // Asignando elementos
    for (int i = 0; i < X*Y*Z; ++i) {
        M3d[i] = i+1;
    }

    // Mostrando la matriz 3D
    for (int x = 0; x < X; ++x){
        cout << "\ncapa" << x << endl;
        for (int y = 0; y < Y; ++y) {
            for (int z = 0; z < Z; ++z) {
                cout << M3d[z + Z*y + Y*Z*x] << " ";
            }
            cout << endl;
        }
        cout <<'\n';
    }

    // Liberando memoria contigua






    // 2 Memoria no contigua
    int ***m3d = new int**[X];

    for (int i = 0; i < X; ++i) {
        m3d[i] = new int*[Y]; 
        for(int j = 0; j < Y; ++j) {
            m3d[i][j] = new int[Z];
        }
    }

    // Asignando elementos


    // Imprimiendo la matriz 3D
    
    
    //  2 Liberando memoria no contigua
    // Tenemos  X*Y + X + 1  new
    for (int i = 0; i < X; ++i) {
        for(int j = 0; j < Y; ++j) {
            delete[] m3d[i][j];;
        }
        delete[] m3d[i]; 
    }
    delete [] m3d;
    
    

    return 0;
}