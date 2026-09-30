#include <iostream>
using namespace std;

int main(){

    

    // Relacion entre punteros y arreglos:   
    // El nombre de un arreglo decae un puntero (const) a su primer elemento

    int arr[] = {1, 2 ,3};

    
    int *p = arr;
    
    cout << "La direccion de arr[0] es: " << &arr[0] <<endl;
    cout << "El contenido de arr es: " <<  arr << endl;



    return 0;
}