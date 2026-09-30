/*
Dado un rango [L, R], determine cuántos valores pertenecen a ese rango utilizando
únicamente búsqueda binaria.
Entrada: n = 7 [5, 8, 10, 12, 15, 18, 20] L = 9, R = 15
Salida: Cantidad: 3
*/

#include <iostream>
using namespace std;

int cotaInferior(int arr[], int n, int L) {
    int l = 0, r = n-1, res = n; 

    while(l <= r) {
        int m = (l + r)/2;
        if(arr[m] >= L) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1; 
        }
    }
    return res;

}

int cotaSuperior(int arr[], int n, int R) {
    int l = 0, r = n-1, res = -1; 

    while(l <= r) {
        int m = (l + r)/2;
        if(arr[m] <= R) {
            res = m;
            l = m + 1;
        } else {
            r = m - 1; 
        }
    }
    return res;

}



int main(){

    int arr[] = {5, 8, 10, 12, 15, 18, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int L = 4;
    int R = 13;

    int inicio = cotaInferior(arr, n, L);
    int fin = cotaSuperior(arr, n, R);

    int resultado = fin - inicio + 1;

    cout << "Cantidad:  " << resultado <<endl;

    return 0;
}