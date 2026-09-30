/*
Vamos a simular un sistema de matrícula donde los estudiantes
llegan uno por uno. No sabemos cuántos se van a registrar.


SOL 1: Arreglos estáticos 
Estudiante est[100]; ?


SOL 2: Arreglos Dinámicos
Estudiante* v = new Estudiante[n]; ?


SOL 3:  Lista enlazada simple

*/


#include <iostream>
using namespace std;

// struct Estudiante {
//     string nombre;
//     int edad;
//     float nota;
// };

struct Nodo {
    float nota;
    Nodo* siguiente;
};

void insertar(Nodo*& cabeza) {
    Nodo* nuevo = new Nodo;
    cout << "Nota: ";
    cin >> nuevo->nota;

    nuevo->siguiente = cabeza;
    cabeza = nuevo;
}

void mostrar(Nodo* cabeza) {
    Nodo * actual = cabeza;

    while(actual != nullptr) {
        cout << actual->nota << " -> ";
        actual = actual->siguiente;
    }
    cout << "nullptr" <<endl;
}


int main(){
    Nodo *cabeza = nullptr;
    insertar(cabeza);
    insertar(cabeza);
    insertar(cabeza);
    insertar(cabeza);
    insertar(cabeza);
    insertar(cabeza);

    mostrar(cabeza);



    return 0;
}


/*
1 — Lista enlazada básica (ya vista)
Insertar al inicio
Recorrer lista


2 — Inserción al final
Problema: Insertar respetando orden de llegada.

Debe recorrer hasta el último nodo
enlazar correctamente


3 — Búsqueda en la lista
Problema: Encontrar un estudiante por nombre o código.

comparación de strings
if (actual->nombre == buscado)

4 — Eliminación de nodos (cabeza, medio, final)
Problema: Borrar un estudiante específico.

5 — Lista ordenada
Inserción manteniendo orden (por nota o edad)

6 — Liberación completa de memoria

7- Lista doblemente enlazada, lista circular, arboles binarios

*/

