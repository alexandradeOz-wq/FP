/*

DIAGRAMA UML
        Figura
-----------------------
- nombre : string
- color  : string
-----------------------
+ Figura()
+ Figura(nombre,color)
+ ~Figura()                                                                   virtual luego

+ getNombre()
+ getColor()

+ setNombre()
+ setColor()

+ mostrar()                                                                   + virtual area() = 0
---------------------
Circulo       Rectanculo

*/

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Figura {
private: // para atributos, no modificable desde afuera, protege el estado interno del objeto
    string nombre;
    string color;
    int *puntos; // por ejemplo para almacenar coordenadas de figura


public: // para metodos
    Figura(); // constructor por defecto
    Figura(string nombre, string color); // construtor por parametros
    Figura(const Figura& otro); // constructor de copia (shallow), note debe ser const y &
    ~Figura(); // destructor 


    // Getters
    string getNombre() const;
    string getColor() const;

    // Setters
    // Retornamos Figura para permitir el encadenamiento
    Figura& setNombre(string nombre);
    Figura& setColor(string color);

    virtual void mostrar() const;    //

    virtual float area() const  =  0 ; // = 0 convierte la clase en ABSTRACTA

};

// Implementaremos la función aquí por didática 
// Se deben implementar en Figura.cpp

// CONSTRUCTORES: inicializa atributos
// constructor por defecto
// Se ejecuta automaticamente cuando hacemos Figura f;
Figura::Figura() :nombre("SinNombre"), color("SinColor"){
    cout << ">> Constructor por defecto de Figura\n";
}

// Constructor de parametros
Figura::Figura(string nombre, string color): nombre(nombre), color(color) {
    cout << ">> Constructor de parametros de Figura\n";
}


// CONSTRUCTOR DE COPIA (Copia Profunda - deep copy) 
Figura::Figura(const Figura& otro) {
    // Copiamos el atributo normal (los strings se copian de forma segura automáticamente)
    nombre = otro.nombre + "_copia";
    color = otro.color + "_copia";

    // PASO CLAVE: No copiamos el puntero (puntos = otro.puntos ¡ERROR!).
    // En su lugar, reservamos NUEVA memoria para el nuevo objeto.
    puntos = new int; 

    // Copiamos el VALOR real que estaba guardado en el objeto original
    *puntos = *(otro.puntos); 

    std::cout << "[Constructor de Copia] Copiado a " << nombre 
                << ". Nueva memoria creada en " << puntos << "\n";
}

// Destructor
// Se ejecuta automáticamente cuando el objeto deja de existir
// Si hay herencia y polimorfismo debe ser virtual
Figura::~Figura() {
    cout << ">> Destructor de Figura\n";
    delete puntos;
    puntos = nullptr;
}


// GETTERS devuelve el valor de un atributo.
// const indica que este método NO modifica el objeto.
string Figura::getNombre() const {
    return nombre;
}

string Figura::getColor() const {
    return color;
}


// SETTERS modifican los valores de los atributos de una clase
// this es un puntero que apunta al objeto que está ejecutando el método.
Figura& Figura::setNombre(string nombre) {
    // this->nombre: el atributo pertenece al objeto.
    // nombre: es el parámetro recibido.
    this->nombre = nombre;
    // Retornamos el propio objeto, esto permite escribir:figura.setNombre("Sol").setColor("Rojo");
    return *this;
}

Figura& Figura::setColor(string color) {
    this->color = color;
    return *this;
}

// Mostrar información
void Figura::mostrar() const {
    cout << "\nNombre : " << nombre << endl;
    cout << "Color  : " << color << endl;
}







