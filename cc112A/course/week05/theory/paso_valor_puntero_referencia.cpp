#include <iostream>
using namespace std;


// Implementar las siguiente funciones

// Paso por valor (Cambio interno)
void swapValor(int a ,int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Paso por puntero (Cambio externo)
void swapPuntero(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Paso por referencia (Cambio extreno - sintaxis mas simple)
void swapReferencia(int & a , int & b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    // Verificar sus implementaciones con:
    int x = 10, y = 20;

    cout << "Inicial: x=" << x << ", y=" << y << endl;

    // Llamar a la función swapValor
    swapValor(x,y);
    cout << "Valor: x=" << x << ", y=" << y << endl;

    // Llamar a la función swapPuntero
    swapPuntero(&x, &y);
    cout << "Puntero: x=" << x << ", y=" << y << endl;

    // Llamar a la función swapReferencia
    swapReferencia(x,y);
    cout << "Referencia: x=" << x << ", y=" << y << endl;

    return 0;
}