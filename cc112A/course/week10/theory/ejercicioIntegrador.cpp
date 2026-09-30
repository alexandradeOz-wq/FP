#include <iostream>
#include <string>
using namespace std;

// PRODUCTO
struct Producto {
    int id;
    string nombre;
    double precio;
    string categoria;
};

// REPARTIDOR
struct Repartidor {
    string nombre;
    string vehiculo;
    double latitud;
    double longitud;
    bool disponible;
};


// RESTAURANTE
struct Restaurante {
    string nombre;
    string direccion;
    string telefono;
    Producto menu[50]; // arreglo FIJO
    int totalProductos;
};



// PEDIDO
struct Pedido {
    int numero;
    string cliente;
    Producto items[20];  // arreglo fijo
    int cantidadItems;
    double total;
    string estado;  // "pendiente", "en camino", "entregado"
    Repartidor* asignado;
    Restaurante* origen;
};


// PROTOTIPOS 


// PRODUCTO
// Crear producto
Producto crearProducto(int id, string nombre, double precio, string categoria);


// RESTAURANTE 
void inicializarRestaurante(Restaurante* r, string nombre, string direccion, string telefono);
void agregarProducto(Restaurante* r, Producto p);
void mostrarRestaurante(const Restaurante* r);

// REPARTIDOR 
Repartidor* crearRepartidor(string nombre, string vehiculo, double lat, double lon);
void mostrarRepartidor(const Repartidor* rep);


// PEDIDO
void inicializarPedido(Pedido* p, int numero, string cliente);
void agregarItemPedido(Pedido* p, Producto prod);
void calcularTotal(Pedido* p);
void asignarRepartidor(Pedido* p, Repartidor* rep);
void asignarRestaurante(Pedido* p, Restaurante* r);
void actualizarEstado(Pedido* p, string nuevoEstado);
void mostrarPedido(const Pedido* p);

// MEMORIA 
void liberarRepartidor(Repartidor* rep);


/*
El sistema debe permitir registrar restaurantes,
productos, pedidos y repartidores, simulando el
funcionamiento básico de una aplicación de delivery.
Debe incluir un menú interactivo
1. Crear restaurante
2. Agregar producto al restaurante
3. Crear repartidor
4. Crear pedido
5. Agregar producto a pedido
6. Asignar repartidor a pedido
7. Cambiar estado del pedido
8. Mostrar restaurante
9. Mostrar pedido
10. Mostrar repartidor
0. Salir
*/



int main(){



    return 0;
}