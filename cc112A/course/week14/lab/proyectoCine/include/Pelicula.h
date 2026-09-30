#pragma once
#include <string>
class Pelicula {
private:
    std::string titulo;
    int duracion;
    int edadMinima;
    std::string director;

public:
    // constructores
    Pelicula(std:: string titulo, int duracion, int edadMinima, std::string director);
    int getEdadMinima() const;
    std::string getTitulo() const;

};





