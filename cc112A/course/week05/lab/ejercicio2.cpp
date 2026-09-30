#include <iostream>
using namespace std;

int main() {
    int* ptr;

    cout << *ptr << endl; // error, resreferenciar un puntero sin inicializar

    return 0;
}