#include<iostream>
#include<cstring>
using namespace std;

void inver(char* a,int sz){
    int f=sz;
    int i=0;
    char aux;
    while(i<=f){
        aux =*(a+i);
       *(a+i)=*(a+f);
        *(a+f)=aux;
        i++;
        f--;
    }
}

void prin(char *a,int sz){
int i=0;
while(i<=sz){
    cout<<*(a+i);
    i++;
}
}

int len(char* a){
    char *in = (a+0);
    int size=0;
    int i=0;
    while(i<100){
        if(*(in +i)=='\0'){
            break;
        }
          size+=1;
        i+=1;

    }
    return size;
}

int main(){
char cadena[100];
    cin.getline(cadena,100,'\n');
int size=len(cadena);
inver(cadena,size);
prin(cadena,size);

cout <<"Imprimiendo cadena: " <<   cadena << endl;
}