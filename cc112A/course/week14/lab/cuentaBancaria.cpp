#include <iostream>
using namespace std;


// Definir e implementar la clase

class CuentaBancaria {
private:
    int numeroCuenta;
    string titular;
    double saldo;   // invariane de clase saldo >= 0.0

    static int contador;

public:
    // constructores
    CuentaBancaria(string titular) {
        this->titular = titular;
        this-> saldo = 0.0;
        this-> numeroCuenta = ++contador;
    }
    CuentaBancaria(string titular, double saldoInicial) {
        this->titular = titular;
        if(saldoInicial < 0) {
            this->saldo = 0.0;
        } else {
            this -> saldo = saldoInicial;
        }
        this-> numeroCuenta = ++contador;
    }

    int getNumeroCuenta() const {
        return numeroCuenta;
    }
    string getTitular() const {
        return titular;
    }
    double getSaldo() const {
        return saldo;
    }
    void imprimir() const {
        cout << "Numero de cuenta: " << numeroCuenta <<endl;
        cout << "Titular: " << titular <<endl;
        cout << "Saldo: "  << saldo << endl;
    }

    void depositar(double monto) {
        if (monto <= 0) {
            cout << "ERROR, el monto debe ser positivo" <<endl;
        } else {
            saldo += monto; 
            cout << "DEPOSITO realizado" <<endl;
        }
    }
    void retirar(double monto) {
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
    ~CuentaBancaria() {
        cout << "Cuenta: " <<numeroCuenta << " cerrada" <<endl;
        cout << "Titular: " << titular <<endl;
        cout << "Saldo final: S/ " <<  saldo <<endl;
    }

};


int CuentaBancaria::contador = 0;

int main(){
    CuentaBancaria c1("Ana");
    CuentaBancaria c2("Juan", -300);

    c1.imprimir();
    c2.imprimir();



    return 0;
}