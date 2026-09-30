#include <iostream>
using namespace std;

int* getPointer() {
    int x = 50; // esta variable está en el STACK
    return &x;
}

int main() {
    int* ptr = getPointer();

    cout << *ptr << endl; // ERROR ! acceso a dirección inválida

    return 0;
}