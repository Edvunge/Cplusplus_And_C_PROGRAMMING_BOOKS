#include <stdio.h>
#include <stdlib.h>
// 1. Faça um programa em C que mostre o seu nome.

int main(void) {
	char nome[15];
	
	printf("Digite o seu nome: \n");
	fgets(nome, 15, stdin);	
	
	printf("o seu nome: %s ",nome);
	return (0);
}
