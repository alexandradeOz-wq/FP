#include <iostream>
using namespace std;

int main(){

    char c[] = "Hola"; // = {'H','o','l','a','\0'};

    c[0] = 'S'; // podemos modificar ​

    //c++;  ERROR el nombre de un arreglo es un puntero CONSTANTE​

    cout << c <<endl; // muestra el contenido (char*)

    cout << "sizeof(c) = " << sizeof(c) <<endl; //tamaño del arreglo en bytes​ incluye el caracter nulo

    //------------------------------------------------

    const char  *d = "Mundo";

    d++; //aritmética de punteros​, el literal de cadena es const

    cout << d <<endl; // d apunta a  u (*char)

    cout << "el tamaño del puntero sizeof(d) = " << sizeof(d) <<endl; // tamaño del puntero​


    cout << *d <<endl; //desrreferencia --> tipo ​(char)


    cout << (void*)&d[0] <<endl; //Conversión estilo C: dirección del segundo carácter​


                                 // La conversión explícita al estilo C++ seria​
                                 // reinterpret_cast<void*>(&d[0])

    return 0;
}