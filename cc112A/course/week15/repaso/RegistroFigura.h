#pragma once

#include<iostream>
#include<cstring>

using namespace std;

/*
Implementar una estructura que permita registrar
una figuras geométricas
*/
struct RegistroFigura {
    char tipo[20];
    char nombre[20];
    float dato1, dato2;

};

void llenarRegistros(RegistroFigura* figuras, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nFigura " << i + 1 <<  endl;
        cout << "Tipo: ";
        cin >> figuras[i].tipo;

        cout << "Nombre: ";
        cin >> figuras[i].nombre;

        if(strcmp(figuras[i].tipo, "CIRCULO") == 0) {
             cout << "Radio";
             cin >> figuras[i].dato1;

             figuras[i].dato2 =0;
        } else {
            cout << "Base: ";
            cin >> figuras[i].dato1;

            cout << "Altura: ";
            cin >> figuras[i].dato2;
        }
    }
}
void mostrarRegistros(RegistroFigura* figuras, int n) {
    cout << "\nLista de Figuras\n";

    for (int i = 0; i < n; ++i) {
        cout << "\nFigura " << i + 1 <<endl;

        cout << "Tipo : " << figuras[i].tipo << endl;
        cout << "Nombre: " << figuras[i]. nombre <<endl;
        
        if (strcmp(figuras[i].tipo, "CIRCULO") == 0 ) {
            cout << "Radio: " << figuras[i].dato1 <<endl;
        } else {
            cout << "Base: " << figuras[i].dato1 <<endl;
            cout << "Altura: " << figuras[i].dato2 <<endl;
        }
    }
}

