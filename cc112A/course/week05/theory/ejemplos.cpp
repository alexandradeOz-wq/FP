#include <iostream>
using namespace std;

int main(){

    // Util si deseamos modificar la cadena
    char ch1[] = "Literal de cadena"; // {'L', 'i', ...,'\0'};
    ch1[0] = 'T';

    // Util si solo deseamos recorrer la cadena (No se puede modificar)
    const char *ch = "Literal de cadena";
    // ch[0] = 'T';  // ERROR

    const char *frutas[] = {"Manzana", "Pera"};

    return 0;
}