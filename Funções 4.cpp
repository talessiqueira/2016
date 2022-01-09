#include <iostream>
using namespace std;

void funcao(float A[5]) {
     float aux;
     int i, j;
     for (j=0;j<4;j++) {
         for (i=0;i<4;i++) {
             if (A[i]>A[i+1]) {
             aux=A[i];
             A[i]=A[i+1];
             A[i+1]=aux;
         }
         }
     }
}


int main () {
    float A[5];
    int i;
    cout<<"Digite cinco numeros: \n";
    for (i=0;i<5;i++) {
        cout<<"Digite o "<<i+1<<"o. numero: ";
        cin>>A[i];
    }
    funcao(A);
    cout<<"Aqui estao os numeros, ordenados em ordem crescente: \n";
    for (i=0;i<5;i++) {
        cout<<A[i]<<" ";
    }
    system ("PAUSE");
}
