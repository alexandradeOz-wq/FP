#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream archivo("data/estadoStream.txt");

    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo\n";
        return 1;
    }

    int dato;

    while (true) {

        archivo >> dato;

        cout << "\nIntentando leer\n";

        cout << "good() todo bien: " << archivo.good() << endl;
        cout << "eof() fin alcanzado: " << archivo.eof()  << endl;
        cout << "fail() error de lectura: " << archivo.fail() << endl;
        cout << "bad() error grave: " << archivo.bad()  << endl;

        if (archivo.fail())
            break;

        cout << "Dato leído: " << dato << endl;
    }

    archivo.close();
    return 0;
}