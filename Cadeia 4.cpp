#include <iostream>
#include <string.h>
#include <stdio.h>

         using namespace std;
         int main() {
             char frase[100];
             int i, tamanho;
             cout<<"Digite uma frase: \n";
             gets(frase);
             tamanho = strlen (frase);
             char invertida[100];
             for (i=0;i<tamanho;i++) {
                 invertida[i]=frase[tamanho-i-1];
             }
             printf ("Essa e a frase invertida:\n");
             for (i=0;i<tamanho;i++) {
                 cout<<invertida[i];
             }
             cout<<"\n";
             system ("PAUSE");    
         }
