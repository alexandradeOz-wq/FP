/*
Desarrollar un programa  que lea información de estudiantes
desde un archivo de texto, calcule el promedio de cada alumno
y genere un reporte en otro archivo.

Al final del reporte, mostrar:

**********************
Promedio general del curso: **

ENTRADA:
Ana 18 17 19
Luis 14 13 15
Maria 20 18 19



SALIDA:
REPORTE DE NOTAS
****************
Ana
  Notas    : 18 17 19
  Promedio : 18

Luis
  Notas    : 14 13 15
  Promedio : 14

Maria
  Notas    : 20 18 19
  Promedio : 19

********************
Promedio general del curso: **
*/

#include <iostream>
# include <fstream>
using namespace std;

int main(){
  // Paso 1. crear objetos y conectar al archivo
  ifstream input("data/notasAlumnos.txt");
  ofstream output("output/reporte.txt");

  // Paso 2. Verificar si se abrio correctamente
  if(!input.is_open() || !output.is_open()) {
    cerr << "Error al brir los archivos " <<endl;
    return 1;
  }

  // Paso 3. Procesar

  output << "REPORTE DE NOTAS\n";
  string nombre;
  double nota1, nota2, nota3;

  double suma = 0;
  while(input>>nombre >>nota1 >> nota2 >>nota3) {
    double promedio = (nota1 + nota2 + nota3)/3;
    suma += promedio;
    output << nombre << endl;
    output <<"  Notas    :" << nota1 << " " <<nota2 << " " << nota3 <<endl;
    output <<"  Promedio :" << promedio <<endl;
  }

  output << "*********************" << endl;
  output << "Promedio del curso: " << suma/3 <<endl;

  input.close();
  output.close();





  return 0;
}