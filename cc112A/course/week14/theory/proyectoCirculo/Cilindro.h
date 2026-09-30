#pragma once
#include "Circulo.h"
class Cilindro : public Circulo {
private:
    double altura;
public:
    // constructor de Cilindro

    Cilindro(double r, double h);

    void setAltura(double h);
    double getAltura() const;
    double calcularVolumen() const ;

    double calcularArea() const;
    double calcularPerimetro() const;
    void imprimir() const;
    
    // ...
};
