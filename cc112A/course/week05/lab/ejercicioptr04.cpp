#include <iostream>
using namespace std;





double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double producto(double a, double b) {
    return a * b;
}


double division(double a, double b) {
    return a / b;
}

// typedef double (*func)(double, double);
// <functional>
using func = double(*)(double, double);

double operar(double a, double b, func f ){  // Callback
    return f(a,b);
}

int main(){
    int a = 4, b = 8;

    // Declaracion de un arreglo punteros a funcion
    //double(*funciones[4])(double, double) = {suma, resta, producto, division};
    func funciones[4] = {suma, resta, producto, division};
    int opcion;

    cout << "ingrese una opcion (1-4): ";
    cin >> opcion; 

    cout << "Suma " << funciones[opcion-1](a,b)  << endl;






    cout << "Suma: " << operar(a,b,suma) << endl;
    cout << "Producto: " << operar(a,b,producto) <<endl;

    return 0;
}