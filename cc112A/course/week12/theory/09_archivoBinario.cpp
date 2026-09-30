#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n = 255;
    ofstream txt("data/numero.txt"); // 3 bytes al disco
    txt << n;

    // Archivo binario:
    ofstream bin("data/numero.bin", ios::binary); // copia los 4 bytes al disco
    
    bin.write(reinterpret_cast<char*>(&n), sizeof(n));


    return 0;
}