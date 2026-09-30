#pragma once

// Figura será una clase abstracta (no se puede instanciar)
class Figura {

public:

    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
    virtual void imprimir() const = 0;

};