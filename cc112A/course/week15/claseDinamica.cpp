#include <iostream>

class Configuracion {
private:
    int* datos; // Memoria dinamica interna (puntero a un array)

public:
    // 1. Constructor: Reserva la memoria en el Heap
    Configuracion() {
        datos = new int[100]; 
        std::cout << "[Constructor] Se reservaron 100 enteros en la memoria dinamica.\n";
        
        // Inicializamos el primer elemento ???
        datos[0] = 42; 
    }

    // Método publico para interactuar con los datos internos
    void mostrarDato() {
        std::cout << "[Metodo] El valor en datos[0] es: " << datos[0] << "\n";
    }

    // 2. Destructor: Libera la memoria interna reservada
    ~Configuracion() {
        delete[] datos; // OBLIGATORIO
        std::cout << "[Destructor] Memoria dinamica de los 100 enteros liberada correctamente.\n";
    }
};

int main() {
   
    // Creamos un objeto de tipo Configuracion usando memoria dinámica (new)
    std::cout << "Creando el objeto 'config' con 'new'...\n";
    Configuracion* config = new Configuracion();

    // Usamos el objeto
    config->mostrarDato();

    std::cout << "\nLiberando el objeto 'config' con 'delete'...\n";
    // Al borrar 'config', se ejecuta automaticamente su destructor primero,
    // garantizando que los 100 enteros se borren ANTES de perder el objeto.
    delete config; 
    return 0;
}
