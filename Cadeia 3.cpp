#include <iostream>
#include <string.h>
#include <stdio.h>

         using namespace std;
         int main () {
             int i, palavra=1, tamanho;
             char frase[100];
             cout<<"Digite uma frase: \n";
             gets (frase);
             tamanho = strlen (frase);
             for (i=0;i<tamanho;i++) {
                 if (frase[i] == ' '){
                    palavra=palavra+1;
                 }
             }
             cout<<"Ha "<<palavra<<" palavras na frase. \n";
             system ("PAUSE");
         }
             
