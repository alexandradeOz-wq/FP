// circulo.h — DEFINICIÓN DE CLASE (la interfaz)
#pragma once // evita incluir este archivo dos veces
#include "Figura.h"
class Circulo: public Figura {
protected:
    double radio;  // invariante radio > 0

public:
    // Constructores 
    Circulo(double r); // parametros
    Circulo();         // prederminado radio = 1
    Circulo(const Circulo& c);   // copia (sistema lo provee, declaramos igual)

    // Destructor
    ~Circulo();

    // setter
    void setRadio(double r);  // valida: rechaza radio <= 0, usa radio = 1.0


    // getters
    double getRadio()     const;
    double calcularArea() const override;
    double calcularPerimetro() const override; // adicionales
    void   imprimir()     const override;
};

