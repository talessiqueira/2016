#include <iostream> 
using namespace std;

int menor_diagonal (int matriz[6][6]) {
    int i, j, menor=1000;
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            if ((i==j) && (menor>matriz[i][j])) {
                      menor=matriz[i][j];
            }
        }
    }
    return menor;
}

int maior_diagonal (int matriz[6][6]) {
    int i, j, maior=0;
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            if ((j==(5-i)) && (maior<matriz[i][j])) {
                      maior=matriz[i][j];
            }
        }
    }
    return maior;
}

int menor_elemento (int matriz[6][6]) {
    int i, j, menor=1000;
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            if (menor>matriz[i][j]) {
                      menor=matriz[i][j];
            }
        }
    }
    return menor;
}

int soma_elementos (int matriz[6][6]) {
    int i, j, soma=0;
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
                      soma=matriz[i][j]+soma;
        }
    }
    return soma;
}

int main () {
    int matriz[6][6], i, j;
    for(i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            cin>>matriz[i][j];
        }
    }    
    cout<<menor_diagonal(matriz)<<" e o menor elemento da diagonal principal. \n";
    cout<<maior_diagonal(matriz)<<" e o maior elemento da diagonal secundaria. \n";
    cout<<menor_elemento(matriz)<<" e o menor elemento da matriz. \n";
    cout<<soma_elementos(matriz)<<" e a soma dos elementos da matriz. \n";
    system ("PAUSE");
}
