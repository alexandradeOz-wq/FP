#include <iostream>
using namespace std;

double fraccionRecursivo(int arr[], int n, int i) {
    // Caso base
    if (i == n-1) 
        return arr[i];
    
    return arr[i] + 1.0/fraccionRecursivo(arr,n,i+1);
}

int main(){

    int arr[] = {1,2,3};
    cout << fraccionRecursivo(arr,3,0) << endl;

    return 0;
}