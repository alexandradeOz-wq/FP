/*
Ejercicio integrador: La agenda que no olvida
Desarrolla un programa de agenda de contactos con las siguientes funciones:
• Agregar un contacto (nombre y teléfono) guardándolo en un archivo
• Mostrar todos los contactos guardados
• Buscar un contacto por nombre

El programa debe persistir los datos entre ejecuciones. Al cerrarlo y volverlo a abrir, los contactos deben seguir ahí.
• Usar ofstream con ios::app para agregar sin borrar
• Usar ifstream con getline correcto para leer
• Verificar siempre si el archivo se abrió correctamente
• Cerrar el archivo explícitamente después de cada operación
*/

#include <iostream>
#include <fstream>
using namespace std;

// Agregar un contacto (nombre y teléfono) guardándolo en un archivo
void agregarContacto(string nombre, int telefono) {
    // paso 1: creamos el objeto para escribir es un archivo
    ofstream archivo("data/agenda.txt", ios::app); // combinamos modos ios::out, ios::app

    // Paso 2: verificamos que el archivo se abrió correctamente
    if(!archivo.is_open()) {
        cerr << "Error al abrir el archivo agenda.txt" <<endl;
        return;
    }

    // Paso 3: Procesamos
    archivo << nombre << "," << telefono <<endl;

    // Paso 4: cerramos el archivo
    archivo.close();
    cout << "Contacto guardado correctamente" <<endl;
}

// Mostrar todos los contactos guardados
void mostrarContactos() {
    // paso 1: creamos el objeto para leer un archivo
    ifstream archivo("data/agenda.txt"); 

    // Paso 2: verificamos que el archivo se abrió correctamente
    if(!archivo.is_open()) {
        cerr << "Error al leer el archivo agenda.txt" <<endl;
        return;
    }

    // Paso 3: Procesamos
    cout << "\nLista de Contactos\n";
    string linea;
    while(getline(archivo,linea)) {
        int pos = linea.find(',');
        string nombre = linea.substr(0,pos);
        int telefono = stoi(linea.substr(pos+1));

        cout << "nombre: " << nombre << " | " << "Tlf: " << telefono <<endl;
        
    }
    
    // Paso 4: cerramos el archivo
    archivo.close();

}

// Buscar un contacto por nombre, COMPLETAR

int buscarContacto(string nombreBuscado) {

} 

int main(){
    agregarContacto("Juan", 967094586);
    agregarContacto("Pedro", 967094186);
    agregarContacto("Lucas", 927094586);

    mostrarContactos();

   

    return 0;
}