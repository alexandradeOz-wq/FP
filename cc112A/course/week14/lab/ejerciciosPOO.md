# Laboratorio 14: Introducción a la POO

## Ejercicio 1: Clase Cuenta Bancaria

Diseñe e implemente una clase denominada `CuentaBancaria` que represente una cuenta bancaria simplificada.

### Objetivo

El objetivo de este ejercicio es practicar:

* Encapsulamiento.
* Constructores.
* Invariante de clase.
* Métodos de acceso (*getters*).
* Métodos de modificación del estado del objeto (*setters*)
* Destructor.
* Generación automática de identificadores.
* Validación de operaciones sobre objetos.

---

### Miembros de datos privados

La clase deberá contener los siguientes atributos privados:
* `int numeroCuenta`
* `std::string titular`
* `double saldo`

La clase debe garantizar en todo momento que:

```text
saldo >= 0.0
```

Una cuenta bancaria nunca puede tener saldo negativo (**invariante de la clase**)

---

### Constructores

Implemente los siguientes constructores:

#### Constructor 1

Recibe únicamente el nombre del titular.

```cpp
CuentaBancaria(string titular);
```
En este caso el saldo inicial será `0.0`.

#### Constructor 2

Recibe el nombre del titular y el saldo inicial.

```cpp
CuentaBancaria(string titular, double saldoInicial);
```

Si el saldo inicial es negativo, deberá asignarse automáticamente el valor `0.0` para preservar el invariante de clase.

#### Número de cuenta

El número de cuenta deberá generarse automáticamente.

> Sugerencia: puede utilizar un contador estático (`static int`) o, temporalmente, asignar valores consecutivos manualmente.

---

### Métodos de consulta

Implemente los siguientes métodos:

```cpp
int getNumeroCuenta() const;
string getTitular() const;
double getSaldo() const;
```

Además, implemente un método:

```cpp
void imprimir() const;
```

que muestre toda la información de la cuenta.

---

### Operaciones sobre la cuenta

#### depositar(double monto)

Permite incrementar el saldo de la cuenta.

Reglas:

* Solo se aceptan montos positivos.
* Si el monto es menor o igual a cero, la operación debe ignorarse.

#### retirar(double monto)

Permite retirar dinero de la cuenta.

Reglas:

* El monto debe ser positivo.
* Solo se puede retirar si existe saldo suficiente.
* Si el monto solicitado supera el saldo disponible, la operación no debe realizarse.

---

### Destructor

Implemente un destructor que muestre un mensaje indicando:

* El número de cuenta.
* El titular.
* El saldo final de la cuenta.

Ejemplo:

```text
Cuenta 1001 cerrada.
Saldo final: S/ 850.50
```

---

### Programa principal

En la función `main()`:

1. Cree varias cuentas utilizando ambos constructores.
2. Intente crear una cuenta con saldo inicial negativo.
3. Realice depósitos válidos e inválidos.
4. Realice retiros válidos e inválidos.
5. Muestre el estado de cada cuenta antes y después de las operaciones.
6. Verifique que el invariante `saldo >= 0.0` nunca se viole.

---

## Ejercicio 2: Clase Password y Evaluación de Seguridad
Implementar una clase `Password` que permita generar contraseñas aleatorias y evaluar su nivel de seguridad.

### Objetivo
practicar conceptos de:
* Encapsulamiento
* Constructores
* Generación de datos aleatorios
* Validación de cadenas
* Uso de arreglos de objetos
* Arreglos paralelos (booleanos)

---

## Clase Password

### Atributos privados

* `int longitud`  longitud de la contraseña (por defecto 8)
* `string contrasena`  cadena generada automáticamente

---

## Constructores

### Constructor por defecto

* Inicializa la longitud en 8
* Genera automáticamente la contraseña

### Constructor con longitud personalizada

* Recibe la longitud como parámetro
* Genera automáticamente la contraseña con esa longitud

---

## Métodos

### Generación de contraseña

```cpp id="genpwd1"
void generarPassword();
```

Genera una contraseña aleatoria usando:

* Letras mayúsculas
* Letras minúsculas
* Números

La contraseña se construye respetando la longitud del objeto.

---

### Validación de seguridad

```cpp id="strong1"
bool esFuerte();
```

Una contraseña es considerada **fuerte** si cumple:

* Más de 2 letras mayúsculas
* Más de 1 letra minúscula
* Más de 5 números

Retorna:

* `true` → si es fuerte
* `false` → en caso contrario

---

### Getters

```cpp id="get1"
int getLongitud() const;
string getContrasena() const;
```

---

### Setter

```cpp id="set1"
void setLongitud(int nuevaLongitud);
```

* Cambia la longitud
* Regenera automáticamente la contraseña

---

## Programa principal

