/*
1. Dado la lista de nombres almacenados en un arreglo de cadenas, ​{"Juan", "Maria", "Carlos", "Ana"};​
utilice punteros a cadenas de caracteres y​

a) Escriba una función que determine si un nombre está o no en el arreglo​
b) Escriba una función que permita concatenar 2 nombres elegidos​
c) Escriba una función que permita encontrar una subcadena
*/

#include <iostream>
#include <cstring> // srtcmp()
using namespace std;


// a) Escriba una función que determine si un nombre está o no en el arreglo​

bool burcarNombre(const char *nombres[], int n, char* nombre) {
    for (int i = 0; i < n ; ++i) {
        if (strcmp(nombres[i], nombre) == 0) {
            return true;
        }
    }
    return false;
}



// b) Escriba una función que permita concatenar 2 nombres elegidos​
void concatenar(char *destino, const char *origen1, const char *origen2) {
    strcpy(destino,origen1);
    strcat(destino, " ");
    strcat(destino,origen2);
}

// c) Escriba una función que permita encontrar una subcadena

bool existeSubcadena(char* cad, char* subcad) {
    return  (strstr(cad, subcad) != nullptr);
}

int main(){

    const char *nombres[]={"Juan", "Maria", "Carlos", "Ana"};

    // Completar y verificar llamando a las funciones

    return 0;
}