#include <iostream>
using namespace std;

int main(){

    // El puntero permite modificar la variable original

    int x = 10;

    int *p = &x;


    *p = 20; // Modificamos el valor al que apunta

    cout << "EL nuevo valor de x es: " << x <<endl;

    return 0;
}

