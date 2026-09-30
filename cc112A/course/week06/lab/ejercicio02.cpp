/*Escribe la función void invertir(char* s) que invierta el 
contenido de la cadena en el mismo arreglo (sin usar un arreglo auxiliar). 
Debes usar dos punteros: uno que apunte al inicio y otro al final, 
e intercambiar sus valores acercándolos hacia el centro.*/

#include <iostream>
#include <cstring>
using namespace std;

void invertir(char* s);

int main(){
    char a[]="programa";

    invertir(a);
    cout<<a;
    return 0;
}

void invertir(char* s){
    char* inicio = s;

    char* fin = s + strlen(s) - 1; // apunta al último caracter (no nulo)
    

    while(inicio < fin){
        char temp = *inicio;
        *inicio=*fin;
        *fin=temp;
        inicio++;
        fin--;
    }
}