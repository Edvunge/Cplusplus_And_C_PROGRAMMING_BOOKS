#include <stdio.h>
#include <stdlib.h>

/*
9) Leia um ângulo em graus e apresente-o convertido em radianos. 
A fórmula de conversão é R = G ∗ π/180, 
sendo G o ângulo em graus e R em radianos e π = 3.141592.
*/

int main(void) {
    float angGraus = 0.0, radianos = 0.0;
    const float PI = 3.141592; 

    printf("Digite um valor em graus: ");
    scanf("%f",&angGraus);

    radianos = angGraus * (PI/180);

    printf("O valor em radianos e de: %.2f",radianos);
    return (0);
}