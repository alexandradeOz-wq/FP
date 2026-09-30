# Proyecto Final - CC112

## Objetivo

El propósito de este proyecto es demostrar que los conceptos estudiados durante el semestre permiten comprender e implementar estructuras similares a las utilizadas en las bibliotecas estándar de C++.

El estudiante deberá desarrollar **uno** de los siguientes proyectos:

* **Opción A:** MiniVector (versión simplificada de `std::vector`)
* **Opción B:** Agenda de Contactos Dinámica

---

# Competencias evaluadas

El proyecto deberá evidenciar el uso correcto de:

* Arreglos
* Punteros
* Memoria dinámica (`new` y `delete`)
* Constructores
* Destructores
* Encapsulación
* Invariantes de clase
* Copia profunda
* Sobrecarga de operadores
* Persistencia en archivos
* Diseño orientado a objetos

---

# Opción A: MiniVector

## Descripción

Implementar una clase denominada `MiniVector` que represente una versión simplificada de `std::vector<int>`.

La clase deberá administrar internamente un arreglo dinámico de enteros.

---

## Requerimientos mínimos

### Atributos privados

```cpp
int* datos;
int cantidad;
int capacidad;
```

### Invariante de clase

Debe cumplirse siempre:

```text
0 <= cantidad <= capacidad
```

---

### Constructores

Implementar:

```cpp
MiniVector();
```

```cpp
MiniVector(int capacidadInicial);
```

---

### Destructor

Liberar correctamente toda la memoria dinámica utilizada.

---

### Constructor de copia

Implementar una copia profunda.

```cpp
MiniVector(const MiniVector& otro);
```

---

### Operador de asignación

Implementar copia profunda.

```cpp
MiniVector& operator=(const MiniVector& otro);
```

---

### Métodos obligatorios

#### Insertar elemento

```cpp
void push_back(int valor);
```

Si el arreglo se llena, deberá aumentar automáticamente su capacidad.

Sugerencia:

```text
nuevaCapacidad = capacidad * 2
```

---

#### Eliminar último elemento

```cpp
void pop_back();
```

---

#### Obtener tamaño

```cpp
int size() const;
```

---

#### Mostrar contenido

```cpp
void mostrar() const;
```

---

### Sobrecarga del operador []

Permitir:

```cpp
v[3] = 20;

cout << v[3];
```

Implementar:

```cpp
int& operator[](int indice);
```

---

### Archivos

Implementar:

```cpp
void guardar(const string& nombreArchivo);
```

```cpp
void cargar(const string& nombreArchivo);
```

Los elementos deberán almacenarse y recuperarse desde un archivo.

---

## Ejemplo de uso esperado

```cpp
MiniVector v;

v.push_back(10);
v.push_back(20);
v.push_back(30);

cout << v[1];

v.guardar("datos.txt");
```

---

# Opción B: Agenda de Contactos Dinámica

## Descripción

Implementar una agenda que permita almacenar contactos de manera dinámica utilizando memoria administrada manualmente.

---

## Estructura sugerida

```cpp
struct Contacto {
    string nombre;
    string telefono;
    string correo;
};
```

---

## Clase principal

```cpp
class Agenda {
private:
    Contacto* contactos;
    int cantidad;
    int capacidad;

public:
    ...
};
```

---

## Invariante de clase

Debe cumplirse siempre:

```text
0 <= cantidad <= capacidad
```

---

## Constructores

Implementar:

```cpp
Agenda();
```

```cpp
Agenda(int capacidadInicial);
```

---

## Destructor

Liberar correctamente toda la memoria dinámica.

---

## Constructor de copia

Implementar copia profunda.

```cpp
Agenda(const Agenda& otra);
```

---

## Operador de asignación

Implementar copia profunda.

```cpp
Agenda& operator=(const Agenda& otra);
```

---

## Funcionalidades obligatorias

### Agregar contacto

```cpp
void agregar(const Contacto& c);
```

---

### Buscar contacto por nombre

```cpp
int buscar(const string& nombre);
```

---

### Eliminar contacto

```cpp
void eliminar(const string& nombre);
```

---

### Mostrar agenda

```cpp
void mostrar() const;
```

---

### Sobrecarga del operador []

Permitir:

```cpp
cout << agenda[0].nombre;
```

Implementar:

```cpp
Contacto& operator[](int indice);
```

---

### Archivos

Implementar:

```cpp
void guardar(const string& archivo);
```

```cpp
void cargar(const string& archivo);
```

---

## Ejemplo de uso esperado

```cpp
Agenda agenda;

agenda.agregar({"Ana","999111222","ana@gmail.com"});
agenda.agregar({"Luis","999333444","luis@gmail.com"});

agenda.mostrar();

agenda.guardar("agenda.txt");
```

---

# Entregables

El estudiante deberá entregar:

## Código fuente

Organizado en múltiples archivos:

```text
main.cpp
MiniVector.h
MiniVector.cpp
```

o

```text
main.cpp
Agenda.h
Agenda.cpp
```

---

## Informe breve (máximo 2 páginas)

Explicar:

1. Cómo se utiliza memoria dinámica.
2. Cómo se implementó la copia profunda.
3. Qué invariante mantiene la clase.
4. Cómo funciona la persistencia en archivos.
5. Qué operador fue sobrecargado y por qué.

---

# Restricciones

No está permitido utilizar bibliotecas  que resuelvan automáticamente la estructura solicitada.

El objetivo es implementar la solución utilizando exclusivamente los conocimientos desarrollados durante el curso.

---

# Criterios de evaluación
Al concluir este proyecto, el estudiante deberá ser capaz de comprender que estructuras ampliamente utilizadas como `std::vector` o sistemas de almacenamiento de datos pueden construirse a partir de conceptos fundamentales como arreglos, punteros, memoria dinámica y programación orientada a objetos. Se tomará en cuenta: 

* Nombres adecuados, encapsulación y comentarios relevantes

* Defensa oral

