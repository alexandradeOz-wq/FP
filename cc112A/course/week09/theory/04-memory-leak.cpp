#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char* s1 = new char[20];
    char* s2 = new char[40];

    strcpy(s1, "Memory leak");

    cout << "s1 apunta a: " << static_cast<void*>(s1) << endl;
    cout << "s2 apunta a: " << static_cast<void*>(s2) << endl;

    //s2 = s1; // AQUÍ OCURRE LA FUGA DE MEMORIA

    cout << "\nDespues de s2 = s1\n";

    cout << "s1 apunta a: " << static_cast<void*>(s1) << endl;
    cout << "s2 apunta a: " << static_cast<void*>(s2) << endl;

    delete[] s2;
    delete[] s1; // AQUÍ OCURRE DOBLE DELETE, comportamiento indefinido

    s1 = nullptr;
    s2 = nullptr;

    return 0;
}

/*
VER el resultado del analísis de memoria con
1. ADRESSSANITIZER
2. VALGRIND
*/