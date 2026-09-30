#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    string A[n][m]; //  // Según el estandar C++, el tamaño de un arreglo/matriz no puede ser una variable


    for (int i=0; i<n;i++){
        for (int j=0; j<m;j++){
            cin >> A[i][j];
        }
    }

    
    return 0;
}