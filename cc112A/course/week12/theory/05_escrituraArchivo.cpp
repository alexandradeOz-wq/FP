#include <iostream>
#include <fstream> // para manipular archivos
#include <string>
using namespace std;

int main() {
    // Modifique el siguiente código para que escriba los datos en un archivo
    string nombres[3] = {"Ana", "Luis", "María"};
    double notas[3]   = {17.5, 14.5, 19.1};

    // 1. Crear el objeto de stream (para escritura) y conectarlo al archivo en disco 
    ofstream archivo("data/notas.txt");

    // 2. Verificar si se abrió correctamente
    if(!archivo.is_open()) {
        cerr << "El archivo no se pudo abrir" <<endl;
        return 1;
    }

    // 3. Escribir en el archivo
    for (int i = 0; i < 3; i++)
        archivo <<nombres[i] << "," << notas[i] << endl;  // escribe en el archivo notas.txt
        
    cout << "Datos guardados correctamente." << endl;

    // 4. Cerrar el archivo explicitamente
    archivo.close();

    

    return 0;
}


/*
¿Por qué coma como separador?
Para poder distinguir el nombre de la nota al leer.
Este patrón se llama CSV (Comma Separated Values) y es un estándar universal.

¿Por qué endl y no '\n'?
endl escribe el salto de línea Y vacía el búfer.
Para archivos pequeños no importa.
Para archivos grandes dentro de bucles, '\n' es más eficiente porque no fuerza el flush en cada iteración.


¿Qué pasa si notas.txt ya existía?
ofstream por defecto destruye el contenido anterior.
Si quieres agregar al final, necesitas el modo ios::app — lo veremos en la siguiente diapositiva.
*/