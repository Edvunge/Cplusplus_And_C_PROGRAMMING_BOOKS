#include <stdio.h>
#include <stdlib.h>

/*
3) Faça um programa que leia três valores inteiros e mostre sua soma.
*/

int main(void) {
    int num1, num2, num3;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&num1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d",&num2);

    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d",&num3);

    int soma = num1 + num2 + num3;

    printf("soma dos numeros: %d\n",soma);
    return (0);
}