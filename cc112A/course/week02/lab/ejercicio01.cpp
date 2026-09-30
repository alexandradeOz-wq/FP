#include <iostream>
using namespace std;

// Funcion iterativa
// n = 123 
int sumaIterativa(int n) {
    int suma = 0; // no olvidar inicializar
    while (n > 0) {
        suma += n%10;
        n = n/10; // cociente entero
    }
    return suma;
}



// Funcion recursiva
int sumaRecursiva(int n) {
    // Caso base
    if (n == 0)
        return 0;
    
    // recursividad
    return n%10 + sumaRecursiva(n/10);
}

int main(){
    int n;
    cout << "Ingrese el numero" <<endl;
    cin >> n;

    int arr[n];

    int resultado = sumaIterativa(n);

    cout << "La suma es: " << resultado <<endl;

    return 0;
}