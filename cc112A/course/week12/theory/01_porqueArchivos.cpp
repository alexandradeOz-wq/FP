#include <iostream>
# include <fstream> //Para manipular archivos
#include <string>
using namespace std;

int main() {
    string nombres[3] = {"Ana", "Luis", "María"};
    double notas[3]   = {17.5, 14.0, 19.0};
    int n = 3;

    // ofstream archivo; // intanciar un objeto para escribir
    // archivo.open("notas.txt");
    ofstream archivo("notas.txt");


    cout << "Registro de Notas" << endl;
    for (int i = 0; i < n; i++)
        archivo << nombres[i] << ": " << notas[i] << endl; 

    archivo.close();
    return 0; 
}


/*
Un archivo es la memoria a largo plazo de tu programa.

Aquí usamos string para que el código sea claro.
Más adelante, cuando veamos archivos binarios,
verán por qué string tiene una limitación importante en ese contexto 
y ahí es donde char[] cobra importancia
*/


