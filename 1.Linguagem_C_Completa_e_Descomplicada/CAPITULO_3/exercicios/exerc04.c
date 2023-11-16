#include <stdio.h>
#include <stdlib.h>

/*
4) Leia quatro valores do tipo float. 
    Calcule e exiba a média aritmética desses valores.
*/

int main(void) {
    float num1, num2, num3, num4;

    printf("Digite um numero real: \n");
    scanf("%f",&num1);

    printf("Digite o segundo numero real: \n");
    scanf("%f",&num2);

    printf("Digite o terceiro numero real: \n");
    scanf("%f",&num3);

    printf("Digite o quarto numero real: \n");
    scanf("%f",&num4);

    float mediaAritmetica = (num1 + num2 + num3 + num4)/4;

    printf("a media aritmetica: %.2f\n",mediaAritmetica);
    return (0);
}