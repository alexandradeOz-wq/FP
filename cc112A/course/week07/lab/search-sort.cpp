/*
Dado un arreglo de enteros A (no necesariamente ordenado)
y un entero k, seleccionar k elementos del arreglo tal que:
la distancia mínima entre cualquier par de elementos
seleccionados sea lo más grande posible

Ejemplo
A = [1, 2, 8, 4, 9]
k = 3


Una selección óptima:
[1, 4, 9]

Distancias:
4-1 = 3 -----> distancia minima = 3 (el mejor valor posible)
9-4 = 5

IDEA:
i) Ordenar el arreglo ---> [1, 2, 4, 8, 9]
ii) realizar busqueda binaria sobre d en [0, max A - min A]
   Implementar una funcion auxiliar que verifique si 
    es posible obtener una distancia d 

#include<algorithm>
std::sort()
binary_search()
*/