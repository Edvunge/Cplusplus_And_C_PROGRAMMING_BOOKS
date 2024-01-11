#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    5) Faça um programa que leia um número e, 
        caso ele seja positivo, calcule e mostre:
    
        • O número digitado ao quadrado.
        • A raiz quadrada do número digitado.
*/

int main(void) {
    int num = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    int raiz = sqrt(num);
    
    if(num > 0) {
        printf("Numero ao Quadrado: %d \n",num*num);
    } else {
        printf("A raiz quadrada do %d e %d",num ,raiz);
    }
    return (0);
}