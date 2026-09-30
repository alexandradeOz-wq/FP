#include "Cilindro.h"
#include <iostream>
using namespace std;

const double PI = 3.141592;

Cilindro::Cilindro(double r, double h): Circulo(r), altura(h) {
    std::cout << "Constructor de Cilindro" <<std::endl;
}

void Cilindro::setAltura(double h) {
    if(h <= 0) {
        altura = 1;
    }
    altura = h;
}

double Cilindro::getAltura() const {
    return altura;
}
double Cilindro::calcularVolumen() const {
    return PI * radio*radio*altura;
}

double Cilindro::calcularArea() const {
    return 2*PI*radio*radio + 2*radio*altura;
}
double Cilindro::calcularPerimetro() const {
    return 2*PI*radio;
}
void Cilindro::imprimir() const {
    cout << "Cilindro: " <<endl;
    cout << "Radio: " << radio << endl;
    cout << "Altura: " << altura << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Volumen: " << calcularVolumen() <<endl;

}

   