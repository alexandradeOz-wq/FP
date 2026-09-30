#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


const int MAX_NOMBRE  = 50;
const int MAX_TELEFONO = 15;
struct Estudiante {
  int  codigo;        
  char  nombre[MAX_NOMBRE]; 
  double nota;         
  bool  activo;
};


int main(){

    Estudiante e;
    e.codigo = 100;
    strcpy(e.nombre,"Juan Perez");
    e.nota = 17;
    e.activo = true;

    // agregando estudiantes
    Estudiante e2 = {1001, "Maria",14, true};
    Estudiante e3 = {1002, "Pedro",11, true};

    // Escribir en un archivo binario
    // paso 1. crear el objeto para escritura y arcivar el modo binario
    ofstream bin("data/estudiantes.bin",ios::binary);

    // paso 2. Validar
    if (!bin.is_open()) {
        cerr << "No se pudo abrir el archivo" <<endl;
        return 1;
    }

    // paso 3 procesar
    bin.write(reinterpret_cast<const char*>(&e),sizeof(e));
    bin.write(reinterpret_cast<const char*>(&e2),sizeof(e2));
    bin.write(reinterpret_cast<const char*>(&e3),sizeof(e3));



    // Paso 4 cerrar
    bin.close();

    cout << "Registro guardado\n";
    cout << "Tamaño: " << sizeof(Estudiante) << endl;


    



    return 0;
}