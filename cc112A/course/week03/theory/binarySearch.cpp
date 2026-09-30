#include <iostream>
using namespace std;



int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == key) {
            return m;
        } else if (arr[m] < key) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main(){

    int arr[] = {1,3,5,7,9,10,11};

    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 4;

    int resultado = binarySearch(arr,n, key);

    if (resultado == -1) {
        cout << "Elemento no encontrado" << endl;
    } else {
        cout << "Elemento encontrado en la posicion " << resultado <<endl;
    }

    return 0;
}