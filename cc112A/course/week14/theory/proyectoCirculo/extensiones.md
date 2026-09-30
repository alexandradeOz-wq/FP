# Ejercicios adicionales

## Ejercicio 1

Agrega una clase Esfera que herede directamente de Figura (no de Circulo). Implementa calcularArea, calcularPerimetr (circunferencia máxima) e imprimir. Luego agrégala al vector de main.cpp y comprueba que el bucle no cambia ni una línea.

**Concepto**: el principio abierto/cerrado — el código existente queda cerrado a modificaciones pero abierto a extensión. Agregar Esfera no toca Circulo, Cilindro ni el bucle.

## Ejercicio 2

Agrega Rectangulo que herede de Figura. Tiene ancho y alto. Implementa el contrato completo. El objetivo es notar que no todo comparte radio — Figura no debe tener radio, solo el contrato de área/perímetro/imprimir.

**Concepto**: la clase base debe contener solo lo que es verdaderamente común a todas las derivadas. Poner radio en Figura sería un error de diseño: Rectangulo no tiene radio.

## Ejercicio 3: Copia superficial vs copia profunda

Crea una clase Poligono que almacena sus vértices en un arreglo dinámico (double*). Demuestra primero el bug de la copia superficial (dos objetos comparten el mismo puntero) y luego impleméntala con copia profunda correcta.

Este es **el bug más común en clases con recursos dinámicos**. El compilador genera un constructor de copia que copia el puntero, no los datos. Dos objetos apuntan al mismo arreglo. Cuando uno se destruye, el otro queda con un puntero colgante.


## Ejercicio 4:

Demuestra por qué el destructor de la clase base debe ser virtual cuando hay recursos dinámicos en la clase derivada. Sin virtual, hacer delete ptr desde un puntero a la base no llama al destructor de la derivada — y sus recursos nunca se liberan.

Muestre que hay fuga de memoria garantizada si el destructor de la base no es virtual y usas polimorfismo con new/delete.


## Ejercicio 5: Encadenamiento de operaciones 

Modifica Circulo para que setRadio retorne una referencia a *this. Esto permite encadenar llamadas: `c.setRadio(5).escalar(2).imprimir().` Luego extiende el patrón a Cilindro.

**Concepto**: el encadenamiento se logra retornando *this por referencia. Es el mismo patrón que usa `std::cout << a << b << c;` — cada << retorna la referencia al stream para que el siguiente << pueda usarlo.

## Ejercicio 6 - La regla de los cinco

Aplica la regla de los cinco a una clase ListaFiguras que gestiona un arreglo dinámico de punteros Figura*. Si defines cualquiera de los cinco métodos especiales, debes definir los cinco.

Los cinco métodos especiales son:
* constructor de copia 
* operador de asignación por copia 
* constructor de movimiento 
* operador de asignación por movimiento 
* destructor

Si defines uno, el compilador asume que los demás también necesitan lógica especial.


## Ejercicio 7 - Sobrecarga de operadores

Extiende Circulo para que soporte operadores matemáticos, de comparación y de flujo. El objetivo es que el código del usuario lea igual que si trabajara con tipos primitivos:
`c1 + c2, c1 > c2, cout << c1`.

* c1 + c2 nuevo Circulo con radio sumado

* c1 * 2.0 escalar el radio por un factor

* c1 == c2 misma área (tolerancia)

* c1 > c2 mayor área

* cout << c1 imprimir con flujo estándar

* cin >> c1 leer radio desde entrada