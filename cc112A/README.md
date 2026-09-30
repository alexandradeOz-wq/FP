# CC112 — Fundamentos de Programación

Repositorio del curso **Fundamentos de Programación (CC112)**. Aquí se irá colocando el material de cada semana: diapositivas, códigos de ejemplo, prácticas de laboratorio y recursos adicionales.

Este curso es la continuación de **Introducción a la Computación (BIC01)**. Profundizaremos en C++ con énfasis en buenas prácticas de desarrollo: uso de **Linux**, **terminal**, **Git/GitHub** y herramientas profesionales para la gestión de memoria como **Valgrind** y **ASan**.



---

## Contenido del Curso

---

###  Capítulo 1: Iteración y Recursividad

---

### [Semana 1](./semanas/semana01/) — Recursividad e Iteración

Arrancamos el curso con una de las ideas más poderosas de la programación: la **recursividad**. Estudiaremos en profundidad qué significa que una función se llame a sí misma, cuál es el papel del **caso base** y la **llamada recursiva**, y cuándo conviene usar una solución recursiva frente a una **iterativa**. Analizaremos las diferencias de eficiencia entre ambos enfoques y veremos ejemplos concretos de problemas clásicos resueltos de las dos formas.

---

### 📘 Capítulo 2: Ordenamiento y Búsqueda

---

### [Semana 2](./semanas/semana02/) — Algoritmos de Ordenamiento y Búsqueda I

El ordenamiento es uno de los problemas más fundamentales de la computación. Esta semana estudiaremos los algoritmos clásicos de ordenamiento cuadrático: **Bubble Sort** (burbuja), **Selection Sort** (selección) e **Insertion Sort** (inserción). Entenderemos cómo funciona cada uno paso a paso, cuál es su complejidad y cuándo tiene sentido usarlos. También veremos el algoritmo de **búsqueda lineal** para encontrar elementos dentro de un arreglo.

---

### [Semana 3](./semanas/semana03/) — Algoritmos de Ordenamiento y Búsqueda II

Pasamos a los algoritmos de ordenamiento eficientes basados en la estrategia **divide y vencerás**: **Merge Sort** (ordenamiento por mezcla) y **Quick Sort** (ordenamiento rápido). Analizaremos su complejidad temporal y los compararemos con los algoritmos de la semana anterior. También estudiaremos la **búsqueda binaria**, que permite encontrar elementos en arreglos ordenados de forma mucho más eficiente que la búsqueda lineal.

---

### [Semana 4](./semanas/semana04/) — Punteros I

Comenzamos uno de los bloques más importantes del curso: los **punteros**. Esta semana entenderemos cómo se organiza la memoria de un programa, qué es una **variable de tipo puntero** y cómo se relaciona con las direcciones de memoria. Estudiaremos los conceptos de **aritmética de punteros** y cómo un **arreglo de una dimensión** puede verse y manipularse como un puntero.

---

### Capítulo 3: Punteros y Cadenas

---

### [Semana 5](./semanas/semana05/) — Punteros II

Profundizamos en el manejo de punteros. Aprenderemos a **pasar punteros como parámetros** de funciones, a trabajar con **arreglos de punteros** y con **punteros a punteros**. Estudiaremos las reglas de precedencia de los modificadores `*`, `()` y `[]`, y veremos los punteros especiales: puntero a `void` y puntero a `const`. Finalizamos con una introducción a los **punteros inteligentes** de C++ moderno como alternativa segura a los punteros crudos.

---

### [Semana 6](./semanas/semana06/) — Cadenas de Caracteres I

El texto también es memoria. Esta semana estudiaremos cómo C++ representa internamente las **cadenas de caracteres**, partiendo desde la tabla **ASCII** y la aritmética limitada de caracteres. Veremos la diferencia entre un **arreglo de caracteres** y una **cadena**, cómo apunta un puntero a una cadena, y las funciones estándar para **entrada de datos desde teclado** y **salida de información**, junto con las primeras funciones de la librería para el manejo de cadenas.

