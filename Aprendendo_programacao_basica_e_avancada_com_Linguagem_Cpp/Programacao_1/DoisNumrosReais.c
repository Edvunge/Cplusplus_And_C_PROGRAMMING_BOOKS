#include <stdio.h>
#include <stdlib.h>

// 5. Fa�a um programa em C que leia dois n�meros reais e os mostre.

int main(void) {
	float num1, num2;	
	
	printf("Digite um numero inteiro\n");
	scanf("%f",&num1);
	
	printf("Digite o segundo numero inteiro\n");
	scanf("%f",&num2);
	
	printf("os numeros sao: %.1f %.1f",num1 ,num2);
	return (0);
}
