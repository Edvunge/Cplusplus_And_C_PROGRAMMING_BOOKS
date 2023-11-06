#include <stdio.h>
#include <stdlib.h>

/*
8) Faça um programa que leia dois números inteiros e 
depois os imprima na ordem
inversa em que eles foram lidos.
*/

int main(void) {
    int num1, num2;

    printf("Digite dois valores: \n");
    scanf("%d %d",&num1,&num2);

    printf("num2: %d , num1: %d \n",num2 ,num1);
    return 0;
}