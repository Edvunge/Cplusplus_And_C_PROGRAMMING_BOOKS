#include <iostream>
using namespace std;

/*
1. Fa�a um programa em C que leia dois valores num�ricos inteiros e efetue a adi��o, 
caso o resultado seja maior que 10, apresent�-lo.
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
