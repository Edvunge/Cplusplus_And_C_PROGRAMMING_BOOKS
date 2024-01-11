#include <stdio.h>
#include <stdlib.h>

/* 6) Faça um programa que receba a altura e o 
    sexo de uma pessoa e calcule e mostre seu peso ideal, 
    utilizando as seguintes fórmulas (em que “h” corresponde à altura):
    
    • Homens: (72,7 * h) – 58
    • Mulheres: (62,1 * h) – 44,7
*/

int main(void) {
    float altura_h, pesoIdeial = 0;
    char sexo;

    printf("Digite o sexo: ");
    scanf("%c",&sexo);

    printf("Digite a altura: ");
    scanf("%f",&altura_h);
    
    if(sexo == 'h' || sexo == 'H') {
        pesoIdeial = (72.7 * altura_h) - 58; 
        printf("O peso ideial: %.2f\n",pesoIdeial);
    } else if(sexo == 'm' || sexo == 'M'){
        pesoIdeial = (62.1 * altura_h) - 44.7; 
        printf("O peso ideial: %.2f\n",pesoIdeial);
    } else {
        printf("Carater invalido.");
    }
    return (0);
}