---

### [Semana 7](./semanas/semana07/) — Cadenas de Caracteres II

Completamos el estudio de las cadenas. Aprenderemos el conjunto completo de **funciones para manipular cadenas**: copiar, concatenar, comparar, buscar subcadenas y obtener la longitud. También veremos las **funciones para caracteres** (clasificación y transformación) y las funciones para **convertir cadenas** en valores numéricos y viceversa. Al finalizar esta semana tendremos todas las herramientas necesarias para procesar texto de forma profesional en C++.

---

### [Semana 8](./semanas/semana08/) — Examen Parcial

Semana de **examen parcial**. Cubre todos los temas vistos desde la Semana 1 hasta la Semana 7: recursividad e iteración, algoritmos de ordenamiento y búsqueda, punteros (I y II) y cadenas de caracteres (I y II).

---

### 📘 Capítulo 4: Manejo Eficiente de Memoria

---

### [Semana 9](./semanas/semana09/) — Memoria Dinámica con Arreglos

Hasta ahora toda la memoria de nuestros programas se reservaba en tiempo de compilación. Esta semana aprenderemos a reservar y liberar memoria **en tiempo de ejecución** usando el área de **memoria dinámica (heap)**. Trabajaremos con los operadores `new` y `delete`, y aprenderemos a crear **arreglos de una dimensión** y **arreglos multidimensionales** de forma dinámica usando punteros.

Para detectar y corregir errores de memoria usaremos herramientas profesionales:
- **Valgrind**: detecta fugas de memoria, accesos inválidos y uso de memoria sin inicializar en tiempo de ejecución.
- **ASan (AddressSanitizer)**: sanitizer integrado en GCC/Clang, se activa con `-fsanitize=address` y reporta errores de memoria al instante.

---

### [Semana 10](./semanas/semana10/) — Semana de Expociencia

Esta semana las actividades del curso se posponen por la **Semana de Expociencia** de la universidad. El contenido programado se retoma en la Semana 11.

---

### [Semana 11](./semanas/semana11/) — Estructuras (`struct`)

Los arreglos agrupan datos del mismo tipo; las **estructuras** nos permiten agrupar datos de **tipos distintos** bajo un mismo nombre. Esta semana aprenderemos a definir, declarar, leer e imprimir variables de tipo `struct`, a crear **arreglos de estructuras**, a **anidar estructuras** dentro de otras y a usar **punteros a estructuras**. También veremos cómo pasar estructuras como parámetros de funciones y cómo las funciones pueden retornar estructuras.

---

### [Semana 12](./semanas/semana12/) — Gestión Dinámica de Memoria y Estructuras

Combinamos los dos bloques anteriores. Esta semana exploraremos los **problemas más comunes** de la gestión manual de memoria (fugas, doble liberación, punteros colgantes) y las mejores prácticas para evitarlos. Haremos un resumen integrador del uso de **punteros y memoria dinámica** aplicado a estructuras, preparándonos para los temas de archivos y POO que vienen a continuación.

---

### 📘 Capítulo 5: Archivos

---

### [Semana 13](./semanas/semana13/) — Archivos

Los datos de un programa no tienen por qué desaparecer al cerrarlo. Esta semana aprenderemos los conceptos fundamentales sobre **archivos**: qué son los archivos físicos y lógicos, cómo se organizan y cuáles son los modos de acceso. Trabajaremos con **archivos de texto** y **archivos binarios**, y aprenderemos a realizar las operaciones básicas sobre ellos: apertura, lectura, escritura, cierre y mantenimiento de archivos.

---

### 📘 Capítulo 6: Introducción a la Programación Orientada a Objetos

---

### [Semana 14](./semanas/semana14/) — Clases y Objetos

