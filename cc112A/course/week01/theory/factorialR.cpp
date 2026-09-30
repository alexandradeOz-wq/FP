#include <iostream>
using namespace std;

int factorialR(int n) {
    cout << "Llamando a la función" << endl;
    // Caso base
    if (n == 0)
        return 1;

    // CAso recursivo
    return n * factorialR(n-1);
}

int main(){
    int n = 4;
    int arr[n];

    cout << factorialR(-4) <<endl;

    return 0;
}