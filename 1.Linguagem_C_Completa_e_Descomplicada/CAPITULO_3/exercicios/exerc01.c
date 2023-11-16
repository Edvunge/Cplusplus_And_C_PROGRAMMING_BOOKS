#include <stdio.h>
#include <stdlib.h>

/*
1) Faça um programa que leia um número inteiro e 
    retorne seu antecessor e seu sucessor.
*/

int main(void) {
    int num = 0, antecessor = 0, sucessor = 0;

    printf("Digite um numero: \n");
    scanf("%d",&num);

    sucessor = num - 1;
    antecessor = num + 1;

    printf("O valor do Sucessor: %d\n",sucessor);
    printf("O valor do Antecessor: %d\n",antecessor);
    return (0);
}