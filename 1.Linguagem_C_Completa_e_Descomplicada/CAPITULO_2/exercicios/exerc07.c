#include <stdio.h>
#include <stdlib.h>

/*
7) Elabore um programa que leia um caractere e 
depois o imprima como um valor
inteiro.
*/

int main(void) {
    char c;

    printf("Digite o valor do caractere: \n");
    scanf("%c",&c);

    //printf("O valor do caractere: %d\n",c);
    printf("O valor inteiro do caractere '%c' e: %d\n", c, c);
    return 0;
}