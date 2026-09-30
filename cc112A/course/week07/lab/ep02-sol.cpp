#include <iostream>
#include <string>
using namespace std;

const int N = 7;

int numeroAtomico[N] = {8, 26, 1, 79, 17, 29, 80};
string nombre[N] = {"Oxigeno", "Hierro", "Hidrogeno","Oro", "Cloro", "Cobre", "Mercurio"};
double masaAtomica[N] = {15.999, 55.845, 1.008, 196.967, 35.45, 63.546, 200.59};

int buscado = 29; // Elemento a buscar

// Funciones a implementar

// 1. Ordenar los arreglos paralelos usando numeroAtomico como clave
void ordenar(int numeros[], string nombres[], double masas[], int n) {
    // Ordenamiento burbuja con clave numero atomico
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - 1 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                swap(numeros[j], numeros[j+1]);
                swap(nombres[j], nombres[j+1]);
                swap(masas[j], masas[j+1]);
            }
        }
    }
}

// 2. Mostrar todos los elementos
void mostrarElementos(int numeros[], string nombres[], double masas[], int n) {
    for (int i = 0; i < n; i++)
        cout << numeros[i] << " "<< nombres[i] << " "<< masas[i] << endl;
}

// 3. Búsqueda binaria retorna el índice encontrado o -1 si no existe
int busquedaBinaria(int numeros[], int n, int objetivo) {
    int izquierda = 0;
    int derecha = n - 1;
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (numeros[medio] == objetivo) // Elemento encontrado
            return medio;
        
        if (objetivo < numeros[medio]){ // Buscar a la izquierda
            derecha = medio - 1;
        } else {   // Buscar a la derecha
            izquierda = medio + 1;
        }
    }
    return -1;
}

// 4. Mostrar el camino recorrido durante la búsqueda binaria
void mostrarCamino(int numeros[], int n,int objetivo) {
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        cout << numeros[medio];   // Mostrar numero actual
        if (numeros[medio] == objetivo) // Si ya lo encontramos termina
            break;
        cout << " -> ";
        if (objetivo < numeros[medio]) {  // Continuar buscando
            derecha = medio - 1;
        }
        else {
            izquierda = medio + 1;
        }
    }
}

// 5. Contar elementos con masa atómica mayor al elemento buscado
int contarMasasMayores(double masas[], int n, double masaBuscada) {
    int contador = 0;
    for (int i = 0; i < n; i++)
        if (masas[i] > masaBuscada) 
            contador++;
    return contador;
}


// Funcion auxiliar para calcular nidel de profundidad
int calcularNivel(int numeros[], int n, int objetivo) {
    int izquierda = 0, derecha = n - 1;
    int nivel = 0;
    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;
        if (numeros[medio] == objetivo)
            return nivel;
        nivel++;
        if (objetivo < numeros[medio])
            derecha = medio - 1;
        else 
            izquierda = medio + 1;
    }
    return -1;
}

int main() {
    // Invocar a ordenar
    ordenar(numeroAtomico,nombre,masaAtomica,N);

    cout << "*** ELEMENTOS ORDENADOS ***\n";

    // Invocar a  mostrarElementos
    mostrarElementos(numeroAtomico,nombre,masaAtomica,N);
   
    // Invocar a busquedaBinaria
    int pos = busquedaBinaria(numeroAtomico,N,buscado);
    if (pos != -1) {
        cout << "\nElemento encontrado\n\n";
        cout << "Nombre: " << nombre[pos] << endl;
        cout << "Numero atomico: "<< numeroAtomico[pos] << endl;
        cout << "Masa atomica: " << masaAtomica[pos] << endl;

        int nivel = calcularNivel(numeroAtomico,N,buscado);
        cout << "\nNivel de profundidad: " << nivel << endl;
        cout << "\nCamino recorrido:\n";
        mostrarCamino(numeroAtomico,N,buscado);
        cout << endl;

        int mayores = contarMasasMayores(masaAtomica,N,masaAtomica[pos]);
        cout << "\nElementos con mayor masa atomica: " << mayores << endl;

    } else {
        cout << "\nElemento no encontrado\n";
    }

    return 0;
}