/*

Implemente un programa que reciba por teclado dos años: N (año inicial) y M (año
final), y que almacene en un arreglo todos los años bisiestos comprendidos entre ambos
valores.
El programa debe realizar lo siguiente:
Calcular primero la cantidad de años bisiestos en el intervalo.
Almacenar dichos años en un arreglo.
Mostrar la lista de años bisiestos encontrados.
Solicitar un año adicional.
Utilizando búsqueda lineal, determinar el año bisiesto inmediato inferior al año
ingresado.
Si el año ingresado no pertenece al rango considerado, mostrar el mensaje: “año
fuera de rango”.
*/
#include <iostream>
using namespace std;

/*
Son años bisiestos todos aquellos que son múltiplos de 4, excepto los que son múltiplos
de 100 pero no de 400.
*/

bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;
    
}



int main(){
    int N, M;

    cout << "Ingrese dos años: N (año inicial) y M (año final): ";
    cin >> N >> M;

    int bisiestos[100];

    // Imprimiendo años bisiestos entre N y M
    int k = 0;
    for(int i = N; i <= M; i++) {
        if(esBisiesto(i)) {
            bisiestos[k] = i;
            k++;
        }
    }

    // mostrar años bisiestos
    cout << "La lista de bisiestos entre " << M << " y " << N << " es:\n";
    imprimir(bisiestos,k);
    



    return 0;
}