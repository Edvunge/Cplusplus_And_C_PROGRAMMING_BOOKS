#include <iostream>
using namespace std;
/*
Crie uma fun��o que indique se um n�mero �
par ou impar, Receba n�mero do usuario e 
exiba na tela o n�mero recebido e se ele � par ou impar.
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
