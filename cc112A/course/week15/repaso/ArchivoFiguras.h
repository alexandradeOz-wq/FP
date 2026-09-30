#pragma once

#include <fstream>
#include "RegistroFigura.h"
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

using namespace std;

// Agrupamos en una clase todas las operaciones relacionadas con archivos.
//Respetamos  el principio de responsabilidad única (SRP).

class ArchivoFiguras {

public:
    static void guardarTexto(Figura* figuras[], int cantidad, string nombreArchivo);

    static void leerTexto(string nombreArchivo);

    static void guardarBinario(Figura* figuras[], int cantidad, string nombreArchivo);

    static void leerBinario(string nombreArchivo);

};


// TAREA IMPLEMENTAR LOS MÉTODOS  Y LOGRAR  UN PROGRAMA FUNCIONAL

/*
NOTE QUE: No todas las clases representan cosas como un círculo o un rectángulo.
Algunas representan servicios. 
En este caso, el servicio consiste en guardar y recuperar información."
*/