1. Solicitar por teclado la cantidad de contraseñas a generar.
2. Crear un arreglo de `Password` con ese tamaño.
3. Solicitar por teclado la longitud de cada contraseña antes de generarlas.
4. Crear un segundo arreglo de tipo `bool` para almacenar si cada contraseña es fuerte o no.
5. Mostrar al final los resultados en el siguiente formato:

```text id="out1"
contrasena1  true
contrasena2  false
contrasena3  true
...
```

---

## Reglas importantes de implementación

* Cada objeto `Password` debe generar su contraseña automáticamente al crearse.
* El análisis de fortaleza debe realizarse después de la generación.
* Se debe usar un **bucle único para creación** y otro para evaluación/impresión.

---


## Ejercicio 3: Clase Raices

Diseñar una clase `Raices` que modele el comportamiento de una ecuación cuadrática de la forma:

$$
ax^2 + bx + c = 0
$$

## Objetivos
Practicar: 
* Clases y objetos
* Encapsulamiento
* Constructor con parámetros
* Métodos de análisis
* Retorno de valores booleanos
* Reutilización de lógica interna
---

## Atributos privados

La clase debe contener los siguientes coeficientes:

* `double a`
* `double b`
* `double c`

Estos valores definen la ecuación y deben ser proporcionados al crear el objeto.

---

## Constructor

La clase debe contar con un constructor que reciba los tres coeficientes:

```cpp id="ctor1"
Raices(double a, double b, double c);
```

---

## Métodos principales

### 1. Obtener el discriminante

```cpp id="disc1"
double getDiscriminante();
```

Calcula y retorna el discriminante:

$$
D = b^2 - 4ac
$$

---

### 2. Verificar tipo de soluciones

#### tieneRaices()

```cpp id="tr1"
bool tieneRaices();
```

Retorna `true` si la ecuación tiene **dos soluciones reales**, es decir:

$$
D \ge 0
$$

---

#### tieneRaiz()

```cpp id="tr2"
bool tieneRaiz();
```

Retorna `true` si la ecuación tiene **una única solución**, es decir:

$$
D = 0
$$

---

### 3. Cálculo de soluciones

#### obtenerRaices()

```cpp id="or1"
void obtenerRaices();
```

Imprime las dos posibles soluciones cuando el discriminante es mayor que cero:

$$
x_{1,2} = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
$$

---

#### obtenerRaiz()

```cpp id="or2"
void obtenerRaiz();
```

Imprime la única solución cuando el discriminante es igual a cero:

$$
x = \frac{-b}{2a}
$$

---

### 4. Método principal de evaluación

#### calcular()

```cpp id="calc1"
void calcular();
```

Este método evalúa la ecuación completamente y muestra por consola:

* Las dos soluciones si existen.
* La única solución si es caso degenerado.
* Un mensaje indicando que no existen soluciones reales si el discriminante es negativo.

---

## Fórmula general

$$
x = \frac{-b \pm \sqrt{b^2 - 4ac}}{2a}
$$

Solo cambia el signo en `-b ±`.

---


## Ejercicio 4: Simulación de Cine
Diseñar un sistema orientado a objetos que simule el funcionamiento de una sala de cine, donde se asignan asientos a espectadores bajo ciertas restricciones.

### Objetivo
Practicar:

* Modelado de entidades del mundo real
* Composición de clases
* Matrices bidimensionales
* Validación de condiciones de negocio
* Simulación aleatoria
* Gestión de estado en objetos

---

## Descripción del sistema

Se modelará un cine con una sola sala que contiene:

* Una película en reproducción
* Un conjunto de asientos
* Un precio de entrada

---

## Clase Película

Representa la información de la película en cartelera.

### Atributos privados

* `string titulo`
* `int duracion` (en minutos)
* `int edadMinima`
* `string director`

---

## Clase Espectador

Representa a una persona que intenta ingresar al cine.

### Atributos privados

* `string nombre`
* `int edad`
* `double dinero`

---

## Clase Asiento

Representa cada butaca dentro de la sala.

### Atributos privados

* `char columna` (A–I)
* `int fila` (1–8)
* `bool ocupado`

---

## Clase Cine

Representa la sala de cine completa.

### Atributos privados

* `Película pelicula`
* `double precioEntrada`
* `Asiento[8][9] asientos`

---

## Estructura de los asientos

La sala está organizada como una matriz de 8 filas por 9 columnas:

```text
8 A 8 B 8 C 8 D 8 E 8 F 8 G 8 H 8 I
7 A 7 B 7 C 7 D 7 E 7 F 7 G 7 H 7 I
6 A 6 B 6 C 6 D 6 E 6 F 6 G 6 H 6 I
5 A 5 B 5 C 5 D 5 E 5 F 5 G 5 H 5 I
4 A 4 B 4 C 4 D 4 E 4 F 4 G 4 H 4 I
3 A 3 B 3 C 3 D 3 E 3 F 3 G 3 H 3 I
2 A 2 B 2 C 2 D 2 E 2 F 2 G 2 H 2 I
1 A 1 B 1 C 1 D 1 E 1 F 1 G 1 H 1 I
```

