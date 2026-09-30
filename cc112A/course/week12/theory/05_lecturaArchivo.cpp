#include <iostream>
#include <fstream> // para archivos
#include <string>
using namespace std;

int main() {
    // Complete los pasos para leer el archivo creado anteriormente siguiento los 4 pasos:
    // 1. Crear el objeto de stream (para lectura) y conectarlo al archivo en disco 
    ifstream archivo("data/notas.txt");

    // 2. Verificar si se abrió correctamente
    if(!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo" <<endl;
    }

    // 3. Si la operación fue exitosa, leer el archivo
    string linea;
    while(getline(archivo,linea)) {
        int posicion = linea.find(','); 
        string nombre = linea.substr(0,posicion);
        double nota = stod(linea.substr(posicion+1));

        cout << nombre << " tiene: " << nota << endl;
    }
    
    // 4. Cerrar el archivo explicitamente
    archivo.close();

    
    return 0;

}



/*
2 formas alternativas de realizar la lectura

1. Utilizando sstream
string linea;
while (getline(archivo, linea)) {
    stringstream ss(linea);

    string nombre;
    string notaStr;

    getline(ss, nombre, ',');
    getline(ss, notaStr, ',');

    double nota = stod(notaStr);

    cout << nombre << " obtuvo: " << nota << endl;
}

3. Utilizando cadena de caracteres
char linea[100];
while (archivo.getline(linea, 100)) {
    char* nombre = strtok(linea, ",");
    char* notaStr = strtok(nullptr, ",");

    if (nombre != nullptr && notaStr != nullptr) {
        double nota = atof(notaStr);

        cout << nombre << " obtuvo: " << nota << endl;
    }
}



*/