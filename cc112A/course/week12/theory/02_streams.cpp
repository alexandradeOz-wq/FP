#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){

    string nombre = "Juan";
    string mensaje = "Archivos en C++";

    // Esto ya lo sabían usar. Pero ahora saben lo que pasa por dentro
    cin  >> nombre;   // stream de entrada: teclado → búfer → variable
    cout << mensaje;  // stream de salida:  variable → búfer → pantalla

    /*
    cin y cout son objetos de stream que el sistema crea automáticamente.
    Hoy aprenderemos a crear los nuestros pero para manipular archivos.
    */


}