#include <iostream>
using namespace std;

struct TPersona {
   char codigo[15]; // 15
   char *nombre;    // 8
   int dni;          // 4
   char direccion[50]; // 50
   double sueldo;      // 8
};


int main(){

    TPersona p1;

    cout << sizeof(p1) << " bytes" << endl;

    return 0;
}