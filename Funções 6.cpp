#include <iostream>
using namespace std;

float funcao(float X[4][4]) {
      int i, j, cont=0,;
      float soma=0, media;
      for (i=0;i<4;i++) {
         for (j=0;j<4;j++) {   
             if (i>j){ 
                soma=X[i][j]+soma;
                cont=cont+1;
             }
         }
      }
      media=soma/cont;
    return media;
}

int main () {
    int i, j;
    float matriz[4][4], media;
    for (j=0;j<4;j++) {
         for (i=0;i<4;i++) {
             cin>>matriz[i][j];
         }
    }
    media=funcao(matriz);
    cout<<"\nEssa e a media: ";
    cout<<media;
    system ("PAUSE");
}
