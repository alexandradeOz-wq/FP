#include <iostream>
#include <cmath>
using namespace std;



/*
     Numero
       |
----------------
|              |
Entero       Fraccion     Complejo   Vector2D

*/

class Numero {  // clase BASE
public:
    virtual void imprimir() const = 0; // metodos virtuales (puros)
    virtual double magnitud() const = 0;

    // REGLA: EL DESTRUCTOR DEBE SER VIRTUAL
    virtual ~Numero(){
        cout << "Se llamo al destructor\n";
    }

};

class Entero: public Numero { // clase DERIVADA
private:
    int valor;
public:
    Entero(int valor): valor(valor){}

    void imprimir() const override {
        cout << "Valor: " << valor <<endl;
    }
    double magnitud() const override {
        return abs(valor);
    }

    ~Entero() {
        cout << "Destructor Entero" <<endl;
    }

};

class Fraccion: public Numero { // clase DERIVADA
private:
    int numerador;
    int denominador;
public:
    // constructor parametros
    Fraccion(int numerador, int denominador)
    : numerador(numerador), denominador(denominador == 0 ? 1:denominador) 
    {}
    void imprimir() const override {
        cout << "Valor: " << numerador << " / " << denominador <<endl;
    }
    double magnitud() const override {
        return abs(1.0*numerador/denominador);
    }

    ~Fraccion() {
        cout << "Destructor Fraccion" <<endl;
    }
};


class Complejo: public Numero {
private:
    double real;
    double imaginaria;
public:
    // constructor de parametros
    Complejo(double real, double imaginaria): real(real), imaginaria(imaginaria){}

    void imprimir() const override {
        cout << "Valor: " << real << " + " << imaginaria << " i " <<endl;
    }
    double magnitud() const override {
        return sqrt(real*real + imaginaria*imaginaria);
    }

    ~Complejo() {
        cout << "Destructor Complejo" <<endl;
    }
};


class Vector2D: public Numero {
private:
    double x, y;
public:

    Vector2D(double x, double y): x(x), y(y){}

    void imprimir() const override {
        cout << "Valor: (" << x << " , " << y << " ) " <<endl;
    }
    double magnitud() const override {
        return sqrt(x*x + y*y);
    }
    ~Vector2D() {
        cout << "Destructor VEctror2D" <<endl;
    }

};




int main(){

    Numero* arreglo[4];

    arreglo[0] = new Entero(-10);
    arreglo[1] = new Fraccion(-3,4);
    arreglo[2] = new Complejo(3,4);
    arreglo[3] = new Vector2D(6,8);

    for(int i = 0; i < 4; ++i) {
        arreglo[i]->imprimir();
        cout << "Magnitud: " << arreglo[i]->magnitud() << "\n\n";
    }


    for(int i = 0; i < 4; ++i) {
        delete arreglo[i];
    }


    return 0;
}

/*
Polimorfismo == una misma funcion se compoprta de diferentes maneras
Clase abstracta = No se puede instanciar


INGREDIENTES PARA LOGRAR POLIMORFISMO
1. Herencia   OK
2. Metodos virtuales OK
3. Puntero a la clase BASE OK



REGLA
Si tenemos metodos virtuales
debemos declarar el desctructor como virtual en la clase BASE
*/
