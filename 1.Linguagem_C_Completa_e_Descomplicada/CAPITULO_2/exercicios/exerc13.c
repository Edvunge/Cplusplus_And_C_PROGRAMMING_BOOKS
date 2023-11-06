#include <stdio.h>
#include <stdlib.h>

/*
13) Faça um programa que leia um caractere do 
tipo char e depois o imprima entre
aspas duplas. Assim, 
se o caractere lido for a letra A, deverá ser impresso “A”.
*/

int main(void) {
    char caracter;

    printf("Digite um caractere: %c\n");
    scanf("%c",&caracter);

    printf(" \"%c\" ",caracter);
    return 0;
}