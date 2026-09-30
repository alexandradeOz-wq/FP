# Detectando errores de memoria con AddressSanitizer (ASan) y C++

## Objetivo

En esta actividad aprenderás a identificar errores comunes de memoria en C++ 
(como accesos fuera de límites, uso incorrecto de punteros).

**Regla del ejercicio:**
1. Primero intenta detectar el error leyendo el código.
2. Marca la línea exacta donde crees que ocurre el error con un comentario:
    ```cpp
    // ERROR ...
    ```

3. Si no logras encontrarlo, compila y ejecuta el programa usando AddressSanitizer (ASan) para localizar el fallo.


### Ejercicio 1
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i <= 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
```



### Ejercicio 2
```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr;

    cout << *ptr << endl;

    return 0;
}
```

### Ejercicio 3
```cpp
#include <iostream>
using namespace std;

int* getPointer() {
    int x = 50;
    return &x;
}

int main() {
    int* ptr = getPointer();

    cout << *ptr << endl;

    return 0;
}
```


### Ejercicio 4
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};

    int* ptr = arr;

    for (int i = 0; i < 3; i++) {
        cout << *(ptr + i) << endl;
    }

    cout << *(ptr + 3) << endl;

    return 0;
}
```


### Ejercicio 5
```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;

    cout << *ptr << endl;

    return 0;
}
```


### Ejercicio 6
```cpp
#include <iostream>
using namespace std;
int main() {
    int arr[3] = {1,2,3};

    arr[5] = 100;
}
```


### Ejercicio 7

```cpp
#include <iostream>
using namespace std;
int buscar(int *arr, int n, int x) {
    for(int i = 0; i <= n; i++) {
        if(arr[i] == x) return i;
    }
    return -1;
}

int main() {
    int arr[3] = {1,2,3};
    buscar(arr, 3, 5);
}
```




### Ejercicio 8

```cpp
#include <iostream>
using namespace std;
void ordenar(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        arr[i+1] = arr[i];
    }
}

int main() {
    int arr[4] = {1,2,3,4};
    ordenar(arr, 4);
}
```

