#include <iostream>

using namespace std;
/*
Crie uma variavel de nome Numero do tipo inteiro e valor inicial igual a 234;

Crie um ponteiro de nome Ponteiro capaz de apontar para uma variavel do tipo inteiro.
*/
int main(void) {
	
	int numero = 234;
	int *ponteiro = *numero;
	
	cout << "O valor da variavel e: " << numero << "\n";
	return (0);
}
