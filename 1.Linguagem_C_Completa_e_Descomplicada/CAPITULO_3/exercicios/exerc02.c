#include <stdio.h>
#include <stdlib.h>

/*
2) Faça um programa que leia um número real 
    e imprima a quinta parte desse número.
*/

int main(void) {
    float num = 0.0, quintaParte;

    printf("Digite um numero real: \n");
    scanf("%f",&num);

    quintaParte = (num/5);

    printf("%.2f\n",quintaParte);
    return (0);
}