#pragma once   // para incluir una sola vez 
#include<iostream>
using namespace std;
class CuentaBancaria {
private:
    int numeroCuenta;
    string titular;
    double saldo;   // invariane de clase saldo >= 0.0
    static int contador;

public:
    // constructores
    CuentaBancaria(string titular);
    CuentaBancaria(string titular, double saldoInicial);

    int getNumeroCuenta() const;
    string getTitular() const;
    double getSaldo() const;
    void imprimir() const;

    void depositar(double monto);
    void retirar(double monto);

    // destructor
    ~CuentaBancaria();

};