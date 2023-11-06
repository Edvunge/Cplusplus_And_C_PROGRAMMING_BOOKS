#include <stdio.h>
#include <stdlib.h>

/*
6) Faça um programa que leia um valor do tipo double e 
depois o imprima na forma
de notação científica.
*/

int main(void) {
    double num;

    printf("Digite um valor: ");
    scanf("%lf",&num);

    printf("o valor digitado: %e",num);
    return 0;
}