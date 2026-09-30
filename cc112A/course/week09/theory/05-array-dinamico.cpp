/*
Problema: queremos almacenar notas de estudiantes, pero no sabemos cuántos serán. 
Solución: 
Asignación dinámica en 4 pasos:

1. Preguntar cuántos estudiantes hay
2. Reservar memoria justo para esa cantidad
3. Usar el arreglo como siempre (ejemplo: ingrese y muestre notas)
4. Liberar memoria

*/
#include <iostream>
using namespace std;

int main(){

    // 1. Preguntar cuántos estudiantes hay
    int n;
    cout << "Ingrese la cancidad de estudiantes";
    cin >> n;

    // 2. Memoria dinamica
    int *notas = new int[n];

    // 3. Usar el arreglo como siempre  (ejemplo: ingrese y muestre notas)
    cout << "\nIngreseando notas ...\n";
    for (int i = 0; i < n; ++i) {
        cout << "ingrese la nota " << i+1 << ": ";
        cin >> notas[i];
    }

     cout << "\nMostrando notas ...\n";
    for (int i = 0; i < n; ++i) {
        cout << "Nota: " << i + 1<< ": " << notas[i] <<endl;
    }
    

    //  4. Liberar memoria
    delete[] notas;
    notas = nullptr; // BUENA PRÁCTICA para evitar dangling pointe
    
    



    return 0;
}