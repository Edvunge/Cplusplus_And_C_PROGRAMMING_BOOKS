#include <iostream>
using namespace std;
/*
Crie uma função que indique se um número é
par ou impar, Receba número do usuario e 
exiba na tela o número recebido e se ele é par ou impar.
*/

int parOuImpar(int numero) {
	if(numero % 2 == 0) {
		return printf("O numero e Par\n");
	} else {
		return printf("o numero e impar\n");
	}
}


int main() {
	int numero;
	cout << "Digite um numero: " << "\n";
	cin  >> numero;
	
	parOuImpar(numero);	
	return 0;
}
