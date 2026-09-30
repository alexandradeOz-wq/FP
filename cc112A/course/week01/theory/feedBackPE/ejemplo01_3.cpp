#include<iostream>
using namespace std;

int maxPromedio(int arr[5]);

int main(){
    int n=5;
    int arr[5];
    for(int i=0; i<5; i++){
    cout<<"Digite el elemento "<<i+1<<": ";
    cin>>arr[i];
    }

    // usted está llamando a la funcion, la forma correcta es maxPromedio(arr);
    cout<<"La cant de numeros mayor al promedio es: "<< maxPromedio <<endl;  // ERROR AL LLAMAR A LA FUNCIÓN
    return 0;
}

int maxPromedio(int arr[5]){
    int promedio=0;
    int suma=0;

    for(int i=0; i<5; i++){
        suma=arr[i];
    }

    promedio=suma/5;

    int cant=0;

    for(int i=0; i<5; i++){
        if(arr[i]>promedio){
            cant++;
        }else{
            return cant; // Lógica incorrecta, si en la primera iteración se ejecuta esta linea, la función termina
        }
    }

    return cant;
}