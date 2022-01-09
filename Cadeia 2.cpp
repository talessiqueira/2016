#include <iostream>
#include <stdio.h>
#include <string.h>

int main () {
    char cad[100];
    int total=0, i, tamanho;
    printf ("Digite a frase: ");
    gets (cad);
    tamanho = strlen(cad);
    strlwr(cad);
    for (i=0;i<tamanho;i++) {
        if (cad[i]=='a') {
        total=total+1;
        }
        if (cad[i]=='e') {
        total=total+1;
        }
        if (cad[i]=='i') {
        total=total+1;
        }
        if (cad[i]=='o') {
        total=total+1;
        }
        if (cad[i]=='u') {
        total=total+1;
        }
    }
    printf ("Ha %d vogais na frase \n", total);
    system ("PAUSE");   
}