Entramos al paradigma que define el C++ moderno: la **Programación Orientada a Objetos**. Esta semana aprenderemos qué es una **clase**, cómo definir sus **atributos** y **métodos**, y cómo crear **objetos** a partir de ella. Estudiaremos las funciones miembro especiales: **constructores**, **destructores** y el uso del puntero `this` dentro de un constructor para referirse al propio objeto.

---

### [Semana 15](./semanas/semana15/) — Herencia y Polimorfismo

Completamos la introducción a la POO con sus dos conceptos más poderosos. La **herencia** permite que una clase derive de otra, reutilizando y extendiendo su comportamiento; estudiaremos los distintos tipos de herencia y cómo implementarla en C++. El **polimorfismo** permite que objetos de diferentes clases respondan al mismo mensaje de formas distintas. Veremos cómo se relacionan estos conceptos y cómo sientan las bases del diseño orientado a objetos profesional.

---

<!--
### [Semana 16](./semanas/semana16/) — Repaso General

Semana de **repaso y recuperación**. Revisaremos los conceptos más importantes del curso, resolveremos dudas y consolidaremos los temas del segundo bloque: gestión de memoria, archivos y POO, preparándonos para el examen final.

-->


### [Semana 16](./semanas/semana16/) — Examen Final

Semana de **examen final**. Cubre los temas del segundo bloque del curso: cadenas de caracteres II, gestión dinámica de memoria, archivos y programación orientada a objetos.

---

### [Semana 17](./semanas/semana17/) — Examen Sustitutorio

Semana de **examen sustitutorio** para quienes necesiten reemplazar la nota del parcial o del final. Cubre todos los temas del curso: iteración y recursividad, ordenamiento y búsqueda, punteros, cadenas, gestión dinámica de memoria, archivos y POO.

---

## Herramientas que usaremos

| Herramienta | ¿Para qué? |
|-------------|------------|
| [**Linux (Ubuntu)**](https://www.linux.org/) | Sistema operativo principal del curso, basado en software libre, ampliamente utilizado en ciencia, ingeniería y desarrollo profesional. Desarrollaremos y compilaremos todos nuestros programas en un entorno Linux |
| [**Terminal (Bash)**](https://ubuntu.com/tutorials/command-line-for-beginners) | Interfaz de comandos para compilar, ejecutar, depurar y automatizar tareas directamente desde la línea de comandos |
| [**GCC / G++**](https://gcc.gnu.org/) | Compilador de C++ con soporte para estándares modernos (`-std=c++17`). Lo usaremos junto con flags de depuración y sanitizers |
| [**Git**](https://git-scm.com/) | Control de versiones para llevar un historial de nuestro código y trabajar en equipo sin perder cambios |
| [**GitHub**](https://github.com/) | Plataforma donde alojaremos el repositorio del curso. Además será el medio oficial de entrega de tareas o proyectos del curso |
| [**Valgrind**](https://valgrind.org/) | Herramienta de análisis dinámico para detectar **fugas de memoria**, accesos inválidos y uso de memoria sin inicializar |
| [**ASan (AddressSanitizer)**](https://github.com/google/sanitizers/wiki/AddressSanitizer) | Sanitizer integrado en GCC/Clang. Se activa con `-fsanitize=address` y detecta errores de memoria en tiempo de ejecución |
| [**VS Code**](https://code.visualstudio.com/) | Editor de código con soporte para C++, integración con Git y terminal incorporada |

---

## Bibliografía

- **C++ Crash Course** — Josh Lospinoso
- **Modern C++: Efficient and Scalable Application Development** — Richard Grimes, Marius Bancila
- **C++ High Performance** — Bjorn Andrist, Viktor Sehr, Ben Garney
- **C++ Primer** *(5th Edition)* — Lippman, Lajoie & Moo
- **Effective Modern C++** — Scott Meyers
- **The C++ Programming Language** *(4th Edition)* — Bjarne Stroustrup
- **C++ How to Program** *(10th Edition)* — Deitel & Deitel

---