La fila 1 se encuentra en la parte inferior de la matriz.

---

## Reglas del sistema

Un espectador **solo puede sentarse si cumple todas las condiciones:**

### 1. Condición de edad

* La edad del espectador debe ser mayor o igual a la edad mínima de la película.

### 2. Condición económica

* El espectador debe tener dinero suficiente para pagar la entrada.

### 3. Disponibilidad de asientos

* Solo se puede asignar un asiento si está libre.
* Si el asiento está ocupado, se busca otro disponible aleatoriamente.

---

## Simulación

El programa deberá:

1. Generar una película con datos aleatorios.
2. Generar múltiples espectadores con datos aleatorios.
3. Intentar sentar a cada espectador **uno por uno**.
4. Validar las condiciones antes de asignar asiento.
5. Asignar un asiento libre aleatorio si es posible.
6. Rechazar al espectador si no cumple condiciones o no hay espacio.

---

## Restricciones importantes

* No se permiten asignaciones en asientos ocupados.
* La asignación debe ser aleatoria dentro de los asientos disponibles.
* El proceso es secuencial (un espectador a la vez).
* El sistema debe reflejar siempre el estado actualizado de la sala.

---


## Ejercicio 5: Jerarquía de Tipos Numéricos
Diseñar e implementar una jerarquía de clases que represente distintos tipos de datos numéricos, aplicando los principios fundamentales de la Programación Orientada a Objetos. La idea es extender conceptualmente los tipos numéricos básicos de C++ (`int`, `float`, `double`) mediante clases que representen estructuras matemáticas más complejas.


## Objetivos
Practicar:

* Herencia
* Polimorfismo dinámico
* Clases abstractas
* Sobrescritura de métodos (`override`)
* Punteros a clase base
* Diseño orinetado a objetos basados en jerarquías
* Destrutor virtual
* Encapsulamiento
* Reutilización de código

---

## Clase abstracta: Numero

Diseñe una clase abstracta denominada `Numero` que represente cualquier entidad matemática capaz de mostrar su valor y calcular una magnitud numérica asociada.

### Responsabilidades

La clase deberá declarar los siguientes métodos virtuales puros:

```cpp
virtual void imprimir() const = 0;
virtual double magnitud() const = 0;
```

### Interpretación de la magnitud

La magnitud dependerá del tipo concreto:

* Entero: valor absoluto.
* Fracción: valor absoluto de su representación decimal.
* Complejo: módulo del número complejo.
* Vector: norma euclidiana.
* Matriz: norma de Frobenius.

---

## Clases derivadas

Implemente al menos las siguientes clases derivadas:

### 1. Entero

Representa un número entero.

#### Atributos

```cpp
int valor;
```

#### Ejemplo

```text
Entero: -15
Magnitud: 15
```

---

### 2. Fraccion

Representa una fracción racional.

#### Atributos

```cpp
int numerador;
int denominador;
```

#### Restricción

El denominador nunca puede ser cero.

#### Ejemplo

```text
Fraccion: 3/4
Magnitud: 0.75
```

---

### 3. Complejo

Representa un número complejo.

#### Atributos

```cpp
double real;
double imaginaria;
```

#### Magnitud

$$
|z| = \sqrt{a^2+b^2}
$$

#### Ejemplo

```text
Complejo: 3 + 4i
Magnitud: 5
```

---

### 4. Vector2D

Representa un vector bidimensional.

#### Atributos

```cpp
double x;
double y;
```

#### Magnitud

$$
\sqrt{x^2+y^2}
$$

#### Ejemplo

```text
Vector: (3,4)
Magnitud: 5
```

---

## Polimorfismo

Todos los objetos deberán manipularse mediante punteros o referencias a la clase base `Numero`.

Por ejemplo:

```cpp
Numero* arreglo[4];
```

o

```cpp
vector<Numero*> elementos;
```

---

## Programa principal

En el programa principal:

1. Crear objetos de distintos tipos derivados.
2. Almacenarlos en una colección de punteros a `Numero`.
3. Recorrer la colección utilizando polimorfismo.
4. Mostrar la información de cada objeto mediante `imprimir()`.
5. Mostrar la magnitud correspondiente de cada objeto.
6. Calcular y mostrar la suma de todas las magnitudes.

---

## Restricciones

* La clase `Numero` no puede instanciarse directamente.
* Todos los métodos virtuales puros deben implementarse en las clases derivadas.
* Debe utilizarse la palabra clave `override`.
* Debe existir un destructor virtual en la clase base.

---

## Ejemplo de salida:

```text
Entero: -10
Magnitud: 10

Fraccion: 3/4
Magnitud: 0.75

Complejo: 3 + 4i
Magnitud: 5

Vector: (6,8)
Magnitud: 10

Suma total de magnitudes: 25.75
```

---
