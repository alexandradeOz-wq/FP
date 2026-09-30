#include <iostream>
using namespace std;

// Recursiva ingenua
// 0, 1, 1, 2, 3, 5, ...

long long fibRecursivo(int n) {
    // Casos base
    if (n == 0) return 0;
    if (n == 1) return 1;

    return  fibRecursivo(n-1) + fibRecursivo(n-2);
}

// Iterativa

long long fibIterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i=2; i<=n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;

}


// Recursiva eficiente (con memoria)
const int MAXN = 100;
int memo[MAXN];

long long fibRecursivoMemo(int n) {
    // Casos base
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != -1) {
        return memo[n];
    }
    
    memo[n] = fibRecursivo(n-1) + fibRecursivo(n-2);

    return memo[n];
}

int main(){

    
    cout << "Fib iterativo: " << fibIterativo(45) <<endl;

    for (int i= 0; i < MAXN; ++i) {
        memo[i] = -1;
    }
   
    cout << "Fib Recursivo optimizado:  " << fibRecursivoMemo(45) << endl;

     cout <<"Fib Recursivo ingenuo: " <<  fibRecursivo(45) <<endl;

    return 0;
}