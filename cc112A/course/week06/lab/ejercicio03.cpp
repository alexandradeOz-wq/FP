/*
Autor: Americo Chulluncuy
Escribe la función int contarCaracter(const char* s, char c)
 que cuente cuántas veces aparece el carácter c dentro
de la cadena s, recorriendo solo con aritmética de punteros.
*/
#include <iostream>
using namespace std;

int contarCaracter(const char* s, char c) {
    int contador = 0;
    
    while (*s != '\0') {
    
        if (*s == c) {
            contador++;
        }
        s++;
    }
    
    return contador;
}



int contarvocales(const char* s)
{
    int contador = 0;

    while (*s != '\0')
    {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')
        {
            contador++;
        }
        
        s++;
    }

    return contador;
}


int main() {
    const char* texto = "mississippi";
    char buscar= 's';
    
    int resultado = contarCaracter(texto, buscar);
    
    cout << "La letra buscada aparece: " << resultado << endl;

    cout << "Numero de vocales: " << contarvocales(texto) << endl;
    
    return 0;
}