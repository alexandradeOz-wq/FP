/*
Escribir un programa que reciba la siguiente cadena
​"123, 45.67, -89, 1001, 23.45, 6789, 12.45"
​y calcule la suma de todos los números enteros contenidos en ella

IDEA PRINCIPAL

1. Separar la  cadena 
2. Detectar los enteros

*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char cad[] = "123,45.67, -89, 1001, 23.45, 6789, 12.45";

    cout << "Cadena original: " << cad <<endl;
    char* token;

    int suma = 0;

    token = strtok(cad,",");

    while(token != nullptr) {

        bool esEntero = true;

        for (int i = 0; token[i] != '\0'; ++i) {
            if (token[i] == '.') {
                esEntero = false;
                break;
            }
        }

        if(esEntero) {
            suma = suma + atoi(token);
        }

        token = strtok(nullptr, ",");
    }

    cout << "La suma es: " << suma << endl;

    cout << "Cadena Luego de tokenizar: " << cad <<endl;

    return 0;
}