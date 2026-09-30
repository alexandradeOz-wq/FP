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

    Estudiante e;

    ifstream bin("data/estudiantes.bin", ios::binary);

    while(bin.read(reinterpret_cast<char*>(&e),sizeof(Estudiante))){
        cout << "codigo: " << e.codigo << endl;
        cout << "Nombre: " << e.nombre <<endl;
        cout << "Nota: " << e.nota << endl;
        cout << "Estado:" << e.activo <<endl;
        cout << "********************" <<endl;
    }

    bin.close();





    return 0;
}