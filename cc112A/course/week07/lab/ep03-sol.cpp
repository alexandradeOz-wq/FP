#include <iostream>
using namespace std;

using  DataType = int; // tipo abstracto (flexible), tambien typedef int Datatype;

// Callback de ejemplo puede implementar otras 2 
void Square(DataType& x) {
    x = x * x;
}

// Funciones a implementar
// 1.  Crear matriz dinámica OK pero debe cambiar a notación de punteros adecuadamente
void CreateMatrix( DataType**& matrix, int rows, int cols) {
    // Reservar memoria para las filas
    matrix = new DataType*[rows];

    // Reservar memoria para cada fila
    for (int i = 0; i < rows; i++) {
        *(matrix +i) = new DataType[cols];
    }
}

// 2. Leer matriz
void ReadMatrix(DataType** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
}

// 3. Mostrar matriz
void PrintMatrix( DataType** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) 
            cout << *(*(matrix + i) + j) << " ";
        cout << endl;
}

// 4. Aplicar transformación
void TransformMatrix( DataType** matrix, int rows, int cols, void (*func)(DataType&)) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            func(*(*(matrix + i) + j));
}

// 5. Setear valores
void SetValue(DataType** matrix, int rows, int cols, DataType value) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            *(matrix[i] + j) = value;
}

// Liberar memoria OK pero debe cambiar a notación de punteros adecuadamente
void DeleteMatrix(DataType**& matrix, int rows) {
    // Liberar cada fila
    for (int i = 0; i < rows; i++) {
        delete[] *(matrix+i);
    }
    // Liberar arreglo de punteros
    delete[] matrix;

    // Evitar puntero colgante
    matrix = nullptr;
}

int main() {
    int rows = 3, cols = 4;
    DataType** matrix = nullptr;

    // Invocar a Crear matriz
    CreateMatrix(matrix,rows,cols);

    // Inicializar en cero
     SetValue(matrix,rows,cols,0);


    cout << "*** MATRIZ INICIAL ***\n\n";

    // Invocar a imprimir matriz
    PrintMatrix(matrix,rows,cols);


    // Leer valores
    cout << "\nIngrese los elementos:\n\n";
    // Invocar a leer matriz
    ReadMatrix(matrix, rows,cols);


    cout << "\n*** MATRIZ LEIDA ***\n\n";
    // Invocar a imprimir matriz
    PrintMatrix(matrix,rows,cols);

    // Invocar sus otros dos callbacks implementados
     // Complete aquí

    // Liberar memoria OK
    DeleteMatrix(matrix, rows); 
    return 0;
}