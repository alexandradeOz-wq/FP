// autor: Silva Deyra
#include <iostream>
using namespace std;

int comparar(const char* a, const char* b)
{
    while (*a == *b && *a != '\0' && *b != '\0')
    {
        a++;
        b++;
    }
    return (*a - *b);
}

void burbujaCadenas(const char**c, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (comparar(c[j],c[j+1]) > 0) {
                const char* temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp; 
                //std::swap(c[j], c[j + 1]);
            }
        }
    }
}

int main()
{
    // Ordenar los nombres alfabéticamente
    //a[i] == *(a + i) // si a es un arreglo
    //Si es matriz m[i]== *(m + i) // apunta a la fila i
    //m[i][j] == *(*(m + i) + j) accede al elemnto en la fila i col j
    const char *c[] = {"Juan", "Andres",  "Pedro", "Lucas", "Leonar"};

    char a[] = "ana";
    char b[] = "anabel";

    int n = comparar(a, b);

    if (n < 0)
    {
        cout << "Negativo " << a << " menor que " << b << endl;
    }

    else if (n > 0)
    {
        cout << "Positivo " << a << " mayor que " << b << endl;
    }

    else
    {
        cout << "0 " << a << " es igual a " << b << endl;
    }

    burbujaCadenas(c,5);

    // Imprimiendo
    for (int i = 0; i < 5; ++i) {
        cout << c[i] << endl;
    }
    
    
}