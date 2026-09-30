#include <iostream>
using namespace std;

// Implementación basica de RAII (Resource Aquisition is Inicialization)
// class == tipo de dato definido por el usuario

class Wrapper {
private:
    int* ptr;

public:
    void saludo(){
        cout << "Mi primera class\n";
    }
    // CONSTRUCTOR adquiere recursos (memoria)
    Wrapper(int n){
        ptr = new int[n];
        cout <<"\nMemoria asignada en el heap\n";
    }

    // DESTRUCTOR libera recursos automaticamente
    ~Wrapper(){
        delete[] ptr;
        cout<< "\nmemoria liberada correctamente\n";
    }

};

void funcion_con_RAII() {
    cout << "\nEntrando a función..." << endl;
    
    Wrapper w(100);  // Se asigna memoria
    
    cout << "Trabajando con los datos..." << endl;
    
    // ¿Si ocurre un error y el programa termina antes? Simular
    if(true) {
        cout << "Ocurrio un error\n";
        return;
    }
   
    cout << "  Fin normal de función" << endl;
}  // ← Aquí se llama automáticamente al destructor de 'w'


void funcion_sin_RAII() {
    cout << "\nEntrando a función..." << endl;
    
    int* datos = new int[100];  // Memoria manual
    cout << "Memoria ASIGNADA manualmente" << endl;
    
    cout << "Trabajando con los datos..." << endl;
    
    // ¿Si ocurre un error y el programa termina antes? Simular
    if(true) {
        cout << "Ocurrio un error\n";
        return;
    }

    
    delete[] datos;  // Esta línea NUNCA se ejecuta si hay error
    cout << "Memoria LIBERADA manualmente" << endl;
}


int main() {
    
    cout << "*** EJEMPLO con RAII vs sin RAII ***\n";
    
    cout << "\n1 con RAII (SEGURO):";
    funcion_con_RAII();
    
    cout << "\n\n2 sin RAII (PELIGROSO):";
    funcion_sin_RAII();
    
    return 0;
}