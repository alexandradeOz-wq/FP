#include <iostream>
using namespace std;

struct Empleado {
    string nombre;
    float salario;
};

void aumentarSalarioValor(Empleado e) {  // 1. Por valor 
    e.salario *= 1.10;  // Solo modifica copia local
}


void aumentarSalarioReferencia(Empleado &e) { // 2. Por referencia 
    e.salario *= 1.10;  // Modifica el original
}



void aumentarSalarioPuntero(Empleado *e) { // 3. Por puntero - Modifica original 
    if(e != nullptr) {
        e->salario *= 1.10;
    }

}

int main(){

    // Supon que Pedro tiene  como salario 1000, 
    // modifique dicho salario llamando a las funciones adecuadas


    return 0;
}