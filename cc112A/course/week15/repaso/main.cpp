#include "RegistroFigura.h"

#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

int main() {
    // PARTE 1 ASIGNACIÓN DINÁMICA   Y STRUCT

    // // 1 memoria dinamica
    // int n;

    // cout << " cantidad de figuras: ";
    // cin >>n;

    // RegistroFigura * figuras = new RegistroFigura[n];

    // /*
    // figuras ----> |struct |struct | struct|
    // */

    // llenarRegistros(figuras,n);
    // mostrarRegistros(figuras,n);

    // // toda memoria reservada con new [] se libera con delete []

    // delete [] figuras;
    // figuras = nullptr;  // BUENA PRACTICA





    // // PARTE 2   CLASES Y CONSTRUCTORES

    // cout << "\nINTRODUCCION A PROGRAMACION ORIENTADA A OBJETOS\n";

    // // PRIMER OBJETO Se utiliza el constructor por defecto.
    // Figura f1;
    // f1.mostrar();

    // // SEGUNDO OBJETO Constructor por parámetros.
    // Figura f2("Circulo", "Azul");
    // f2.mostrar();

    
    // // GETTERS
    // cout << "\nNombre obtenido mediante getter: ";
    // cout << f2.getNombre() << endl;

    
    // // SETTERS
    // f2.setNombre("Rectangulo");
    // f2.setColor("Rojo");
    // f2.mostrar();

    
    // // ENCADENAMIENTO Gracias a que los setters retornan Figura&bpodemos encadenar llamadas.
    // f2.setNombre("Triangulo").setColor("Verde");
    // cout << "\nDespues del encadenamiento\n";
    // f2.mostrar();

    
    // // MEMORIA DINÁMICA
    // Figura* p = new Figura("Hexagono","Amarillo");
    // cout << "\nObjeto creado dinamicamente\n";
    // p->mostrar();

    
    // // Al liberar la memoria se ejecuta primero automáticamente el destructor.
    // delete p;


    // SOBRECARGA DE OPERADORES
    // cout << (2 > 1) <<std::endl;
    
    // cout << (f1 == f2) <





    // PARTE 3 HERENCIA Y POLIMORFISMO
    // POLIMORFISMO: Un puntero de tipo Figura puede apuntar a cualquier objeto derivado de Figura.
    
    Figura *figuras[4];

    figuras[0]=new Circulo("Sol","Amarillo",10);
    figuras[1]=new Rectangulo("Mesa","Marron",4,8);
    figuras[2]=new Circulo("Luna","Blanco",7);
    figuras[3]=new Rectangulo("Puerta","Gris",2,5);

   

    cout<<"\nMOSTRANDO TODAS LAS FIGURAS\n";
    // Observe que el arreglo es de Figura*, sin embargo cada objeto ejecuta su propia versión de mostrar()
    // Eso es POLIMORFISMO.

    for(int i=0;i<4;i++) {
        figuras[i]->mostrar();
        cout<<endl;
    }


    cout<<"\nELIMINAMOS OBJETOS\n";

    // Gracias al destructor virtual, primero se
    // destruye la clase derivada, luego la clase base.
    for(int i=0;i<4;i++) {
        delete figuras[i];
    }




    // PARTE 4: ARCHIVOS EN C++




    return 0;
}