// circulo.cpp — IMPLEMENTACIÓN (el "cómo")
#include "circulo.h"
# include <iostream>
using namespace std;

double Circulo::getRadio() const {
    return radio;
}
double Circulo::getArea() const {
    return 3.14 * radio * radio;
}
void Circulo::setRadio(double radio) {
    this->radio = radio;
}

// 1 constructor de parametros
Circulo::Circulo(double r): radio(r){

}

// 2 constructor por defecto

Circulo::Circulo() {};


// Destrutor
Circulo::~Circulo() {
    cout << "Se llamo al destructor" <<endl;
}
