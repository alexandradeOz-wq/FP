#include <iostream>
#include <string>

using namespace std;

const int N = 7;

// Datos iniciales
int numeroAtomico[N] = {
    8,
    26,
    1,
    79,
    17,
    29,
    80
};

string nombre[N] = {
    "Oxigeno",
    "Hierro",
    "Hidrogeno",
    "Oro",
    "Cloro",
    "Cobre",
    "Mercurio"
};

double masaAtomica[N] = {
    15.999,
    55.845,
    1.008,
    196.967,
    35.45,
    63.546,
    200.59
};

// Elemento a buscar
int buscado = 29;

// Funciones a implementar

// 1. Ordenar los arreglos paralelos usando numeroAtomico como clave
void ordenar(int numeros[], string nombres[], double masas[], int n) {
    // COMPLETAR
}

// 2. Mostrar todos los elementos
void mostrarElementos(int numeros[], string nombres[], double masas[], int n) {
    // COMPLETAR
}

// 3. Búsqueda binaria retorna el índice encontrado o -1 si no existe
int busquedaBinaria(int numeros[], int n, int objetivo) {
    // COMPLETAR
    return -1;
}

// 4. Mostrar el camino recorrido durante la búsqueda binaria
void mostrarCamino(int numeros[], int n,int objetivo) {
    // COMPLETAR
}

// 5. Contar elementos con masa atómica mayor al elemento buscado
int contarMasasMayores(double masas[], int n, double masaBuscada) {
    // COMPLETAR
    return 0;
}


int main() {

    // Invocar a ordenar
    // Complete aquí

    cout << "*** ELEMENTOS ORDENADOS ***\n\n";

    // Invocar a  mostrarElementos
    // complete aquí


    // Invocar a busquedaBinaria
    // Complete aquí

    // Si encontramos el elemento buscado
       // Mostrar su inforación completa
       // Mostrar camino  NOTE QUE EL CAMINO PUEDE DIFERIR AL DEL EJEMPLO DE SALIDA (estamos simulando un ABB)
       // Contar mayores

    
    // en caso contrario --> imrimir Elemento no encontrado
    

    return 0;
}