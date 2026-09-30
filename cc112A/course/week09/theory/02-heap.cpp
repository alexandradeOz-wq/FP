#include <iostream>
using namespace std;

int main() {

    cout << "Intentando reservar arreglo gigante  en STACK...\n";

    // 100 millones de enteros ? 
    // 100 x 4bytes = 400 millones = 400 MB
    
    // int datos[100000000]; // error de segmentación (stack-overflow)
    

    cout << "\nSolución, asignación dinámica\n";
    double *datos = new double[100000000]; // memoria en el heap
    if (datos != nullptr) {
        cout << "Asignación dinámica exitosa"<<endl;
    } else {
        cout << "Error. Memoria dinámica insifuciente" <<endl;
    }

    datos[0] = 123;

    cout << "datos[0] = " << datos[0] << endl;

    delete[] datos; // liberar memoria

    //datos[2] = 23; // ESTO ES PELIGROSO, genera comportamiento indefinido
    datos = nullptr; // BUENA PRÁCTICA, para evitar 
                     // puntero colgante (dangling pointer)
                    

    return 0;
}