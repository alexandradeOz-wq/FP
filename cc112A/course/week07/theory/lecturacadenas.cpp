#include <iostream>

using namespace std;


int main() {

    int edad;

    char nombre[100];


    cout << "Edad: ";

    cin >> edad;


    cin.ignore();  // limpia el '\n'​


    cout << "Nombre completo: ";

    cin.getline(nombre, 100);


    cout << "Nombre: " << nombre << endl;

}