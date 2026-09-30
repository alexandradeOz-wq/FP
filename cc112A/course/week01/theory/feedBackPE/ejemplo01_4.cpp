#include<iostream>
using namespace std;
int main(){
    int n=4,A[n],s=0;  // Según el estandar C++, el tamaño de un arreglo/matriz no puede ser una variable

    cout << "ingrese los elementos de la matriz:";

    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        s += A[i]; 
    }
    
    float p = s/n; 
    cout << "resultado: ";
    for (int i=0;i<n;i++){
        if(A[i]>p)
        cout << A[i];
    }
return 0;
}