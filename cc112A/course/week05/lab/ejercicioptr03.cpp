#include <iostream>
using namespace std;

int longitud(const char* cadena){
    int contador=0;
    while (*cadena != '\0'){
        contador++;
        cadena++;
    }
    return contador;
}

// Ejercicio: implementar la Funcion int maxLeghtWord(char*[], int n);

int main(){

    const char *palabras[] = {"Ana", "Luis", "Carlos"};

    cout << sizeof(palabras[0]) <<endl; // numero de bytes que ocupa una variable char*

    int n = sizeof(palabras)/sizeof(palabras[0]);

    int longMax = 0; 
    int indMax = -1;

    for (int i = 0; i < n; ++i) {

        const char *p = palabras[i];

        int longit = longitud(p);

        if(longit > longMax) {
            longMax = longit;
            indMax = i;
        }

    }

    cout << "Nombre más largo del arreglo: " << palabras[indMax] <<endl;






    return 0;
}