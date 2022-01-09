#include <iostream>
#include <stdio.h>
#include <string.h>

int main () {
    char cad1[10], cad2[5];
    printf ("Digite a primeira palavra: ");
    scanf("%s%*c", &cad1);
    printf ("Digite a segunda palavra: ");
    scanf("%s%*c", &cad2);
    strcat(cad1, " ");
    strcat (cad1, cad2);
    printf ("A juncao dos nomes e: %s \n", cad1);
    system ("PAUSE");   
}
