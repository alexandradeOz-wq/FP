#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // buena práctica

    cout << *ptr << endl; // ERROR 

    return 0;
}