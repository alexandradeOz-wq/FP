/*
Defina una estructura llamada Libro que contenga los siguientes campos: título, autor, año de publicación
y número de páginas. Luego, implemente las siguientes funciones:

a) Una función que permita al usuario ingresar detalles de varios libros y los almacene en un arreglo dinámico.

b) Una función que muestre una lista de libros con sus detalles (título, autor, año de publicación y número de páginas).

c) Una función que busque y muestre los libros de un autor específico.
*/
#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
    int paginas;
};


void ingresarLibros(Libro *libros, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese los datos del libro #" << i + 1 <<endl;
        cout << "Titulo: ";
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin,libros[i].autor);
        cout << "Año: ";
        cin >> libros[i].anio;
        cout << "Paginas: ";
        cin >> libros[i].paginas;
        cin.ignore(); // Para limpiar el buffer
    }
}

void mostrarLibros(Libro *libros, int n) {
    cout <<"\n***LISTA DE LIBROS REGISTRADOS***\n";
    for (int i = 0; i < n; ++i) {
        cout << "Libro #" << i + 1 <<endl;
        cout << "Titulo: " << libros[i].titulo <<endl;
        cout << "Autor: " << libros[i].autor <<endl;
        cout << "Año: " << libros[i].anio <<endl;
        cout << "Paginas: " << libros[i].paginas <<endl;
    }
    cout << "---" << endl;
}

void buscarPorAutor(Libro *libros, int n, string autor){
    for(int i = 0; i < n; ++i) {
        if(libros[i].autor == autor) {
            
        }
    }
}


int main(){
    int n; 
    cout << "Ingrese la cantidad de libros: ";
    cin >> n;

    // Asignación dinámica
    Libro *libros = new Libro[n];



    return 0;
}