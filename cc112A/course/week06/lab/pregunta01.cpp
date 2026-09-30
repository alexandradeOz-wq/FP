#include <iostream>
using namespace std;

const int NMAX = 100;

void sucesionPadovan(int*arr, int n) {
    *(arr + 0) = 1;
    *(arr + 1) = 1;
    *(arr + 2) = 1;
    for (int i = 3; i < n; ++i) {
        *(arr + i) = *(arr + i - 2) + *(arr + i - 3);
    }
}

int main(){
    int arr[NMAX];
    int n;

    cout << "Ingrese el número de terminos a mostrar: ";
    cin >> n;

    sucesionPadovan(arr,n);

    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }

    return 0;
}