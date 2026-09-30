// main.cpp — APLICACIÓN (el "qué")
#include "Figura.h"
#include "Circulo.h"
#include "Cilindro.h"

int main() {
    Circulo c1(5.0);       // radio valido
    Circulo c2(-3.0);      // radio invalido (corregido) radio = 1 
    Circulo c3;             // predeterminado,  radio = 1
    Circulo c4 = c1;        // copia, radio = 5

    c1.imprimir();
    c2.imprimir();

    c1.setRadio(10.0);     // valido, radio = 10
    c1.setRadio(-99.0);    // invalido (protegido) radio = 1 
    c1.imprimir();

    return 0;
}