#include <iostream>
#include <cstring> // strcpy()
using namespace std;

void copiar(char* destino, const char* origen) {
    while(*origen != '\0') {
        *destino = *origen;
        origen++;
        destino++;
    }
    *destino = '\0';
}

int main(){

    char destino[50];
    char origen[] = "C++ es poderoso";

    copiar(destino,origen);
    cout << "Cadena copia: " << destino <<endl; 


    // Probando la funcion strcpy
     char destino1[50];
     strcpy(destino1,origen);
     cout << "Copia con srtcpy: " << destino1 <<endl;


    return 0;
}