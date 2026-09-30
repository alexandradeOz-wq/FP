/*
mplementa una función que reciba un puntero genérico (void*) a una cadena de caracteres (char*) y muestre, para cada carácter:

Su valor (el carácter)
Su dirección de memoria
*/


#include <iostream>
using namespace std;

void direccionesCadena(void* ch) {
    char *p = (char*)ch;

    while (*p != '\0') {
        cout << "Caracter: " << *p << " | Direccion: " << (void*)p <<endl;
        p++;
    }
}

int main(){

    char texto[] = "Hola mundo";
    direccionesCadena(texto);

    return 0;
}