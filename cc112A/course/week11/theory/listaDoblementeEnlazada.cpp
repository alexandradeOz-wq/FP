#include <iostream>
using namespace std;


struct Nodo {
    int data;
    Nodo* prev;
    Nodo* next;
};

void insertarFinal(Nodo*& head, Nodo*& tail, int valor) {
    Nodo* nuevo = new Nodo{valor, nullptr, nullptr};

    if(head == nullptr) {
        head = nuevo;
        tail = nuevo;
    } else {
        nuevo->prev = tail;
        tail->next = nuevo;
        tail = nuevo;
    }
}

void mostrarAdelante(Nodo* head) {
    Nodo* current = head;

    while(current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}


void mostrarAtras(Nodo* tail) {
    Nodo* current = tail;
    while(current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }

    cout << endl;
}


int main(){

    return 0;
}