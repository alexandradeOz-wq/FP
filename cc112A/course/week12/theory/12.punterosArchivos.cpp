#include <iostream>
#include <fstream>
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
    fstream archivo("data/estudiantes.bin",ios::in | ios::out);

    if(!archivo.is_open()) {
        cerr << "NO se logro abrir el archivo" <<endl;
        return 1;
    }

    // Tamaño del archivo
    archivo.seekg(0,ios::end);

    cout << "tellg() = " << archivo.tellg() << " bytes" <<endl;

    // Ir al tercer registro
    archivo.seekg(2*sizeof(Estudiante),ios::beg);

    cout << "Puntero lectura: " << archivo.tellg() <<endl;
    return 0;
}