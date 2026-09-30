/*
Utilizando punteros, implemente de forma manual 
una función que copie una cadena en otra (comparar luego con strcpy)
*/

#include <iostream>
using namespace std;


void stringCopy (char* destino,const char* fuente) {

    while(*fuente != '\0') {
        *destino = *fuente;
        destino++;
        fuente++;
    }

    *destino = '\0';
}

int main(){

    return 0;
}