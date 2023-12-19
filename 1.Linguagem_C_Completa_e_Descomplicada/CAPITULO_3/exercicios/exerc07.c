#include <stdio.h>
#include <stdlib.h>

/*
7) Faça um programa que leia um valor em reais e a cotação do dólar. 
Em seguida, imprima o valor correspondente em dólares.
*/
int main(void) {
    float valorEmReal = 0.0, cotacaoDolar = 0.0; 
    const float CAMBIO_DIA = 3.0;

    printf("Digite um valor em reais: ");
    scanf("%f",&valorEmReal);

    cotacaoDolar = valorEmReal*CAMBIO_DIA;

    printf("O valor em Dolar e de: %.2f",cotacaoDolar);
    return (0);
}