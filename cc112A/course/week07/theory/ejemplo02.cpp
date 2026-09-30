/*
2. Dada la siguiente cadena: "--Aqui tenemos, un ejemplo de cadena."",
escribir una función que elimine los caracteres - , y . ​
La salida debe ser:  "Aqui tenemos un ejemplo de cadena"
*/

#include <iostream>
using namespace std;

void limpiarCadena(char* str) {
    char* lectura = str;
    char* escritura = str;

    while(*lectura != '\0') {
        if (*lectura != '-' &&  *lectura != '.' && *lectura != ',') {
            *escritura = *lectura;
            escritura++;
            lectura++;
        }
        lectura++;
    }
    *escritura = '\0';
}

int main(){

    return 0;
}