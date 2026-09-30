#include "CuentaBancaria.h"

int main(){
    CuentaBancaria c1("Ana");
    CuentaBancaria c2("Juan", -300);
    CuentaBancaria c3("Pedro", 340);



    c1.imprimir();
    c2.imprimir();

    c3.depositar(345);

    c3.imprimir();



    return 0;
}