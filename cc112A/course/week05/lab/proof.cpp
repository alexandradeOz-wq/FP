#include <iostream>
using namespace std;

int main(){

    double x = 1;

    switch (x) {
        case 1:
           cout << "Error de  sintaxis\n";
        default:
            // bloque por defecto
            break;
    }

    return 0;
}