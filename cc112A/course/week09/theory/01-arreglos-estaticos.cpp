#include <iostream>
using namespace std;

// Formas de trabajar con arreglos estáticos

#define TAM 10 //1. no tiene tipo, es propenso a errores

const int TAM1= 10; //2.  No asegura que sea const en tiempo de compilación

constexpr int TAM2 = 5; //3. Forma correcta


int main() {

    int notas[TAM2];

    for(int i = 0; i < TAM2; i++) {
        cin >> notas[i];
    }

    return 0;
}
/*
FLUJO COMPLETO DEL PROCESO DE COMPILACIÓN

1. codigo.cpp

2. preprocesamiento: Expande macros, inclujye headers. elimina comentarios
  ---> g++ -E codigo.cpp -o codigo.ii

3. compilacion: Genera el ensamblador
   ---> g++ -S codigo.ii -o codigo.s 

4. ensamblado: Genera código objeto
   ---> g++ -c codigo.o -o codigo.o

5. Linkeo: Genera el ejecutable, une con bibliotecas
   ---> g++ codigo.o -o codigo 

*/