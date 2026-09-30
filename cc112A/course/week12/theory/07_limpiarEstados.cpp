#include <iostream>
using namespace std;

int main() {

    int nota;

    cout << "Ingrese una nota (número entero): ";

    while (!(cin >> nota)) {

        cout << "\n*** ERROR DE LECTURA ***\n";

        cout << "good(): " << cin.good() << endl;
        cout << "eof() : " << cin.eof()  << endl;
        cout << "fail(): " << cin.fail() << endl;
        cout << "bad() : " << cin.bad()  << endl;

        cout << "\nEl stream quedó bloqueado.\n";

        cin.clear();    // reinicia las banderas

        cout << "\nDespués de clear():\n";
        cout << "good(): " << cin.good() << endl;
        cout << "eof() : " << cin.eof()  << endl;
        cout << "fail(): " << cin.fail() << endl;
        cout << "bad() : " << cin.bad()  << endl;

        cin.ignore();   // elimina la basura pendiente

        cout << "\nEntrada inválida. Intente nuevamente: ";
    }

    cout << "\nNota válida: " << nota << endl;

    return 0;
}