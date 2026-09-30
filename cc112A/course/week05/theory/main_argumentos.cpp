/*
Desarrollar un programa en consola que funcione como una calculadora básica,
para realizar las operaciones de suma (+), resta (−), multiplicación (*) y
división (/). El programa debe recibir los valores y el operador a través
de argumentos de la función main.
*/

#include <iostream>
#include <cstdlib> // para atoi
using namespace std;

int main(int argc, char **argv) {
    // completar

    // Validacion
    if (argc != 4) {
        cout << "Error, el formato es ./ejecutable num1 perador numero2 " <<endl;
        return 1;
    }

    int a = atoi(argv[1]);
    char operador = argv[2][0];
    int b = atoi(argv[3]);

    int resultado;
    switch(operador) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/': resultado = a / b; break;
        default: cout << "Error en el operador" <<endl; return 1;
    }

    cout << "Resultado: " << resultado <<endl;

}