#include <iostream>
using namespace std;

float funcao(float X[5][5]) {
      int i, j;
      float soma=0;
      for (j=0;j<5;j++) {
         for (i=0;i<5;i++) {    
             soma=X[i][j]+soma;
         }
    }  
    return soma;
}


int main () {
    int i, j;
    float matriz[5][5], soma;
    for (j=0;j<5;j++) {
         for (i=0;i<5;i++) {
             cin>>matriz[i][j];
         }
    }
    soma=funcao(matriz);
    cout<<"Essa e a soma dos numeros digitados: ";
    cout<<soma;
    system ("PAUSE");
}
