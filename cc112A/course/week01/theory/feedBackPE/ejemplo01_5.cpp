#include <iostream>
using namespace std;

int  funcionPROMEDIO(int A[], int n, int K= 0) {
    for (int i=0; i<n; i++) {
        K = (K + A[i])/n;
        if ( A[i]<K)
           A[i]= 0;
        else
           A[i]
    }
    return 0;
}

int main(){
    int A[5], n; // el tamano debe conocerse
    cout << "Escriba el tamaÃ±o del arreglo unidimensional:";
    cin >> n;
        for (int i=0; i<n; i++) {
            cout << " Ingrese el valor del elemento: A[" << i << "]:";
            cin >> A[i];
            funcionPROMEDIO(A, n) ;
            cout << "El arreglo unidimensional nuevo es:" << A[] <<endl; 
        }  
    return 0;
}