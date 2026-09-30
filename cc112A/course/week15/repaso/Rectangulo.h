#pragma once

#include "Figura.h"

class Rectangulo : public Figura {
private:
    float base;
    float altura;

public:
    Rectangulo(string nombre, string color,float base, float altura);
    ~Rectangulo();

    void mostrar() const;
    float area() const override;

};


// Didáctica
Rectangulo::Rectangulo(string nombre, string color, float base, float altura): Figura(nombre,color), base(base), altura(altura) {
    cout<<"Constructor Rectangulo\n";
}

Rectangulo::~Rectangulo() {
    cout<<"Destructor Rectangulo\n";
}

float Rectangulo::area() const {
    return base*altura;
}

void Rectangulo::mostrar() const { 
    Figura::mostrar();
    cout<<"Base   : "<<base<<endl;
    cout<<"Altura : "<<altura<<endl;
    cout<<"Area   : "<<area()<<endl;
}
