#include <iostream>
using namespace std;

struct Nodo {
    int data;
    Nodo* next;
};


void mostrarLista(Nodo* head){
    // puntero auxiliar
    Nodo* current = head;

    while(current != nullptr) {
        cout << current->data  << " ";
        current = current -> next; // actualizar current
    }
    cout <<endl;
}

int main(){
    Nodo* head = nullptr;
    Nodo* head = nullptr;

    return 0;
}

/*
insertarInicio()
insertarFinal()
mostrarLista()
buscar()
contar()
eliminarInicio()
eliminarFinal()
destruirLista()



*/
