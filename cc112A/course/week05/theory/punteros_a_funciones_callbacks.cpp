/*
Se desea implementar un sistema de login (autenticación) que valide usuarios
según diferentes políticas de seguridad:
Modo 1: Validación simple: el usuario puede ingresar si usuario == contraseña
Modo 2: Validación segura: la contraseña debe tener al menos 8 caracteres y ser distinta del usuario

El sistema debe permitir elegir el tipo de validación al momento de ejecutar el login.
*/

// Implementación sin usar callbacks
// ¿Qué problemas presenta esta implementación?
// ¿Qué sucede se agregan más políticas?


#include <iostream>
#include <string>
using namespace std;

// Función login
void login(string user, string pass, int modo) {
    
    cout << "Intentando login para: " << user << endl;

    // PROBLEMA 1: lógica acoplada
    // La función login conoce TODAS las formas de validación
    // gestiona flujo, valida, no hay responsabilidad unica
    

    if (modo == 1) {

        // PROBLEMA 2: código incrustado
        // Esta lógica no se puede reutilizar en otro contexto
        if (user == pass) {
            cout << "Acceso concedido (modo simple)\n";
        } else {
            cout << "Acceso denegado\n";
        }

    } else if (modo == 2) {

        // PROBLEMA 3: crecimiento descontrolado
        // Cada nueva política implica agregar más bloques else-if
        if (pass.length() >= 8 && pass != user) {
            cout << "Acceso concedido (modo seguro)\n";
        } else {
            cout << "Acceso denegado\n";
        }

    } else {
        cout << "Modo de validacion desconocido\n";
    }

    // PROBLEMA 4: violación del principio Open/Closed
    // Cada vez que agrego un nuevo modo debo modificar esta función
    
}


int main() {

    // PROBLEMA 5: Qué significa "modo = 1"
    login("andre", "andre", 1);

    cout << "------------------\n";

    login("andre", "12345678", 2);

    cout << "------------------\n";

    login("andre", "123", 2);

    return 0;
}



// ¿Y si en lugar de decirle a login cómo validar, le pasamos 
// directamente la función que valida?  login(user, pass, validacion);


