// circulo.h — DEFINICIÓN DE CLASE (la interfaz)
//#ifndef CIRCULO_H 
//#define CICULO_H
#pragma once // evita incluir este archivo dos veces
class Circulo {
private:
    double radio;
public:
    double getRadio() const;
    double getArea() const;
    void setRadio(double r);

    // constructores
    // 1. Constructor de parametros
    
    Circulo(double r);

    // 2. Constructor por defecto
    Circulo();


    // Destructor}
    ~Circulo();

};

//#endif