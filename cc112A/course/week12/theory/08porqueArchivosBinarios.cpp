#include <iostream>
#include <iomanip>
#include <fstream> // para manejar archivos
using namespace std;

int main(){
    double pi = 3.1415926535897931;

    // Paso 1
    ofstream txt("data/pi.txt");

    // Paso 2
    if (!txt.is_open()) {
        cerr << "No se pudo abrir" <<endl;
        return 1;
    }

    // Paso 3;
    txt << setprecision(17) << pi <<endl;

    // paso 4

    txt.close();


    // pi ocupar aprox 18 bytes
    cout << sizeof(double) << " bytes " <<endl;

    // las conversiones double ---> texto ---> double son ineficientes

    // 
    
    







    return 0;
}