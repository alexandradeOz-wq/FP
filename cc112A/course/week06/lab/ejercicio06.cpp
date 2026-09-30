//Huallpa Torres
#include <iostream> 
using namespace std;
void eliminarEspacios(char* s) {
    char* lectura = s;
    char* escritura = s;

    while (*lectura != '\0') {
        if (*lectura != ' ') {
            *escritura = *lectura;
            escritura++;
        }
        lectura++;
    }

    *escritura = '\0';
    
} 
int main( ) {
char s[100] = "  Hola mundo  ";
    
    eliminarEspacios(s);
    cout<< s << endl;

    return 0;
}