/*
Implementación de una lista enlazada (simple)
*/

#include <iostream> 
using namespace std; 


struct Nodo {
    int data;
    Nodo* next;
};


int main() {

    // 1. AGREGAR NODOS
    // Inicialiamos head y tail
    Nodo* head = nullptr;
    Nodo* tail = nullptr;

    // Agregamos primer nodo
    head = new Nodo{10,nullptr};
    tail = head;
    /*
    head ---> |10 | nullptr|
            ^
            |
            tail
    */

    // Agregamos el segundo nodo
    tail->next = new Nodo{20,nullptr};
    tail = tail->next;// actualizar tail

    /*
    head ---> |10 | *| ---> |20|nullptr|
                            ^
                            |
                            tail
    */
    

    // Agregamos el tercer nodo
    tail->next = new Nodo{30,nullptr};
    tail = tail->next;
    /*
    head ---> |10 | *| ---> |20|*|--->|30|nullptr|
                                        ^
                                        |
                                        tail
    */

    // 2. MOSTRAR LISTA

    cout << "\nLista Actual: ";
    // puntero auxiliar
    Nodo* current = head;

    while(current != nullptr) {
        cout << current->data  << " ";
        current = current -> next; // actualizar current
    }
    cout <<endl;

    // 4. Insertar al inicio
    Nodo* nuevo = new Nodo{5, nullptr};
    nuevo->next = head;
    head = nuevo;

    cout << "\nLista Actual: ";
    // puntero auxiliar
    current = head; // reinicializo

    while(current != nullptr) {
        cout << current->data  << " ";
        current = current -> next; // actualizar current
    }
    cout <<endl;


    // 5 busqueda
    int buscado = 20;
    bool encontrado = false;
    current = head;
    while(current != nullptr) {
        if(current->data == buscado) {
            encontrado = true;
            break;
        }
        current = current->next;
    }
    if(encontrado) {
        cout << "ENCONTRADO\n";
    } else {
        cout << "NO ENCONTRADO\n";
    }


    return 0;


}





/*
REGLA 1
lista vacia
head = nullptr;
tail = nullptr;

1 nodo
head == tail


dos o mas nodos
head != tail


REGLA 2
ultimo nodo
su campo next es nullptr
(indica el final de la lista)


REGLA 3
Insertar implica
puntero auxiliar
actualizar head o tail



RESUMEN:

| Operación          | Idea principal                        |
| ------------------ | ------------------------------------- |
| Insertar al inicio | Modificar `head`                      |
| Insertar al final  | Modificar `tail->next` y luego `tail` |
| Recorrer           | Avanzar con `current = current->next` |
| Buscar             | Recorrer comparando datos             |
| Contar             | Recorrer acumulando                   |
| Eliminar inicio    | Mover `head`                          |
| Eliminar final     | Encontrar el penúltimo                |
| Destruir lista     | Eliminar nodo por nodo                |

*/