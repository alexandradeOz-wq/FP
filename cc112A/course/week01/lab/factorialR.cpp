#include <iostream>
using namespace std;

int factorial(int n) {
    cout << "Entrando: " << n << endl;

    if (n == 1) {
        cout << "Base: " << n << endl;
        return 1;
    }

    int resultado = n * factorial(n - 1);

    cout << "Saliendo: " << n << " resultado: " << resultado << endl;
    return resultado;
}

int main() {
    factorial(4);
}