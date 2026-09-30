#include <iostream>
using namespace std;

int cuadrado(int* p) {
    return *p * *p;// pow(*p,2);
}

int main(){

    int x = 5;
    int *p = &x;
    int resultado = cuadrado(p);

    cout << "El cuadrado es: " << resultado <<endl;

    return 0;
}