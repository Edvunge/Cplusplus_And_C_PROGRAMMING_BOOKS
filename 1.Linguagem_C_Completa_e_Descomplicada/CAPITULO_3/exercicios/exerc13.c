#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
13) Sejam a e b os catetos de um triângulo cuja hipotenusa h 
é obtida pela equação: h = V (A^2) + (B^2)
Faça um programa que leia os valores de a e b, 
e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.
*/

int main(void) {
    float cateto_adjacente, cateto_oposto, hipotenusa_h;
    double raizQuadrd;

    printf("Digite o cateto adjacente: \n");
    scanf("%f",&cateto_adjacente);

    printf("Digite o cateto oposto: \n");
    scanf("%f",&cateto_oposto);
    
    raizQuadrd = sqrt((cateto_adjacente*cateto_adjacente) + (cateto_oposto*cateto_oposto) );

    hipotenusa_h = raizQuadrd;

    printf("\nDigite o valor da hipotenusa e de: %d ",hipotenusa_h);
    return (0);
}