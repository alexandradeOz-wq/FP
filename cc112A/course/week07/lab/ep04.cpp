#include <iostream>
#include <cstring>
using namespace std;

char textos[][100] = {"rojo azul verde",
                      "azul amarillo rojo",
                      "verde negro azul",
                      "amarillo blanco rojo"
                    };

void tokenizar(char textos[][100],int filas, char* palabras[], int& cantidad) {
    cantidad = 0;
    // Recorrer cada texto
    for (int i = 0; i < filas; i++) {
        char* token = strtok(textos[i], " "); // usamos espacios para separar
        while (token != nullptr) {
            palabras[cantidad++] = token;
            token = strtok(nullptr, " ");
        }
    }
}

void mostrarPalabras(char* palabras[], int n) {
    for (int i = 0; i < n; i++)
        cout << palabras[i] << endl;
}


int frecuencia(char* palabras[], int n, const char* objetivo) {
    int contador = 0;
    for (int i = 0; i < n; i++)
        if (strcmp(palabras[i], objetivo) == 0) 
            contador++;
    return contador;
}


bool seMostro(char* mostradas[], int n, const char* palabra) {
    for (int i = 0; i < n; i++)
        if (strcmp(mostradas[i], palabra) == 0) 
            return true;
    return false;
}

void mostrarFrecuencias(char* palabras[],int n) {
    char* mostradas[100];
    int cantidadMostradas = 0;
    for (int i = 0; i < n; i++) {
      
        if (!seMostro(mostradas,cantidadMostradas,palabras[i])) {
            int veces = frecuencia(palabras,n,palabras[i]);
            cout << palabras[i]<< " -> " << veces<< endl;

            mostradas[cantidadMostradas] = palabras[i]; // Guardar como mostrada
            cantidadMostradas++;
        }
    }
}

void mostrarLargas(char* palabras[], int n, int minimo) {
    char* mostradas[100];
    int cantidadMostradas = 0;
    for (int i = 0; i < n; i++) {
        if (!seMostro(mostradas,cantidadMostradas,palabras[i])) { // Evitar repetir palabras,
            if (strlen(palabras[i]) >= minimo) {
                cout << palabras[i] << endl;
                mostradas[cantidadMostradas] = palabras[i];
                cantidadMostradas++;
            }
        }
    }
}

int main() {
    char* palabras[100];
    int cantidad;
    tokenizar(textos,4,palabras,cantidad);

    cout << "*** TODAS LAS PALABRAS ***\n";
    mostrarPalabras(palabras,cantidad);

    cout << "\n*** FRECUENCIAS ***\n";
    mostrarFrecuencias(palabras,cantidad);

    cout << "\n*** PALABRAS CON 5 O MAS LETRAS ***\n";
    mostrarLargas(palabras,cantidad,5);

  
    char objetivo[100];
    cout << "\nIngrese palabra a buscar: ";
    cin >> objetivo;
    int veces = frecuencia(palabras,cantidad,objetivo);

    if (veces > 0)
        cout << "\nLa palabra aparece " << veces << " veces\n";
    else
        cout << "\nLa palabra no existe\n";

    return 0;
}