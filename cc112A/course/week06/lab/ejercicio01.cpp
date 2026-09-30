/*
Escribe una función int longitud(const char* s) que reciba
un puntero a una cadena de caracteres terminada en '\0' y retorne
su longitud sin usar índices de arreglo. Solo puedes avanzar el 
puntero con ++ o +.
*/

#include <iostream>
using namespace std;

int longitud(const char* s){
    const char *p = s;
    while(*p != '\0') {
        p++;
    }
    return (p - s);
}

int main(){
    char cadena[] = "Hola mundo";

    cout << "La longitud es: " << longitud(cadena) <<endl;

    return 0;
}
