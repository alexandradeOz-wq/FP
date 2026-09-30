# Resumen: Structs + Punteros + Asignación Dinámica en C++
---
# 1. Struct básico (tipo de dato definido por el usuario)

```cpp
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};
````

## Crear variable

```cpp
Estudiante e1;  // se dice que e1 es un objeto o una instancia de Estudiante
```

## Acceder a campos (con el operador punto)

```cpp
e1.nombre = "Ana";
e1.edad = 20;
```

---

# 2. Struct + puntero + memoria dinámica

```cpp
Estudiante *p = new Estudiante; // reserva espacio en el Heap
```

## Acceso con el operador flecha -> (solo si p es puntero)

```cpp
p->nombre = "Luis";
p->edad = 22;
```

Equivalente a:

```cpp
(*p).edad = 22;
```

---

# 3. Liberar memoria

```cpp
delete p;
```
> Cada `new` debe tener su `delete`

---

# 4. Arreglo dinámico de structs

```cpp
Estudiante *lista = new Estudiante[3];
```

## Acceso

```cpp
lista[0].nombre = "Carlos";
lista[1].edad = 19;
```

## Liberar

```cpp
delete[] lista;
```

---

# 5. Struct que contiene punteros

```cpp
struct Curso {
    string nombre;
    int *notas;
};
```

## Reservar memoria interna

```cpp
Curso c;

c.notas = new int[5];
```

## Liberar

```cpp
delete[] c.notas;
```
> Primero liberar memoria interna.

---

# 6. Struct anidado

```cpp
struct Fecha {
    int dia, mes, anio;
};

struct Persona {
    string nombre;
    Fecha nacimiento;
};
```

## Uso

```cpp
Persona p;

p.nacimiento.dia = 10;
```

---

# 7. Paso de structs a funciones

## Por valor

```cpp
void mostrar(Estudiante e)
```

> Copia todo el struct

---

## Por referencia

```cpp
void mostrar(Estudiante &e)
```

>  Más eficiente
---


# Lo que debe verificar:

* ¿Reservé memoria?

* ¿Estoy usando `.` o `->` correctamente?

* ¿Liberé toda la memoria?

* ¿El `delete` coincide con el `new`?

* ¿Estoy accediendo dentro del rango?

---
<!--
# Ejercicios típicos 

* Agenda de contactos
* Sistema de estudiantes
* Inventario de productos
* Biblioteca
* Empleados y salarios
* Matriz dinámica
* Struct con arreglo interno
* Búsqueda y ordenamiento sobre structs
* Promedios y estadísticas
* CRUD básico dinámico
-->

