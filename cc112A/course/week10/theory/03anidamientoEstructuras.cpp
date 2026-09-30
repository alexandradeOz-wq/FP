#include <iostream>
using namespace std;


struct Coordenada { 
    double lat; 
    double lon; 
};


// ¿Modelar una Ciudad (nombre, ubicación, temperatura, humedad)?

struct Ciudad {
    string  nombre;
    Coordenada ubicacion;
    float temperatura;
    float humedad;
};

// Cómo accedemos al campo latitud?

int main(){
    Ciudad c1;
    c1.ubicacion.lon = -17.4;



    return 0;
}