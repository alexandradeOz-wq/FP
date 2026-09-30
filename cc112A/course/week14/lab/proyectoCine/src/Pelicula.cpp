#include "Pelicula.h"

Pelicula::Pelicula(std:: string titulo, int duracion, int edadMinima, std::string director)
: titulo(titulo), duracion(duracion), edadMinima(edadMinima), director(director)  // usando lista de inicilizadores
{

}

int Pelicula::getEdadMinima() const {
    return edadMinima;
}

std::string Pelicula::getTitulo() const {
    return titulo;
}