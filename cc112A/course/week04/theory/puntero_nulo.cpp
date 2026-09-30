#include <iostream>
using namespace std;

int main(){

    // NO usar punteros sin inicializar (para evitar segmentation fault)

    int *p = nullptr;

    if (p == nullptr) {
        cout << "Puntero sin inicializar";
    }


    return 0;
}