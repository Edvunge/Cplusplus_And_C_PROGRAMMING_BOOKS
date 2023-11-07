#include <iostream>
using namespace std;

/*
13. Faça um programa em C que leia o saldo de uma conta poupança e mostre o novo saldo,
considerando um reajuste de 2%.
*/

int main() {
	float saldo, novoSaldo;
	
	cout << "Digite o valor do saldo da conta: \n";
	cin  >> saldo;
	
	novoSaldo = (saldo * 2)/100;
	novoSaldo += saldo;
	
  	cout << "O valor do novo saldo e de: " << novoSaldo;
  return 0;
}
