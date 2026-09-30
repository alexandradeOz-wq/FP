#include <iostream>
#include <cmath>

/*
Tarea:
1. Agregar codigo para calcular el costo maximo (minimo)
2. Investigar la implementacion utilizando Programación Dinámica
   Comparar la complejidad temporal
3. Ver la variante para subconjuntos
Ejemplo {A, B, C}
Genenar todos los subconjuntos
{}
{A}
{B}
{C}
{A,B}
{A,C}
{B,C}
{A,B,C}
*/
using namespace std;

void generarCortes(int n) {
    int puntosCorte = n - 1;
    int totalFormas = pow(2,n-1);

    for (int mascara = 0; mascara < totalFormas; ++mascara){

        int *partes = new int[n];
        // Contador de partes
        int cantidadPartes = 0;
        int longitudActual = 1;

        for(int pos = 1; pos <= puntosCorte; ++pos) {
            // ¿Hay corte en la posicion pos?
            if (mascara & (1<<(pos-1))) {
                partes[cantidadPartes] = longitudActual;
                cantidadPartes++;

                //REinicializar
                longitudActual = 1;

            } else {
                longitudActual++;
            }
        }
        partes[cantidadPartes] = longitudActual;
        cantidadPartes++;


        for(int i = 0; i <cantidadPartes; ++i) {
            cout << partes[i];
            if(i < cantidadPartes-1) cout << ", ";
        }
        cout << endl;
    
    }

}

int main(){

    generarCortes(8);

    

    return 0;
}