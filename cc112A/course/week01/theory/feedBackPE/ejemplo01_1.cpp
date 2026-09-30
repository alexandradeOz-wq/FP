// dado un arreglo de enteros de tamaÃ±o n escribir un programa que ---- lea los elementos del arreglo 
// implemente una funcion que retorne la cantidad de numeros mayores al promedio.



#include <iostream>
using namespace std;


int contadorprom(int arr[], int n, float prom) {
	
    int contador= 1;
    
    
    for (int i = 0; i< 10; i++) {
    	
        if (arr[i]>prom) {
        	
            contador++;}
    }
    return 0; // porque retorna 0? debe retornar contador
    
}



int main() {
    int n;  // Según el estandar C++, el tamaño de un arreglo/matriz no puede ser una variable

    
    cout << " defina el tamaño del arreglo= ";
    cin >>n;


    int arreglo[100]; 
      
    float suma= 0;
    
    for (int i = 0; i < n; i++) {
        cout<< "Ingrese un numero" << i + 1 << ": ";
        cin >>arreglo[i];
        
        suma += arreglo[i];
    }

   
    float prom= suma/ n; // porque n es la cantidad de numeros
    
    cout << "el promedio es " << prom<< endl;
    
    int mayor = contadorprom(arreglo, n, prom);
    
    cout << "cantidad mayores al prom " << mayor << endl;

    return 0;
}










