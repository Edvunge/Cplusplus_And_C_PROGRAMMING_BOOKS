#include <stdio.h>
#include <stdlib.h>

/*
8) Leia um valor que represente uma temperatura em graus Celsius 
e apresente-a convertida em graus Fahrenheit. 
A fórmula de conversão é: F = C ∗ (9.0/5.0) + 32.0, 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

int main(void) {
    float tempGrausCelsius = 0.0, tempGrausFahrenheit = 0.0; 

    printf("Digite um valor em graus celsius: ");
    scanf("%f",&tempGrausCelsius);

    tempGrausFahrenheit = tempGrausCelsius * (9.0/5.0) + 32.0;

    printf("O valor em fahrenheit e de: %.2f",tempGrausFahrenheit);
    return (0);
}