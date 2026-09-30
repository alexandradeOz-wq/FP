#include<iostream> //para poder pedir datos del teclado y mostrar en pantalla ( cout y cint )

using namespace std;

/*Colocar funcion*/
void Cantidad( int M[int n][int n]){ // la forma correcta es: void Cantidad(int M[20][50])

    return 0;  // una función que no retorna un valor (void) no puede usar return 0;
}

int main(){
    int n=0; // Según el estandar C++, el tamaño de un arreglo/matriz no puede ser una variable
    int resultado = 0;
    int M[n][n];

    cout<<"Digite el orden del arreglo";
    cin>>n;

    cout<<"Digite los numeros que contiene el arreglo: "<<endl;
    for (int i = 0; i < n ; i++)
    {
        for(int j=0 ; j < n ;j++)
        {
            cin>>M[i][j];
        }
    }
    
    
    resultado = Cantidad(M[n][n]); // La forma correcta de llamar a la funcion es: Cantidad(M);

    cout<<"La cantidad de numeros mayores al promedio es: "<<resultado<<endl;
    return 0;
}