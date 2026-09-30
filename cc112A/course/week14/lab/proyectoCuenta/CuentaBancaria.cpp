#include "CuentaBancaria.h"
#include <iostream>
using namespace std;



int CuentaBancaria::contador = 0;
// constructores
CuentaBancaria::CuentaBancaria(string titular) {
    this->titular = titular;
    this-> saldo = 0.0;
    this-> numeroCuenta = ++contador;
}


CuentaBancaria::CuentaBancaria(string titular, double saldoInicial) {
    this->titular = titular;
    if(saldoInicial < 0) {
        this->saldo = 0.0;
    } else {
        this -> saldo = saldoInicial;
    }
    this-> numeroCuenta = ++contador;
}

int CuentaBancaria::getNumeroCuenta() const {
    return numeroCuenta;
}
string CuentaBancaria::getTitular() const {
    return titular;
}
double CuentaBancaria::getSaldo() const {
    return saldo;
}
void CuentaBancaria::imprimir() const {
    cout << "Numero de cuenta: " << numeroCuenta <<endl;
    cout << "Titular: " << titular <<endl;
    cout << "Saldo: "  << saldo << endl;
}

void CuentaBancaria::depositar(double monto) {
    if (monto <= 0) {
        cout << "ERROR, el monto debe ser positivo" <<endl;
    } else {
        saldo += monto; 
        cout << "DEPOSITO realizado" <<endl;
    }
}
void CuentaBancaria::retirar(double monto) {
    if(monto > saldo) {
        cout << "ERROR, el monto es mayor que el saldo" <<endl;
    } else if(monto < 0){
        cout << "ERROR, el monto debe ser positivo" <<endl;
    } else {
        saldo -= monto;
        cout << "RETIRO exitoso" <<endl;
    }
        
}

// destructor
CuentaBancaria::~CuentaBancaria() {
    cout << "Cuenta: " <<numeroCuenta << " cerrada" <<endl;
    cout << "Titular: " << titular <<endl;
    cout << "Saldo final: S/ " <<  saldo <<endl;
}
