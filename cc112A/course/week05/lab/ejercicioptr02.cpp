#include <iostream>
using namespace std;

int longitud(char* cadena){
    int contador=0;
    while (*cadena != '\0'){
        contador++;
        cadena++;
    }
    return contador;
}
int main(){
    char cadena[100];
    cout<<"ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100);
    cout<<"longitud: "<<longitud(cadena)<<endl;
    return 0;

}