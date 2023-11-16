#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//7. Faça um programa em C que leia o nome o endereço 
	//e o telefone de um cliente e no final,
	//mostre esses dados.
	
	char nome[10], endereco[10];
	int numTelef;
	
	printf("Digite o seu nome: ");
	fgets(nome, 15, stdin);
	
	printf("Digite o seu endereco: ");
	fgets(endereco, 15, stdin);
	
	printf("Digite O Seu Numero de telefone: ");
	scanf("%d",&numTelef);
	
	printf("o seu nome e: %s",nome);
	printf("o seu endereco e: %s",endereco);
	printf("O numero de telefone: %d\n",numTelef);
	return (0);
}

