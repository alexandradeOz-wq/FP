#include <iostream>
using namespace std;

int main(){

    // Un puntero es una variable que almacena direcciones de memoria

    int x = 25;
    float y = 2.3;
    
    // declaro un puntero a int
    int *p = &x;

    // p --> la direccion de x
    //*p --> muestra el valor apuntado

    cout << "EL valorde p es: " << p <<endl;
    cout << *p << endl;
    return 0;
}