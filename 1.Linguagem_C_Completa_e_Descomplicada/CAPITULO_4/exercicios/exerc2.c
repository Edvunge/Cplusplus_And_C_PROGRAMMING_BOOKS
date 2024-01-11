#include <stdio.h>
#include <stdlib.h>

/*
2) Faça um programa que leia dois números e mostre o maior deles. 
Se, por acaso, os dois números forem iguais, 
imprima a mensagem “Números iguais”.
*/

int main(void) {
    int num1, num2;

    printf("Digite um o primeiro valor: ");
    scanf("%d",&num1);

    printf("Digite o segundo valor: ");
    scanf("%d",&num2);

    if(num1 > num2) {
        printf("O valor %d e o maior.",num1);
    } else if (num2 > num1)  {
        printf("O valor %d e o maior.",num2);
    } else  {
        printf("Numeros iguais");
    }
    return (0);
}