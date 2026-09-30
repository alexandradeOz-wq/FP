#include <iostream>
using namespace std;

class Circulo {
private:
    double radio;
public:
    void setRadio(Circulo& c, double r);
    double getArea(Circulo& c);
    void   imprimir(Circulo& c);
};

// void setRadio(Circulo& c, double r) {
//     c.radio = r; 
// }

// double getArea(Circulo& c) { 
//     return 3.14 * c.radio * c.radio; 
// }

// void   imprimir(Circulo& c) { 
//     cout << "Radio: " << c.radio << endl; 
// }

int main() {
    Circulo c1;
    c1.radio = -1.0;   //

    imprimir(c1);
    cout << getArea(c1);
    return 0;
}
