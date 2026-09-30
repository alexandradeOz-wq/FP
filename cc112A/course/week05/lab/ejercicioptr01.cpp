#include <iostream>
using namespace std;

// Funcion invertir los elementos en un arreglo

void invertir(int*inicio,int*fin){
    while(fin-inicio>0){
        swap(*(inicio),*(fin));
        //aritmetica de punteros
        inicio++;
        fin--;
    }

}
void print(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";

    }
}

int main(){
    int arr1[4]={1,2,3,4};
    int*inicio=arr1;
    int*fin=arr1+3;

    invertir(inicio,fin);
    print(arr1,4);

    return 0;
}