# Laboratorio 5: Punteros I y II

### Ejercicio 1

Implementar una función que invierta los elementos de un arreglo **utilizando exclusivamente punteros**, sin usar índices (`[]`).

Dado un arreglo de enteros, implementar una función para invertir el orden de sus elementos utilizando únicamente punteros , sin usar índices (`[]`) ni arreglos adicionales

La función debe recibir dos parámetros:

- Un puntero al **primer elemento** del arreglo (`inicio`)
- Un puntero al **último elemento** del arreglo (`fin`)

**Ejemplo de entrada**

Arreglo original:
[1, 2, 3, 4, 5]

**Ejemplo de salida esperada**

Arreglo invertido:
[5, 4, 3, 2, 1]


### Ejercicio 2

Implementar una función que calcule la longitud de una cadena de caracteres **sin usar `strlen`**, utilizando únicamente punteros.

**Entrada**

"Hola Mundo";

**Salida**

longitud: 10



### Ejercicio 3

Dado un arreglo de punteros a cadena, recorrerlo y encontrar **el nombre más largo**.

**Entrada**

Un arreglo de cadenas predefinido en el programa: {"Ana", "Luis", "Carlos"};

**Salida**

Nombre más largo del arreglo: Carlos.



### Ejercicio 4

Construir una **calculadora modular** donde la operación a realizar (suma, resta, multiplicación, división) no se codifica directamente en la función principal, sino que se pasa como un **puntero a función (callback)**.

El objetivo es entender cómo una función puede comportarse como un dato, permitiendo **separación de responsabilidades y código extensible**.

Modificar el programa para que el usuario elija la operación: 
```cpp
1 -> suma 
2 -> resta 
3 -> multiplicación 
4 -> división
```

y luego llamar dinámicamente a la función correspondiente usando punteros


**entrada**

5 8

4

**Salida**

Resultado: 0.625


### Ejercicio 5

Implementa una función que reciba un puntero genérico (`void*`) a una cadena de caracteres (`char*`) y muestre, para cada carácter:

- Su valor (el carácter)
- Su dirección de memoria



### Ejercicio 6

Se tiene la siguiente matriz estática:
```cpp
int A[3][4];
```
Trabajar con esta matriz de dos formas distintas:

#### Representación 1: Memoria CONTIGUA

Tratar la matriz como un solo bloque de memoria utilizando el siguiente puntero:
```cpp
int* ptr;
```

#### Representación 2: Memoria "FRAGMENTADA" (simulada)

Construir un arreglo de punteros a filas:
```cpp
int* filas[3];
```

**Restricciones**

* No usar A[i][j]

* No usar [] para acceder a elementos

* No usar memoria dinámica (new)

* Solo punteros y aritmética

* Comparar ambas representaciones

**Tareas**

1. Llenar la matriz con: `A[i][j] = (i+1)*(j+1)`
(Usando SOLO la representación contigua)

2. Imprimir la matriz usando:
    * Forma contigua
    * Forma fragmentada (filas)

3. Encontrar el máximo usando AMBAS representaciones

4. Intercambiar la primera y última fila usando: Solo punteros de la versión fragmentada (No copiar valores, solo intercambiar punteros)

5. Recorrer la matriz como arreglo lineal y:
    * Contar pares
    * Encontrar primer valor > 6

6. Responda las siguientes preguntas 

    * ¿Cuál forma recorre la memoria de manera más directa?

    * ¿Qué ventaja tiene usar `int*`?

    * ¿Qué ventaja tiene usar `int**` (o filas[])?


**Ejemplo de salida**
```text
Matriz:
1 2 3 4
2 4 6 8
3 6 9 12

Máximo (contigua): 12
Máximo (filas): 12

Tras intercambio de filas:
3 6 9 12
2 4 6 8
1 2 3 4

Pares: 8
Primer > 6: 8
```
