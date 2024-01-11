#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que leia um número inteiro 
    e verifique se esse número é par ou ímpar.
*/

int main(void) {
    int num;

    printf("Digite um valor: ");
    scanf("%d",&num);

    if(num % 2 == 0) {
        printf("O %d e PAR.\n",num);
    } else  {
        printf("O %d e IMPAR.\n",num);
    }
    return (0);
}