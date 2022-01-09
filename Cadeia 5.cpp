#include <iostream>
#include <string.h>
#include <stdio.h>

         using namespace std;
         int main() {
             char palavra[100], novapalavra[100];
             int i, tamanho, resultado;
             cout<<"Digite uma palavra: \n";
             gets(palavra);
             tamanho=strlen(palavra);
             for (i=0;i<tamanho;i++) {
                 novapalavra[i]=palavra[tamanho-i-1];
             }
             resultado = strcmp(palavra, novapalavra);
             if (resultado == 0) {
                cout<<"Essa palavra e um palindromo.\n";
             }
             system ("PAUSE");
         }
