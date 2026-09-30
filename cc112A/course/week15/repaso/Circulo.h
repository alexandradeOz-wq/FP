#pragma once

#include "Figura.h"

class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(string nombre, string color, float radio);
    ~Circulo();

   
    void mostrar() const;
    float area() const override ;

};




// didactica
#define PI 3.14159

Circulo::Circulo(string nombre, string color, float radio) : Figura(nombre,color),radio(radio) {
    cout<<"Constructor Circulo \n";
}

Circulo::~Circulo() {
    cout<<"Destructor Circulo\n";
}

float Circulo::area() const {
    return PI*radio*radio;
}

void Circulo::mostrar() const {
    Figura::mostrar();
    cout<<"Radio  : "<<radio<<endl;
    cout<<"Area   : "<<area()<<endl;
}