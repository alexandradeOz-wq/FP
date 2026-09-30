#include <iostream>

using namespace std;

int main() {

    // 1 crea una variable en el heap
    double *ph = new double;

    // Asigna un valor
    *ph = 3.1415;
   
    // Muestra el valor en el heap
    cout << *ph << endl;

    // 2 Libera memoria
    delete ph;

    // 3 evita puntero colgante (BUENA PRÁCTICA)
    ph = nullptr;

    return 0;
}