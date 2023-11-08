#include <iostream>
#include <stdio.h>
using namespace std;

/*
7. Faça um programa em C que leia o nome o endereço e o telefone de um cliente e no final,
mostre esses dados.
*/

int main() {
	char nome[8], endereco[8];
	int numTelef;
	
  	cout << "Digite o seu nome: \n";
  	fgets(nome, 8, stdin);
  	
  	cout << "Digite a sua morada: \n";
  	fgets(endereco, 8, stdin);
  	
  	cout << "Digite o numero telef: \n";
  	cin  >> numTelef;
  	
  	cout << "\n\no seu nome: " << nome << "\n";
  	cout << "o seu endereco: " << endereco << "\n";
  	cout << "o seu telef: " << numTelef << "\n";
  return 0;
}
