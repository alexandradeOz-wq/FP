#include <iostream>
using namespace std;

int main(){

    // Util en matrices y estructuras dinamicas

    float y = 10;

    float*p = &y;

    float **pp = &p;

    cout << "El valor de y es: " <<*p << endl;
    cout << "El valor de y es: " << **pp << endl;
    


    return 0;
}