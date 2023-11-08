#include <iostream>
using namespace std;

/*
1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição, 
caso o resultado seja maior que 10, apresentá-lo.
*/
int main() {
	int num1, num2, soma;
	
	cout << "Digite o primeiro valor: \n";
	cin  >> num1;
	
	cout << "Digite o terceiro valor: \n";
	cin  >> num2;
	
	soma = num1 + num2;
	
	if(soma > 10) {
		cout << "o resultado da soma e: " << soma << "\n";
	} 
  	
  return 0;
}
