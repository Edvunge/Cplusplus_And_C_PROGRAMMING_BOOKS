#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um programa que leia dois números e mostre qual deles é o maior.
*/

int main(void) {
    int num1, num2;

    printf("Digite um o primeiro valor: ");
    scanf("%d",&num1);

    printf("Digite o segundo valor: ");
    scanf("%d",&num2);

    if(num1 > num2) {
        printf("O valor %d e o maior.",num1);
    } else  {
        printf("O valor %d e o maior.",num2);
    }
    return (0);
}