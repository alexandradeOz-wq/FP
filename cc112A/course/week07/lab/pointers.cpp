/*
En sistemas reales (gráficos, matrices grandes, GPU, archivos),
las matrices no siempre están como int M[i][j]
muchas veces están como un solo bloque lineal en memoria

int A[N * M];

i) Implementar una función que permita acceder a un elemento (i, j)
   usando solo punteros, sin usar índices tipo A[i*M + j].


ii) Implementar una función que rote la matriz 90° en sentido anti-horario,
    trabajando directamente sobre el arreglo lineal usando punteros.

    1 2 3  ---- 90 grados en sentido antihorario  3 6
    4 5 6                                         2 5
                                                  1 4

    1 2 3 4 5 6                         3 6 2 5 1 4                                              
    No usar matrices auxiliares. Solo operaciones con punteros
    
*/