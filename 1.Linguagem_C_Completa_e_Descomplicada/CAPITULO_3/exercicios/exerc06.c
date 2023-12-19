#include <stdio.h>
#include <stdlib.h>
/*
6) Leia uma velocidade em km/h (quilômetros por hora) e 
apresente convertida em m/s (metros por segundo). 
A fórmula de conversão é M = K/36, sendo K a velocidade
em km/h e M em m/s.

*/
int main(void) {
    float velociddKMporHora = 0.0, metrosPORsegundos = 0.0;

    printf("Digite o valor da velocidade: ");
    scanf("%f",&velociddKMporHora);

    metrosPORsegundos = velociddKMporHora/36.0;

    printf("O valor dos mets/s e de: %.2f",metrosPORsegundos);
    return (0);
}