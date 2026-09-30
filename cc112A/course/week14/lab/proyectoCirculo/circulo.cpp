// circulo.cpp — IMPLEMENTACIÓN (el "cómo")
#include "circulo.h" //  archivos de encabezado del proyecto
#include <cmath>  //  archivos de encabezado del lenguaje

#include <iostream>
using namespace std;

const double PI = 3.141592;


// Constructores 
Circulo::Circulo(double radio) : radio(1.0) {       // valor valido inicial
    setRadio(radio);                   // delega la validación al setter
    cout << "[CTOR] radio = " << this->radio << endl;
}

Circulo::Circulo() : radio(1.0){ // radio por defecto siempre valido
    cout << "[CTOR-DEFAULT] radio = 1.0" << endl;
}

Circulo::Circulo(const Circulo& c) : radio(c.radio) { // copia directa: c.radio ya es valido
    cout << "[CTOR-COPIA] radio = " << radio << endl;
}

// Destructor
Circulo::~Circulo() {
    cout << "[DTOR] radio era = " << radio << endl;
}

// setter
void Circulo::setRadio(double radio) {
    this->radio = (radio > 0.0) ? radio : 1.0; // invariante
}

// getters
double Circulo::getRadio() const {
    return radio;
}

double Circulo::getArea() const {
    return PI * radio * radio;
}

double Circulo::getPerimetro() const {
    return 2.0 * PI * radio;
}

void Circulo::imprimir() const {
    cout << "Circulo { radio=" << radio << ", area=" << getArea() << ", perimetro=" << getPerimetro() << " }" << endl;
}